// CAN0 INT and CS
#define CAN0_INT 2                              // Set INT to pin 2
MCP_CAN CAN0(10);                               // Set CS to pin 10
// CAN RX Variables
long unsigned int rxId;
unsigned char len;
unsigned char rxBuf[8];
char msgString[128];

void Initialize()
{
  Serial.begin(9600);
  //if (CAN0.begin(MCP_ANY, CAN_100KBPS, MCP_8MHZ) == CAN_OK)//K-CAN
  if (CAN0.begin(MCP_ANY, CAN_1000KBPS, MCP_16MHZ) == CAN_OK)//K-CAN2
    Serial.println("MCP2515 Initialized Successfully!");
  else
    Serial.println("Error Initializing MCP2515...");

  CAN0.setMode(MCP_NORMAL);

  pinMode(CAN0_INT, INPUT);                           // Configuring pin for /INT input
}
void PrintMessage() {
  sprintf(msgString, "0x%.3lX | %1d | ", rxId, len);
  Serial.print(msgString);
  for (byte i = 0; i < len; i++)
  {
    sprintf(msgString, " 0x%.2X |", rxBuf[i]);
    Serial.print(msgString);

  }
  Serial.println();
}

void WriteMessage(byte header, int bufferLength, byte payload[]) {
  if (CAN0.sendMsgBuf(header, 0, bufferLength, payload) != CAN_OK)
  {
    Serial.print("Error sending packet");
  }
}
