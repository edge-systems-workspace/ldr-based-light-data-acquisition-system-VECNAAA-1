#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Saurav Gautam
 * @date 2026-02-27
 */

// TODO 1:
// Define LDR analog pin (Use A0)
const int ldrPin = A0;

// TODO 2:
// Create variable to store sensor reading
int ldrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    // Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    // Serial.println("==================================");
    // Serial.println(" LDR Light Monitoring System ");
    // Serial.println(" System Initialized Successfully ");
    // Serial.println("==================================");
}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    // ldrValue = analogRead(ldrPin);

    // TODO 6:
    // Print raw ADC value
    // Serial.print("Raw ADC Value: ");
    // Serial.println(ldrValue);

    // TODO 7 & 8:
    // Apply threshold logic (Bright / Dark detection)
    // if (ldrValue < 500) {   // Adjust threshold after testing
    //     Serial.println("Status: BRIGHT Environment");
    // }
    // else {
    //     Serial.println("Status: DARK Environment");
    // }
    //
    // Serial.println("----------------------------");

    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(1000);
}