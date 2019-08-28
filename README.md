# NodeMCU_LCD_MQ135 
## Podešavanja
### Dodavanje NodeMCU boarda: 
File/Preferences/Additional Boards Manager URLs: https://arduino.esp8266.com/stable/package_esp8266com_index.json
### Instalacija NodeMCU boarda: 
Tools/Board/Boards Manager i u pretrazi pronaći NodeMCU i instalirati taj board.
### Dodavanje biblioteke za LCD:
Skinuti .zip fajl sa ovog linka: https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library i dodati ga u Arduino pomoću opcije: Sketch/Include library/Add .ZIP Library i izabrati pomenuti fajl.

### Mogući problemi:
##### Problem: 
LCD ne prikazuje podatke: Pogrešna adresa (0x27) 
##### Rešenje: 
1. Skinuti I2C scanner sa https://playground.arduino.cc/Main/I2cScanner/
2. Povezati displej sa Arduinom SCL - A5, SDA - A4, VCC - 5V, GND - GND
3. Pokrenuti Arduino i pratiti Serial Monitor za tačnu adresu
