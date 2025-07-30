# Smart Curtain with Light Sensor

This Arduino-based project uses a **28BYJ-48 stepper motor**, a **ULN2003 driver**, and an **LDR sensor** to create an automated smart curtain system. The curtain opens or closes based on ambient light conditions.

## 🛠️ Components Used

- NodeMCU ESP8266
- 28BYJ-48 Stepper Motor
- ULN2003 Stepper Driver Module
- LDR (Light Dependent Resistor) with comparator module (digital output)
- Jumper Wires
- Power Supply (USB/5V)

## ⚙️ Working Principle

- The **LDR sensor** detects the light level.
- When **bright light** is detected (`LOW` on digital pin), the **motor closes the curtain**.
- When it is **dark** (`HIGH` on digital pin), the **motor opens the curtain
