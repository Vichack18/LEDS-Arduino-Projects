// Pines a utilizar: 9, 8, 6, 7 //
// La funcion void setup se realiza una vez y en ella se declara lo que vamos a utilizar //

void setup() {
  // put your setup code here, to run once:
 pinMode (9 , OUTPUT);
 pinMode (8 , OUTPUT);
 pinMode (6 , OUTPUT);
 pinMode (7 , OUTPUT);

 // pinMode funcion en la que le decimos al arduino que pin y en que modo va a estar el mismo a utilizar //

}

void loop() {  // Por definicion void loop se repite aprox cada 100ms (milisegundos)= se repite 10 veces por segundo //

  // put your main code here, to run repeatedly:
  // digital hace referencia a los pines/entradas digitales mientras que Write es el estado del pin //

 digitalWrite (6, HIGH); // HIGH=ALTO=PRENDIDO && LOW=BAJO=APAGADO //
  // Si queremos prender y apagar y notarlo debemos agregar un penalizador de tiempo/ un retardo, esto se hace con un "delay" //
     delay(5000); // 1000ms = 1seg

digitalWrite (6, LOW);
 delay(200);

digitalWrite (7, HIGH);
  delay(1000);

 digitalWrite (7, LOW);
     delay(200);

  digitalWrite (8, HIGH);
  delay(3000);
  
  digitalWrite (8, LOW);
  delay(1000);

  digitalWrite (9, HIGH);
  delay(400);
  digitalWrite (9, LOW);
  delay(400);
  digitalWrite (9, HIGH);
  delay(400);
  digitalWrite (9, LOW);
  delay(400);
}