#include <LiquidCrystal.h>
// Lcd Setup Here
int rs=7;
int en =8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int dT = 1000;
int tD = 60;
int maxNum;
String msg = "Declare your limit!";
LiquidCrystal lcd(rs,en , d4, d5, d6, d7);

//Temperature and Humdty sensor  here
#include <dht_nonblocking.h>

//www.elegoo.com
//2018.10.25


#include <dht_nonblocking.h>
#define DHT_SENSOR_TYPE DHT_TYPE_11

static const int DHT_SENSOR_PIN = 2;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE );


void setup() {
  // put your setup code here, to run once:
 lcd.begin(16, 2);
 Serial.begin(9600);
}

/*
 * Poll for a measurement, keeping the state machine alive.  Returns
 * true if a measurement is available.
 */
static bool measure_environment( float *temperature, float *humidity )
{
  static unsigned long measurement_timestamp = millis( );

  /* Measure once every four seconds. */
  if( millis( ) - measurement_timestamp > 3000ul )
  {
    if( dht_sensor.measure( temperature, humidity ) == true )
    {
      measurement_timestamp = millis( );
      return( true );
    }
  }

  return( false );
}

void loop() {
     {
  float temperature;
  float humidity;
  /* Measure temperature and humidity.  If the functions returns
     true, then a measurement is available. */
  if( measure_environment( &temperature, &humidity ) == true )
  {
    lcd.setCursor(0,0);
    lcd.print( "T = " );
    lcd.print( temperature, 1 );
    lcd.println( " deg C  ");
    lcd.setCursor(0,1);
    lcd.print("H = " );
    lcd.print( humidity, 1 );
    lcd.println( " %      " );
  }
}
}

//Bonus Code For Printing to a serial monitor
//  Serial.print( " T = " );
//  Serial.print( temperature, 1 );
//  Serial.println( " deg.C,");
//  Serial.print(" H = " );
//  Serial.print( humidity, 1 );
//  Serial.println( " %" );
