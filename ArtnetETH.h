#pragma once
#ifndef ARTNET_ETH_H
#define ARTNET_ETH_H

#define ARTNET_ENABLE_ETHER

#include <Arduino.h>
#include "Artnet/util/ArxTypeTraits/ArxTypeTraits.h"
#include "Artnet/util/ArxContainer/ArxContainer.h"
#include <ETH.h>
#include <WiFiUdp.h>
#include "Artnet/ArtnetCommon.h"

// ETH.h is a library for Ethernet PHY, but we should use WiFi library's apis for sever/client
using Artnet = arx::artnet::Manager<WiFiUDP>;
using ArtnetSender = arx::artnet::Sender<WiFiUDP>;
using ArtnetReceiver = arx::artnet::Receiver<WiFiUDP>;

#endif // ARTNET_ETH_H