/*
  Pass by reference or value? Or pointer? What's the difference?
*/
#include <Arduino.h>
#include <LibPrintf.h>

// Global (😡) variable we are incrementing
int intOne = 1;

// Setup
void setup() {
    Serial.begin(115200);
    delay(2000); // Wait for UART
    printf("Setup completed\n");
}

// Increment and return incoming integer. The variable passed
// into this function is a COPY of the original
int passIntByValue(int myInt) {
    myInt = myInt + 1;
    return myInt;
}

// The integer passed to this function is a REFERENCE to the
// original, not a copy. Thus it can be modified.
void passIntByReference( int &myInt) {
    myInt = myInt + 1;
}

// Main loop
void loop() {

    // Call routine to increment value
    printf("Before increment: intOne=%d\n", intOne);
    int result = passIntByValue(intOne);
    printf("After increment: intOne=%d\n", intOne);

    // Function returns what?
    printf("From function, result = %d\n\n", result);

    printf("Before increment: intOne=%d\n", intOne);
    passIntByReference(intOne);
    printf("After increment: intOne=%d\n\n", intOne);

    // This is a demo
    delay(1000);
}









