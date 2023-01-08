const int izq1 = 2;
const int izq2 = 3;
const int izq3=4;
const int izq4=5;
const int der1=6;
const int der2=7;
const int der3=8;
const int der4=9;

bool estaenvector(int valor,int array[],int tam)
{
  int cont;
  for (cont=0;cont<tam;cont++){
    if (array[cont]==valor) {break;}
  }
  if (cont<tam) {
    return(true);}
  else {
    return(false);}
}

void aleatorio (int *v,int n)
{
  int aux;
  int contador=0;
  do 
  	{
    randomSeed(analogRead(A0));
    aux=random(1,n+1);
    if (!(estaenvector(aux,v,n))) { 
      *(v+contador)=aux;
      contador++;}
  } while (contador<n);
}


void setup()
{
  pinMode(izq1, OUTPUT);
  pinMode(izq2, OUTPUT);
  pinMode(izq3, OUTPUT);
  pinMode(izq4, OUTPUT);
  pinMode(der1, OUTPUT);
  pinMode(der2, OUTPUT);
  pinMode(der3, OUTPUT);
  pinMode(der4, OUTPUT);
}

void loop()
{
  int n;
  int vector[4]={0,0,0,0};
  aleatorio(vector,4);
  
  for (n=0;n<4;n++){
    digitalWrite(izq1, LOW);
    digitalWrite(der1, LOW);
    digitalWrite(izq2, LOW);
    digitalWrite(der2, LOW);
    digitalWrite(izq3, LOW);
    digitalWrite(der3, LOW);
    digitalWrite(izq4, LOW);
    digitalWrite(der4, LOW);
    
    if (vector[n]==1) {
    	digitalWrite(izq1, HIGH);
      	digitalWrite(der1, HIGH);
    }
    if (vector[n]==2) {
    	digitalWrite(izq2, HIGH);
      	digitalWrite(der2, HIGH);
    }
    if (vector[n]==3) {
    	digitalWrite(izq3, HIGH);
      	digitalWrite(der3, HIGH);
    }
    if (vector[n]==4) {
    	digitalWrite(izq4, HIGH);
      	digitalWrite(der4, HIGH);
    }
    delay(100);
    
  }
  
  for (n=0;n<2;n++){
    delay(133);
  }
  
}
