#include <Easyiot-Esp8266.h>

const char*  ssid = "MEU_SSID"; // <-- Digite aqui o nome da sua rede WiFi
const char* password = "MINHA_SENHA"; // <-- Digite aqui a senha da sua rede WiFi
String EasyToken = "MEU_EASY_TOKEN"; // <-- Cole aqui seu Easy Token, obtido na plataforma https://app.easyiot.com.br
int intervalo_de_transmissao = 10000; // <-- Intervalo em milissegundos(10.000 ms == 10s)

void setup() {
  
  Serial.begin(9600);
  delay(2000);
  Serial.print("Conectando a ");
  Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  SNTP();

  
}

void loop() {
  String Dados, resposta;

  Dados = "OLA MUNDO!!"; // A mensagem que sera enviada para a plataforma
  resposta = send(Dados, EasyToken); // A resposta do servidor estará no variavel resposta

  delay(intervalo_de_transmissao);
  
  
}
