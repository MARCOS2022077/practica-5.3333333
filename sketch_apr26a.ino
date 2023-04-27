//se crean las librerias para que se puedan ejecutar el servo motor, el teclado matricial y para la tira led
#include <Adafruit_NeoPixel.h>
#include <Keypad.h>
#include <Servo.h>
#define FILAS 4
#define COLUMNAS 4

Adafruit_NeoPixel tira = Adafruit_NeoPixel(7,11);//SE INDICA EL NUMERO DE PIXELES A USAR Y EL PIN CON EL QUE SE VA A CONTROLAR

char keys[FILAS][COLUMNAS] = {//// se ajustan como van las columnas y filas del teclado matricial
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;// se crea una variable de tipo caracter para depues leer lo que se envie en el teclado matricial
byte Filas[FILAS]={9,8,7,6};// se indica que pines llevan las filas
byte Columnas[COLUMNAS] = {5,4,3,2};// se indica que pines llevan las columnas

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);// se le indica como van las filas y columas del teclado matricial

Servo dota;//SE CREA LA VARIABLE PARA EL SERVO MOTOR

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tira.begin();
  tira.show();//
  dota.attach(10);//SE INDICA QUE QUE PIN SE VA A ENCONTRAR
}

void loop() {
  key = teclado.getKey();//se inica qie la variable key es igual al teclado.getkey

  switch(key){//se crea el switch case para que cuando se inice key mire que caracter toca y haga lo que que se le pida
    case '1'://el case indica que si key toca 1 haga lo siguiente 
      dota.write(0);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '2'://el case indica que si key toca 2 haga lo siguiente 
      dota.write(20);
      delay(100);
    break;//parar la función

    case '3'://el case indica que si key toca 3 haga lo siguiente 
      dota.write(40);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '4'://el case indica que si key toca 4 haga lo siguiente 
      dota.write(60);
      delay(100);
    break;//parar la función

    case '5'://el case indica que si key toca 5 haga lo siguiente 
      dota.write(80);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '6'://el case indica que si key toca 6 haga lo siguiente 
      dota.write(100);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '7'://el case indica que si key toca 7 haga lo siguiente 
      dota.write(120);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '8'://el case indica que si key toca 8 haga lo siguiente 
      dota.write(140);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '9'://el case indica que si key toca 9 haga lo siguiente 
      dota.write(160);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case '0'://el case indica que si key toca 0 haga lo siguiente 
      dota.write(180);//se indica los grados a moverse el servo motor
      delay(100);
    break;//parar la función

    case 'A'://el case indica que si key toca A haga lo siguiente 
      for(int i = 0; i<7; i = i+3 ){//se crea una variable adentro que su valor es cero y ahí en for se indica que cuando i<7 este salga de ese bucle y despues se indica como se va a incrimentar
        tira.setBrightness(100);//reasignará el máximo para toda la tira
        tira.setPixelColor(i, 0,148,226);// se le indica que el pin y luego los tres configuraciones para que de un color
       tira.show();
        delay(100);
      }
    break;//parar la función

    case 'B'://el case indica que si key toca B haga lo siguiente 
      for(int i = 7; i>=-1; i--) {//se crea una variable adentro que su valor es 7 y ahí en for se indica que cuando i>=-1 este salga de ese bucle y despues se indica como se va a disminuyyendo
        tira.setBrightness(100);//reasignará el máximo para toda la tira
        tira.setPixelColor(i, 100,0,145);// se le indica que el pin y luego los tres configuraciones para que de un color
        tira.show();
       delay(100);
     }
    break;//parar la función

    case 'C'://el case indica que si key toca 1 haga lo siguiente 
     for(int i = 0; i<7; i = i+2) {//se crea una variable adentro que su valor es cero y ahí en for se indica que cuando i<7 este salga de ese bucle y despues se indica como se va a incrimentar
       tira.setBrightness(100);//reasignará el máximo para toda la tira
        tira.setPixelColor(i, 255, 240, 245);// se le indica que el pin y luego los tres configuraciones para que de un color
       tira.show();
       delay(100);
     } 
    break;//parar la función

    case 'D'://el case indica que si key toca 1 haga lo siguiente 
      for(int i = 7; i>=-1; i--) {//se crea una variable adentro que su valor es 7 y ahí en for se indica que cuando i>=-1 este salga de ese bucle y despues se indica como se va a disminuyyendo
       tira.setBrightness(100);//reasignará el máximo para toda la tira
        tira.setPixelColor(i, 250, 225, 0);// se le indica que el pin y luego los tres configuraciones para que de un color
        tira.show();
       delay(100);
     }
    break;//parar la función

    case '*' ://el case indica que si key toca 1 haga lo siguiente 
      for(int i=0;i<7 ;i++){//se crea una variable adentro que su valor es cero y ahí en for se indica que cuando i<7 este salga de ese bucle y despues se indica como se va a incrimentar
          tira.setBrightness(100);//reasignará el máximo para toda la tira
          tira.setPixelColor(i, 128, 145, 88);// se le indica que el pin y luego los tres configuraciones para que de un color
          tira.show();
          delay(100);
      }
    break;//parar la función

    case '#'://el case indica que si key toca 1 haga lo siguiente 
      for(int i = 7; i >=-1; i = i-2 ){//se crea una variable adentro que su valor es 7 y ahí en for se indica que cuando i>=-1 este salga de ese bucle y despues se indica como se va a disminuyyendo
       tira.setBrightness(100);//reasignará el máximo para toda la tira
       tira.setPixelColor(i, 45,78,155);// se le indica que el pin y luego los tres configuraciones para que de un color
       tira.show();
        delay(100);
      }
    break;//parar la función
}

}