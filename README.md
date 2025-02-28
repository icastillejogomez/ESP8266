# ESP8266
<p align="center" ><img src="https://github.com/icastillejogomez/ESP8266/blob/master/NodeMCU_12_E_picture.jpg"></p>

### ¿Qué es MQTT?

MQTT (Message Queue Telemetry Transport), un protocolo usado para la comunicación machine-to-machine (M2M) en el "Internet of Things". Este protocolo está orientado a la comunicación de sensores, debido a que consume muy poco ancho de banda y puede ser utilizado en la mayoría de los dispositivos empotrados con pocos recursos (CPU, RAM, …). Un ejemplo de uso de este protocolo es la aplicación de Facebook Messenger tanto para android y Iphone. La arquitectura de MQTT sigue una topología de estrella, con un nodo central que hace de servidor o "broker" con una capacidad de hasta 10000 clientes. El broker es el encargado de gestionar la red y de transmitir los mensajes, para mantener activo el canal, los clientes mandan periódicamente un paquete (PINGREQ) y esperan la respuesta del broker (PINGRESP). La comunicación puede ser cifrada entre otras muchas opciones.

[Oficial web](mqtt.org)

[Geekytheory web](https://geekytheory.com/que-es-mqtt)

[AWS IoT Protocolos Documentation](https://docs.aws.amazon.com/es_es/iot/latest/developerguide/protocols.html)

<p align="center" ><img src="https://geekytheory.com/wp-content/uploads/2015/05/topologia.png"></p>

### ESP-12-E Pin configuration and functions

<p align="center" ><img src="https://github.com/icastillejogomez/ESP8266/blob/master/esp-12_pindef.png"></p>

### NodeMCU Pinout

<p align="center" ><img src="https://github.com/icastillejogomez/ESP8266/blob/master/nodemcu_pins.png"></p>

### CP2102

<p align="center" ><img src="https://github.com/icastillejogomez/ESP8266/blob/master/cp2102.png"></p>

### Schematic ESP-12-E

<p align="center" ><img src="https://github.com/icastillejogomez/ESP8266/blob/master/schematic_esp-12e.png"></p>

### Tareas

- [ ] Arduino permite escribir en la memoria EEPROM desde código en cualquier dirección de la memoria. Pero... si ahí también se guardan las variables goblales del sketch en tiempo de ejecución ¿ cómo puedo escribir un dato que quiero perdure al tiempo en una dirección de memoria que yo establezca y protegerla para que el sketch no machaque mis datos al ir funcionando?

- [ ] Hay que analizar a la competencia como alimenta sus sensores cuando no estan directamente enchufados a la red eléctrica. ¿LiPo?

- [ ] Tenemos que mirar como se usa y programa una ESPXXXX sin una shield NodeMCU

- [x] Esto es una tarea realizada.

### Páginas web para comprar componentes electrónicos:

1. http://www.gearbest.com/
2. http://www.banggood.com/
3. http://www.tinydeal.com/es
4. http://www.icstation.com/
5. http://www.dx.com/
5. https://www.microchipdirect.com/ Coste envio aprox. 5.96€ Plazo de entrega aprox. 10 días.

### Blogs interesantes

1. [Sensor de temperatura en arduino](https://programarfacil.com/podcast/48-sensor-de-temperatura-en-arduino/)

### Videos interesantes

1. [SuperHouseTV #24: Home automation system architecture](https://www.youtube.com/watch?v=vL54JfldB4Y)
2. [Conectividad Ethernet para Microcontroladores](https://www.youtube.com/watch?v=1yh8d4ocX64)
3. [Conexión Ethernet entre dos MCU](https://www.youtube.com/watch?v=zVTO4wj2UCA)
4. [Microcontroladores PIC : Explicacion y tipos](https://www.youtube.com/watch?v=pgUAigz_UXo)
5. [¿Qué tiene dentro el Monitor Interruptor Wifi Sonoff Pow?](https://www.youtube.com/watch?v=I2yDMbnsstg) Muy bueno para estudiar esquemáticos de ESP8266 con memoria Flash **externa**
6. [Cómo Flashear MicroPython en el ESP8266](https://www.youtube.com/watch?v=6GDvGe1D_0I)
7. [Cómo Funciona una Fuente Conmutada](https://www.youtube.com/watch?v=nT3KajChQuA)
8. [Tutorial sobre La UART/USART](https://www.youtube.com/watch?v=dGDaWapeaw4)
9. [Uso de los protocolos seriales UART/USART](https://www.youtube.com/watch?v=hrlXZzTca6M)
10. [STM32 Arduino Tutorial - How to use the STM32F103C8T6 board with the Arduino IDE](https://www.youtube.com/watch?v=K-jYSysmw9w)
11. [Control Domótico de Televigilancia con Arduino Controlled, Labview y MAC](https://www.youtube.com/watch?v=0Scb8qG2V-Y)
12. [Domótica Barata Sonoff en Español (4). 4CH PRO (4K)](https://www.youtube.com/watch?v=5eO1B4YzFeg)
13. [Mini-cámara VC0706 con interfaz serie 3.3v TTL](https://www.youtube.com/watch?v=28Eoqpn_GRY)
14. [Solid State Relay || DIY or Buy](https://www.youtube.com/watch?v=2UtL2uAYCUA)
15. [How to Make a Smart Security Camera with a Raspberry Pi Zero](https://www.youtube.com/watch?v=Y2QFu-tTvTI)
16. [Inductancias y autoinductancias desde dos puntos de vista](https://www.youtube.com/watch?v=3Pynb1cRaf8)
17. [Condensadores explicados desde tres puntos de vista distintos](https://www.youtube.com/watch?v=XnojEItGA2U)
18. [Autoinducción. Experimentos.](https://www.youtube.com/watch?v=08K8oXa9Qa8)
19. [¿Cómo funciona un motor de inducción?](https://www.youtube.com/watch?v=OlTDyL6ZPOY)
20. [Circuito RLC paralelo](https://www.youtube.com/watch?v=cmdr2vfETfU)
21. [How to Make a Smartphone Connected Door Lock](https://www.youtube.com/watch?v=bAcK80fm1_0)
22. [How RFID Works and How To Make an Arduino based RFID Door Lock](https://www.youtube.com/watch?v=QSx778Gr6Y4)
23. [#64 What is the Ideal Battery Technology to Power 3.3V Devices like the ESP8266?](https://www.youtube.com/watch?v=heD1zw3bMhw)
24. [#58 Sensor ESP8266 funciona 17 días con una pila botón](https://www.youtube.com/watch?v=IYuYTfO6iOs)
25. [#091 How to properly power the ESP8266 modules](https://www.youtube.com/watch?v=wf_msvWv1jk)
26. [New ESP8266 Voltage Regulator Design](https://www.youtube.com/watch?v=J66_8P043ko)
27. [#135 Sensores Radar / Interruptores: Comparaciones y test](https://www.youtube.com/watch?v=9WiJJgIi3W0)
28. [ESP32 with Camera and TFT Display (OV7670, FIFO)](https://www.youtube.com/watch?v=v_8XifFcpaI)
29. [TUTORIAL: ESP8266 Motion Sensor for HomeKit](https://www.youtube.com/watch?v=wA10w_zZ-Mo)
30. [Home Automation at Home Part 7: Lights & Homekit](https://www.youtube.com/watch?v=4jq-FLmUCP8)
31. [Programacion Esp8266: Esp8266 y MQTT](https://www.youtube.com/watch?v=LfWJC-AZBaU)
32. [Tutorial #11 ESP8266 (Parte1) - MQTT + CloudMQTT](https://www.youtube.com/watch?v=MD2pw21HAA8)
33. [Tutorial #12 ESP8266 (Parte2) - MQTT + CloudMQTT + App de Android LinearMQTT](https://www.youtube.com/watch?v=MuTaFhuMdAo)
34. [[Tutorial] MQTT y node-red con ESPino (ESP8266)](https://www.youtube.com/watch?v=2Ii-sJRL7oA)
35. [Seminario de Actualizacion I - Protocolos IoT](https://www.youtube.com/watch?v=9QVHpgcF0yU)
36. [#128 Protocolo MQTT para la domótica](https://www.youtube.com/watch?v=RVccNv3CXc8)
37. [Meetup #8 - Introduccion MQTT](https://www.youtube.com/watch?v=J39kKnJLTRU)
38. [Medidor de carga de baterías y pilas con Arduino paso a paso](https://www.youtube.com/watch?v=mBp5NaivDGk)
39. [Como medir tensiónes mayores a 5v por arduino](https://www.youtube.com/watch?v=nW30cV6_I5o)
40. [Familias de microcontroladores pic](https://www.youtube.com/watch?v=j4Kds3unZIo)
41. [Asi se hace. Fabricacion de placas de circuitos electronicos. Discovery MAX.](https://www.youtube.com/watch?v=LqaRELYZ1yE)
42. [Decodificador Infrarrojo || Protocolo NEC || Proyecto Arduino](https://www.youtube.com/watch?v=QujD8Lo7-3Q)
43. [Interrupciones con Arduino: ejemplo práctico](https://www.youtube.com/watch?v=J4wzZzbryHM)
44. [#101 Long lasting DIY "Amazon Dash Button" using an ESP8266](https://www.youtube.com/watch?v=nbMfb0dIvYc)

### Canales de YouTube interesantes

1. [SuperHouseTV](https://www.youtube.com/channel/UC75HTMhqVZs0sPOMTMQqI9g)
2. [TutoElectro](https://www.youtube.com/channel/UC-sYiyzPbjIGW8wMye9tbIw)
3. [biblioman09](https://www.youtube.com/channel/UC9OHtNnklTrMj9pDu4XiVRQ)
4. [GreatScott!](https://www.youtube.com/channel/UC6mIxFTvXkWQVEHPsEdflzQ)
5. [Hacker House](https://www.youtube.com/channel/UCEcNXmr7DYq1XxpWHSxaN0w)
6. [Andreas Spiess](https://www.youtube.com/channel/UCu7_D0o48KbfhpEohoP7YSQ)
7. [SinapTec](https://www.youtube.com/channel/UC8o-svyM8REGaJknduXI74Q)
8. [Programarfacil](https://www.youtube.com/channel/UCSGPM_kJJ6jiTG4_y_mJXLA)
9. [engineerguy](https://www.youtube.com/channel/UC2bkHVIDjXS7sgrgjFtzOXQ)
