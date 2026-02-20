/*
 * AtmosMorphSentry v1.0 - Achievement Unlocked: 0.1%
  * Hardware: Arduino Uno + Hall Effect Sensor (Pin 2)
   * Logic: Sends "T" via Serial (115200 baud) on magnetic trigger.
    */
    
    const int hallPin = 2;     // Hall Effect Sensor connected to Pin 2
    int lastHallState = HIGH;  // Previous state of the sensor (Active Low)
    
    void setup() {
      // Matching the 115200 baud rate from our Python Engine
        Serial.begin(115200); 
          
            // Set the Hall Pin as input
              pinMode(hallPin, INPUT);
                
                  // Visual confirmation on the built-in LED
                    pinMode(LED_BUILTIN, OUTPUT);
                    }
                    
                    void loop() {
                      // Read the current state of the magnetic sensor
                        int currentHallState = digitalRead(hallPin);
                        
                          // Trigger logic: If magnet is detected (LOW) AND it wasn't there before
                            if (currentHallState == LOW && lastHallState == HIGH) {
                                // Send the trigger character to the Python app
                                    Serial.println("T"); 
                                        
                                            // Pulse the built-in LED for visual feedback
                                                digitalWrite(LED_BUILTIN, HIGH);
                                                    delay(100); 
                                                        digitalWrite(LED_BUILTIN, LOW);
                                                            
                                                                // Small debounce delay to ensure a clean single swipe
                                                                    delay(500); 
                                                                      }
                                                                      
                                                                        // Update the last state for the next loop
                                                                          lastHallState = currentHallState;
                                                                            
                                                                              // Tiny delay to stabilize the 16MHz clock
                                                                                delay(10); 
                                                                                }
                                                                                */
