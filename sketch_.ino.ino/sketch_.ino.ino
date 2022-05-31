//Por: Jose Anastacio (josegamestest)
int Falante = A0;  // Componente de som

//sequencia de notas desde a Mi prima ate a corda Mi bordao do violao ou guitarra
unsigned int Mi = 329;
unsigned int Si = 246;
unsigned int Sol= 195;
unsigned int Re = 293;
unsigned int La = 110;
unsigned int Mib = 82;

//unsigned long tempo = 5000;
//unsigned long pausa = 1000;
unsigned long tempo = 5000;
unsigned long pausa = 100;
void setup()
{
}
void loop() {
   tone(Falante, Mi);
   delay(tempo);
   noTone(Falante);
   delay(pausa);
  
   tone(Falante, Si);
   delay(tempo);
   noTone(Falante);
   delay(pausa);
  
   tone(Falante, Sol);
   delay(tempo);
   noTone(Falante);
   delay(pausa);
  
   tone(Falante, Re);
   delay(tempo);
   noTone(Falante);
   delay(pausa);
  
   tone(Falante, La);
   delay(tempo);
   noTone(Falante);
   delay(pausa);
  
   tone(Falante, Mib);
   delay(tempo);
   noTone(Falante); delay(pausa);
}
