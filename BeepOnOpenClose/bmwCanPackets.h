//Finestrini
byte abbassa[] = {0xF4, 0xC0};
byte alza[] = {0xF8, 0xC0};
byte FINESTRINO[] = {0xC3, 0x00, 0xFF};

//Comandi Volante
byte mode[] = {0xF0, 0xD0};// Generic CAN data to send
byte call[] = {0xF1, 0xD0};
byte speak[] = {0xF0, 0xC1};

//Comandi piantone
byte fari[] = {0x20, 0xFC};
byte frecciaSinistra[] = {0x91, 0xF2};
byte frecceInit[] = {0xB1, 0xF2};
byte frecceBlink[] = {0xB1, 0xF1};// Generic CAN data to send
byte bc[] = {0x40, 0xFC};

//Aria Condizionata
byte ac[] = {0xCD, 0xFF, 0xFF, 0xFF, 0xFF};

//Selettore luci
byte luciOn1[] = {0x04, 0x12, 0x25};  // Generic CAN data to send
byte luciOn2[] = {0x04, 0x12, 0x35};  // Generic CAN data to send
byte luciOn3[] = {0x04, 0x12, 0x45};  // Generic CAN data to send

//luci interne
byte luciInterneOn[] = {0xF1, 0xFF};
byte luciInterneOff[] = {0xF0, 0xFF};

//valid lock/unlock
const  byte lockUnlockHeader=0x2B4;
byte lock[] = {0x00, 0xF1};
byte unlock[] = {0x00, 0xF2};
