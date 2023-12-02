# Automatic Plant Watering System

The Automatic Plant Watering System is designed to address the common issue of inconsistent watering, which can harm plant health. Utilizing an Arduino Uno and various sensor modules, this system ensures that plants receive the appropriate amount of water at the right time, promoting optimal growth conditions.

# How to use
### Step 1: 
Download the .ino file and open it in Arduino IDE
### Step 2: 
Download the U8glib and DHT11 external library for Arduino in the library manager of Arduino IDE.
### Step 3: 
Connect the Arduino UNO machine to the computer, in the tools section in Arduino IDE, choose the correct board and port.
### Step 4:
Click verify then upload in Arduino IDE, the code should compile and upload correctly if the two libraries mentioned above are installed correctly.
### Step 5: 
Once the upload succeeds, this Automatic Plant Watering System should run well, you might notice the water pump runs constantly. 
You may test it by placing the bottom part of the soil moisture sensor in water or contact with moisture sources such as a wet paper towel, when contact with enough moisture, the water pump should stop running until the moisture level drops under a certain percentage.
You may also check the digital display for the current moisture level and the current environment's temperature and moisture.
### Step 6:
If everything runs as described in step 5, you can now safely unplug the Arduino UNO from the computer, and connect it to a power source, such as a battery. The machine should stay functional without a computer and run by itself as long as power is supplied.
### Step 7:
Now simply place your water pump into a water source, and insert the soil moisture sensor in your plant's soil, it will now constantly monitor your soil moisture level and water your plant as needed.
## Key Components
Arduino Uno R3: Acts as the central processing unit of the system.
Soil Moisture Sensor: Detects soil moisture level.
Digital Display: Shows temperature and soil moisture data.
Water Pump and Pipe: Delivers water to the plants.
Relay Module: Controls the electrical flow to the water pump.
Temperature and Moisture Sensor: Monitors the environmental conditions.
Connect Cables: Facilitates connections between components.

## System Description
The system uses soil moisture sensors to monitor the soil's moisture level. When the moisture falls below a preset threshold, the Arduino Uno activates a water pump to hydrate the plant. The Arduino, serving as the system's brain, continually reads data from the sensors and manages the activation of the water pump.

A digital display and a temperature moisture sensor module are included for real-time monitoring. Users can view environmental conditions and soil moisture levels directly on the digital display, facilitating easy maintenance and monitoring.

## UML Use Case Diagram
![屏幕截图(327)](https://github.com/CodeChickenACG/CSE321TermPj-AutoWateringSystem/assets/86710386/6d70eaab-0493-4a21-bc74-198d8986c782)

## CRC Cards
Class: User
Responsibility: Activates/deactivates the system; monitors system effectiveness.
Collaborator: Arduino Uno, Digital Display.

Class: Soil Moisture Sensor
Responsibility: Senses soil moisture; transfers data to Arduino.
Collaborator: Arduino Uno.

Class: Arduino UNO
Responsibility: Processes sensor data; controls relay module; displays data.
Collaborator: Relay Module, Digital Display, Sensors, User.

Class: Water Pump and Pipe
Responsibility: Pumps water to plants.
Collaborator: Arduino Uno, Relay Module.

Class: Relay Module
Responsibility: Controls electrical flow to the water pump.
Collaborator: Arduino Uno, Water Pump.

Class: Digital Display
Responsibility: Displays soil moisture and temperature data.
Collaborator: Arduino Uno, User.

Class: Temperature and Moisture Sensor
Responsibility: Detects environmental conditions; transfers data to Arduino.
Collaborator: Arduino Uno.

## Flow Chart
![flowchart drawio (1)](https://github.com/CodeChickenACG/CSE321TermPj-AutoWateringSystem/assets/86710386/3f36fd15-8295-4572-82cf-ba9fdc0ae0bb)

## Block Diagram
![blockDiagram drawio (1)](https://github.com/CodeChickenACG/CSE321TermPj-AutoWateringSystem/assets/86710386/818ec5ee-9dc7-4b70-9e8c-345374799ea8)


