#include "mbed.h"
#include "string"

/** Der Mikrocontroller kann entweder ein eigenes WLAN aufbauen (Accesspoint)
oder sich bei einem vorhandenen Netzwerk anmelden

Soll der ESP01 als Accesspoint oder Station in einem bestehenden WLAN
betrieben werden?
*/

//#define station true  //true=Station
#define station MBED_CONF_APP_WEBSERVER_STATION_MODE   //false=Accesspoint

/** accesspoint
 * #define ip "192.168.5.1"    //IP-Adresse des Webseervers festlegen
 * #define netzmaske "255.255.255.0"  //Netzmaske des Webservers festlegen
 * #define Port 80 //Port des Webservers festlegen. 80: HTTP-Port
*/
#define ip MBED_CONF_APP_WEBSERVER_IP_ADDRESS    //IP-Adresse des Webseervers festlegen
#define netzmaske MBED_CONF_APP_WEBSERVER_NETMASK  //Netzmaske des Webservers festlegen
#define Port MBED_CONF_APP_WEBSERVER_PORT //Port des Webservers festlegen. 80: HTTP-Port

//station
#define scanAPs MBED_CONF_APP_WIFI_SCANAP   //mit true kann nach vorhandenen Netzen gesucht werden
                        //die Anzeige erfolgt mit dem Terminal
#define ssid MBED_CONF_APP_WIFI_SSID  //SSID des WLANs
#define passwort MBED_CONF_APP_WIFI_PASSWORD //Passwort des Netzwerks

//Diagnose-Meldungen an Terminal senden (nein = false)
#define pDebug MBED_CONF_APP_DEBUG

//Anschluss
#define tx MBED_CONF_APP_ESP_PIN_TX
#define rx MBED_CONF_APP_ESP_PIN_RX
#define CH_PD MBED_CONF_APP_ESP_PIN_CH_PD
#define RST MBED_CONF_APP_ESP_PIN_RST
#define ESP8266_DEFAULT_BAUD_RATE   MBED_CONF_APP_ESP_BAUDRATE