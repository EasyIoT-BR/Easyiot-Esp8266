# Easyiot-Esp8266 API

## Include Library

```arduino
#include <Easyiot-Esp8266.h>
```

## Setup

### Begin

After connecting to a WiFi Network, configure the date (The date will be GMT -3)

```arduino
SNTP();
```

## Sending data

### Send

After connecting to a Wifi Network and configuring the date, send data to the platform

```arduino
String response = send(Dados, EasyToken);
```

- `Dados` - Data to send to the platform
- `EasyToken` - Token that identifies the user in the platform

Returns the response of the platform
