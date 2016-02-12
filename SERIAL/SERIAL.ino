/**********************************************************************************************************
**                                                                                                       **
**                        Operacions suma, resta, multiplicació i divisió                                **
**                                                                                                       **
***********************************************************************************************************/

//******  Includes  ********************************************

int a = 5;
int b = 10;
int c = 20;

//******  Variables  *******************************************


//******  Setup  ***********************************************

void setup() {

  Serial.begin(9600);     // inicia la llibreria a 9600 bps

  Serial.println(" Fare una miqueta de matematiques ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);

  Serial.print("a * c = ");       // multipicació
  Serial.println(a * c);

  Serial.print("c / b = ");       // divisió
  Serial.println(c / b);

  Serial.print("c % b = ");       // tant per cent
  Serial.println(c % b);

  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}




//******  Loop  ***********************************************

void loop() {                      // Es nesesita aixo aqui encara que no s'utilitzi

}


