# CatSniffer

CatSniffer es una placa de desarrollo original multiprotocolo para el Internet de las Cosas (IoT). Cuenta con un diseño tipo “memoria usb” que facilita el transporte y uso en cualquier momento. Integra un chip CC1352 de TI, un SX1276 y el SAMD21E18 todos de última generación. 

Esta placa es una herramienta auditora para dispositivos de red inalámbrica, que permite al usuario detectar grandes consumos de ancho de banda para así poder tomar medidas oportunas ante agentes malignos. 

Este trabajo esta inspirado en el trabajo de nuestro gran amigo [Michael Ossmann](https://twitter.com/michaelossmann) como tributo a su gran trabajo en [Greatscott Gadgets](https://greatscottgadgets.com/) creando YardStick, GreatFET, HackRF y Ubertooth, gracias.

## Protocols

- Thread, Zigbee, 
- Bluetooth 5 Low Energy, 
- IEEE 802.15.4g, 
- Objetos inteligentes habilitados para IPv6 (6LoWPAN), 
- Subanda 1Ghz y sistemas patentados
- LoRa y LoRaWAN

## Features

- TI CC1352R Microcontrolador inalámbrico multiprotocolo de 2,4 GHz dirigido a Thread, Zigbee, Bluetooth 5 Low Energy, IEEE 802.15.4g, objetos inteligentes habilitados para IPv6 (6LoWPAN), subbanda 1Ghz y sistemas patentados
- Se comunica con la computadora host a través del puente USB-UART SAMR34 microcontrolador LoRa, no es necesaria la instalación manual del controlador en la mayoría de los casos (Windows y Linux)
- Autoprogramación a través del cargador de arranque en serie de la serie TI CC. Siempre que no esté explícitamente deshabilitado en el código, no se necesita programador externo. Pulsador en el pin predeterminado para activar este modo
encabezado de depuración cJTAG, en caso de que deshabilite BSL por accidente o desee una interfaz de depuración adecuada
- Puerto de antena SMA para una antena externa de su elección
- LEDs de uso general

## Compatible Software

- [Oficial TI PACKET-SNIFFER-2 v1.9](https://www.ti.com/tool/download/PACKET-SNIFFER-2)
- [Sniffle](https://github.com/nccgroup/Sniffle)
- [zigbee2mqtt](https://github.com/Koenkk/zigbee2mqtt)
- [Z-Stack-firmware](https://github.com/Koenkk/Z-Stack-firmware)

## Prerequisites

- Git
- Python 3

## Note
This kit is designed to allow Product developers to evaluate electronic components, circuit, or software associated with the kit to determine whether to incorporate such items in a finished product and Software developers to write software applications for use with the end product. This kit is a developer product and when assembled may not be resold or otherwise marketed unless all required FCC (or any other local authority) equipment authorizations are first obtained. Operation is subject to the condition that this product not cause harmful interference to licensed radio stations and that this product accept harmful interference.

## License

Electronic Cats invests time and resources providing this open source design, please support Electronic Cats and open-source hardware by purchasing products from Electronic Cats!

Designed by Electronic Cats.

Firmware released under an GNU AGPL v3.0 license. See the LICENSE file for more information.

Hardware released under an CERN Open Hardware Licence v1.2. See the LICENSE_HARDWARE file for more3 april 2021Electronic Cats is a registered trademark, please do not use if you sell these PCBs.

3 April 2021
