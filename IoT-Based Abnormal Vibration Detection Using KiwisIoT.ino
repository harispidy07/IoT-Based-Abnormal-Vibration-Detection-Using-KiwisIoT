#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu;

#define SDA_PIN D2
#define SCL_PIN D1

const float VIBRATION_LIMIT = 13.0;

void setup() {
  Serial.begin(115200);

  Wire.begin(SDA_PIN, SCL_PIN);

  if (!mpu.begin()) {
    Serial.println("MPU6050 not detected!");
    while (1) delay(10);
  }

  mpu.setAccelerometerRange(
    MPU6050_RANGE_8_G
  );

  mpu.setFilterBandwidth(
    MPU6050_BAND_21_HZ
  );

  Serial.println("Vibration Monitoring Started");
}

void loop() {
  sensors_event_t a, g, temp;

  mpu.getEvent(&a, &g, &temp);

  float magnitude = sqrt(
    a.acceleration.x * a.acceleration.x +
    a.acceleration.y * a.acceleration.y +
    a.acceleration.z * a.acceleration.z
  );

  Serial.print("Acceleration: ");
  Serial.print(magnitude);
  Serial.println(" m/s2");

  if (magnitude > VIBRATION_LIMIT) {
    Serial.println("ABNORMAL VIBRATION DETECTED!");
  } else {
    Serial.println("NORMAL");
  }

  delay(100);
}