#include <SPI.h>

#include <MFRC522.h>



#define RST_PIN         9           

#define SS_PIN          10          



MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.



String read_rfid;                   // Add how many you need and don't forget to include the UID.

String ok_rfid_1="Card UID";        // Your Card UID

String ok_rfid_2="Keyfobe UID";     // Your Keyfobe UID

int lock = 7;                       // For the Card.

int lock2 = 7;                      // For the Keyfob.

/*

 * Initialize.

 */

void setup() {

    Serial.begin(9600);         // Initialize serial communications with the PC

    while (!Serial);            

    SPI.begin();                // Init SPI bus

    mfrc522.PCD_Init();         // Init MFRC522 card



    //Choose which lock below:

    pinMode(lock, OUTPUT);

    pinMode(lock2, OUTPUT);

}


void dump_byte_array(byte *buffer, byte bufferSize) {

    read_rfid="";

    for (byte i = 0; i < bufferSize; i++) {

        read_rfid=read_rfid + String(buffer[i], HEX);

    }

}



void open_lock() {

  //Use this routine when working with Relays and Solenoids etc.

  digitalWrite(lock,HIGH);

  delay(500);

  digitalWrite(lock,HIGH);

}





void close_lock2() {         

  digitalWrite(lock2, LOW);

  delay(5000);                

  digitalWrite(lock2,LOW);

}





void loop() {



      // Look for new cards

    if ( ! mfrc522.PICC_IsNewCardPresent())

        return;



    // Select one of the cards

    if ( ! mfrc522.PICC_ReadCardSerial())

        return;



    dump_byte_array(mfrc522.uid.uidByte, mfrc522.uid.size);

    Serial.println(read_rfid);

    if (read_rfid==ok_rfid_1) {

      //ok, open the door.

      open_lock();

    }



    Serial.println(read_rfid);

    if (read_rfid==ok_rfid_2) {

      //ok, open the door.

      close_lock2();

    }