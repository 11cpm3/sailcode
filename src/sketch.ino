#include "sketch.h"

void test_kcompare() {
    // Nothing yet
}

void setup() {
    Serial.begin(115200);

    testk = new kstring( 100 );
    mycon = new ashcon(&Serial);
    pinMode(LED_PIN, OUTPUT);

    Serial.println("Testing console");
}

void loop() {


    mycon->printf("> ");
    mycon->get_line();
    mycon->printf("%s\n\r", mycon->get_command_buffer() );

    /*mycon->printf("Shutdown. \n\r");*/
    /*delete mycon;*/
    /*delete testk;*/
    /*while( true ) delay( 100 );*/
}

