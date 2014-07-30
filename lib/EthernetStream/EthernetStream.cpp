/*
  EthernetStream.cpp - Streaming Ethernet Arduino library 
  Copyright (c) 2012 Anton Smirnov (dev@antonsmirnov.name)
  Changes
            (c) 2014 Peter Schwarz (peter.schwarz@bicycle.io)
*/

/******************************************************************************
 * Includes
 ******************************************************************************/

#include "EthernetStream.h"


/******************************************************************************
 * Definitions
 ******************************************************************************/

 EthernetStream::EthernetStream()
 {
    
 }

int EthernetStream::begin(uint8_t *mac_address, uint16_t port)
{
    // start DHCP and check result
    int result = Ethernet.begin(mac_address);
    if (result == 0)
        return 0;

    server = new EthernetServer(port);
    server->begin();
    return result;  
}

void EthernetStream::begin(uint8_t *mac_address, IPAddress local_ip, uint16_t port)
{
    Ethernet.begin(mac_address, local_ip);
    server = new EthernetServer(port);
    server->begin();
}

IPAddress EthernetStream::localIP()
{
    return Ethernet.localIP();
}

int EthernetStream::connect_client() 
{
    if (!(client && client.connected())) {
        EthernetClient newClient = server->available();
        if (!newClient)         
            return 0;

        client = newClient;   
    }
    return 1;
}

int EthernetStream::available()
{
    return connect_client() ? client.available() : 0;
}

int EthernetStream::read()
{
    return connect_client() ? client.read() : 0;
}

void EthernetStream::flush() {
    if (client) client.flush();
}

int EthernetStream::peek() {
    return client ? client.peek(): 0;
}

size_t EthernetStream::write(uint8_t outcomingByte) {  
    if(connect_client()) client.write(outcomingByte);
}
