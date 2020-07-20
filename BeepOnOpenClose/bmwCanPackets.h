//Windows
byte abbassa[] = {0xF4, 0xC0};
byte alza[] = {0xF8, 0xC0};
byte FINESTRINO[] = {0xC3, 0x00, 0xFF};

//Steering Wheel commands
byte mode[] = {0xF0, 0xD0};// Generic CAN data to send
byte call[] = {0xF1, 0xD0};
byte speak[] = {0xF0, 0xC1};

//Lights commands
byte Headlights[] = {0x20, 0xFC};
byte RightBlinker[] = {0x91, 0xF2};
byte BlinkerInit[] = {0xB1, 0xF2};
byte Blink[] = {0xB1, 0xF1};// Generic CAN data to send
byte BcButton[] = {0x40, 0xFC};

//Aria Condizionata
byte ac[] = {0xCD, 0xFF, 0xFF, 0xFF, 0xFF};

//Selettore luci
byte LightsOn1[] = {0x04, 0x12, 0x25};  // Generic CAN data to send
byte LightsOn2[] = {0x04, 0x12, 0x35};  // Generic CAN data to send
byte LightsOn3[] = {0x04, 0x12, 0x45};  // Generic CAN data to send

//luci interne
byte InternalLightsOn[] = {0xF1, 0xFF};
byte InternalLightsOff[] = {0xF0, 0xFF};

//valid lock/unlock
const byte lockUnlockHeader = 0x2B4;
byte lock[] = {0x00, 0xF1};
byte unlock[] = {0x00, 0xF2};
