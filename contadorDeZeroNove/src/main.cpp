#include <Arduino.h>

int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int buttonPin = 2;
int leitura = 0;
int ultleitura = 0;//Última leitura do botão
int contador = 0;//Correspondente ao contador

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}
//Função para escrever o nº zero
void zero() {
 digitalWrite(a, 1);//coloca a em nível alto
 digitalWrite(b, 1);//coloca b em nível alto
 digitalWrite(c, 1);//coloca c em nível alto
 digitalWrite(d, 1);
 digitalWrite(e, 1);
 digitalWrite(f, 1);
 digitalWrite(g, 0);
 delay(100);
}
//Função para escrever o nº um
void um() {
digitalWrite(a, 0);
 digitalWrite(b, 1);
digitalWrite(c, 1);
 digitalWrite(d, 0);
 digitalWrite(e, 0);
 digitalWrite(f, 0);
 digitalWrite(g, 0);
 delay(100);
}
//Função para escrever o nº dois
void dois() {
 digitalWrite(a, 1);
 digitalWrite(b, 1);
 digitalWrite(c, 0);
 digitalWrite(d, 1);
 digitalWrite(e, 1);
 digitalWrite(f, 0);
 digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº três
void tres() {
 digitalWrite(a, 1);
 digitalWrite(b, 1);
 digitalWrite(c, 1);
 digitalWrite(d, 1);
 digitalWrite(e, 0);
 digitalWrite(f, 0);
 digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº quatro
void quatro() {
 digitalWrite(a, 0);
 digitalWrite(b, 1);
 digitalWrite(c, 1);
 digitalWrite(d, 0);
 digitalWrite(e, 0);
 digitalWrite(f, 1);
 digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº cinco
void cinco() {
 digitalWrite(a, 1);
 digitalWrite(b, 0);
 digitalWrite(c, 1);
 digitalWrite(d, 1);
digitalWrite(e, 0);
 digitalWrite(f, 1);
 digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº seis
void seis() {
 digitalWrite(a, 1);
 digitalWrite(b, 0);
 digitalWrite(c, 1);
 digitalWrite(d, 1);
 digitalWrite(e, 1);
 digitalWrite(f, 1);
 digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº sete
void sete() {
 digitalWrite(a, 1);
 digitalWrite(b, 1);
 digitalWrite(c, 1);
 digitalWrite(d, 0);
 digitalWrite(e, 0);
 digitalWrite(f, 0);
 digitalWrite(g, 0);
 delay(100);
}
//Função para escrever o nº oito
void oito() {
 digitalWrite(a, 1);
 digitalWrite(b, 1);
 digitalWrite(c, 1);
 digitalWrite(d, 1);
 digitalWrite(e, 1);
 digitalWrite(f, 1);
digitalWrite(g, 1);
 delay(100);
}
//Função para escrever o nº nove
void nove() {
 digitalWrite(a, 1);
 digitalWrite(b, 1);
 digitalWrite(c, 1);
 digitalWrite(d, 1);
 digitalWrite(e, 0);
 digitalWrite(f, 1);
 digitalWrite(g, 1);
 delay(100);
}
void loop(){
 leitura = digitalRead(buttonPin);//Lê o estado de buttonPin e armazena em leitura
 if(leitura != ultleitura) {// Compara a leitura do botão com a leitura anterior
 if(leitura == HIGH) {//Se leitura for igual a HIGH
 contador++;//Incrementa contador em 1
 }
 }
 ultleitura = leitura;//Atribui a ultleitura o conteúdo de leitura
 switch (contador) {
    case 0:
    zero();//Executa a função zero
    break;
    case 1:
    um();//Executa a função um
    break;
    case 2:
    dois();//Executa a função dois
    break;
    case 3:
    tres();//Executa a função três
    break;
    case 4:
    quatro();//Executa a função quatro
    break;
    case 5:
    cinco();//Executa a função cinco
    break;
    case 6:
    seis();//Executa a função seis
    break;
    case 7:
    sete();//Executa a função sete
    break;
    case 8:
    oito();//Executa a função oito
    break;
    case 9:
    nove();//Executa a função nove
    break;
 }
Serial.println(contador);//Imprime na serial o conteúdo de contador
 if(contador >= 10) {//Se contador for maior ou igual a 10
 contador = 0;//Retorna contador a zero
 }
}