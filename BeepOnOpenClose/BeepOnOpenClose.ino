#include <mcp_can.h>
#include <SPI.h>
#include "bmwCanPackets.h"
#include "mcp2515.h"
#include "actions.h"

void setup() {
  pinMode(PinHorn, OUTPUT);
  Initialize();
}

void loop() {
  if (!digitalRead(CAN0_INT))                         // If CAN0_INT pin is low, read receive buffer
  {
    CAN0.readMsgBuf(&rxId, &len, rxBuf);              // Read data: rxId= Header, len = data length, buf = data byte(s)
    // Print packets on serial port
    //    if ((rxId & 0x1FFFFFFF) == 0x23A)
    //    {
    //      PrintMessage();
    //    }

    switch (rxId)
    {
      case 0x23A:
        if (rxBuf[2] == 0x01)
        {
          openSound();
          Serial.println("suonoApertura");
        }
        if (rxBuf[2] == 0x04)
        {
          closeSound();
          Serial.println("suonoChiusura");
        }
        delay(2000);
    }
  }
}
