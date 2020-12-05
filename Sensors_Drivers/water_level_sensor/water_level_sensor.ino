/*
 * rosserial PubSub Example
 * Prints "hello world!" and toggles led
 */


#include <ros.h>
#include <std_msgs/Int16.h>

ros::NodeHandle  nh;
std_msgs::Int16 waterLvlSensor;
ros::Publisher water_level_pub("water_level", &waterLvlSensor);

// Sensor pins
#define sensorPower 7
#define sensorPin A0

// Value for storing water level
int val = 0;

void setup() {
  nh.initNode();
  nh.advertise(water_level_pub);
  
  // Set D7 as an OUTPUT
  pinMode(sensorPower, OUTPUT);
  
  // Set to LOW so no power flows through the sensor
  digitalWrite(sensorPower, LOW);
  
  Serial.begin(57600);
}

void loop() {
  //get the reading from the function below and print it
  int level = readSensor();
  
  waterLvlSensor.data = level;
  water_level_pub.publish( &waterLvlSensor );

//  Serial.print("Water level: ");
//  Serial.println(level);
  nh.spinOnce();
  delay(90);
}

//This is a function used to get the reading
int readSensor() {
  digitalWrite(sensorPower, HIGH);  // Turn the sensor ON
  delay(10);              // wait 10 milliseconds
  val = analogRead(sensorPin);    // Read the analog value form sensor
  digitalWrite(sensorPower, LOW);   // Turn the sensor OFF
  return val;             // send current reading
}
