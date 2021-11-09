#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>


int aufgabe1(), aufgabe2(), aufgabe3(), aufgabe4(), aufgabe5(), aufgabe6(), aufgabe7(), aufgabe8();

int main(void) {

  //aufgabe1();
  //aufgabe2();
  //aufgabe3();
  //aufgabe4();
  //aufgabe5();
  //aufgabe6();
  //aufgabe7();
  aufgabe8();
  

}

//Aufgabe 1
int aufgabe1() {
    int eingabe = 0, ausgabe = 0;
    scanf("%d", & eingabe);
    if (eingabe >= 0) {
      for (int i = 1; i <= eingabe; i++) {
        ausgabe += i;
      }
      printf("%d", ausgabe);
    } else {
      printf("Eine positive Ganzzahl eingeben!");
    }
  return 0;
}

//Aufgabe 2
int aufgabe2(){
  int eingabe,ausgabe = 0;
  while(ausgabe <= 100){
    eingabe = 0;
    printf("Zahl: ");
    scanf("%d", &eingabe);
    ausgabe += eingabe;
  }
  printf("Summe = %d", ausgabe);
  return 0;
}

//Aufgabe 3
int aufgabe3(){
  int untereGrenze, obereGrenze;
  printf("Untere Grenze: ");
  scanf("%d", &untereGrenze);
  printf("Obere Grenze: ");
  scanf("%d", &obereGrenze);
  printf("Die Reihe lautet: ");
  if(untereGrenze > obereGrenze){
    int temp;
    temp = obereGrenze;
    obereGrenze = untereGrenze;
    untereGrenze = temp;
  }
  for(int i = untereGrenze; i<= obereGrenze; i++){
    printf("%d ",i);
  }
  return 0;
}

//Aufgabe 4
int aufgabe4() {
  int untereGrenze, obereGrenze;
  printf("Untere Grenze: ");
  scanf("%d", & untereGrenze);
  printf("Obere Grenze: ");
  scanf("%d", & obereGrenze);
  printf("Die Reihe lautet: ");
  if (untereGrenze > obereGrenze) {
    int temp;
    temp = obereGrenze;
    obereGrenze = untereGrenze;
    untereGrenze = temp;
  }
  for (int i = untereGrenze; i <= obereGrenze; i++) {
    if(i % 3 == 0 && i % 4 != 0){
      printf("%d ", i);
    }
    if(i % 3 != 0 && i % 4 == 0){
      printf("%d ", i);
    }    
  }
  return 0;
}

//Aufgabe 5
int aufgabe5(){
  int laengeRechteck, breiteRechteck;
  printf("Länge: ");
  scanf("%d", &laengeRechteck);
  printf("Breite: ");
  scanf("%d", &breiteRechteck);
  for(int i = 0; i < breiteRechteck; i++){
    for(int j = 0; j < laengeRechteck; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//Aufgabe 6
int aufgabe6(){
  int laengeRechteck, breiteRechteck;
  printf("Länge: ");
  scanf("%d", &laengeRechteck);
  printf("Breite: ");
  scanf("%d", &breiteRechteck);
  for(int i = 0; i < breiteRechteck; i++){
    for(int j = 0; j < laengeRechteck; j++){
      if(i==0 || i==breiteRechteck-1 || j==0 || j==laengeRechteck-1) {
			    printf("*");
		    } else {
		        printf(" ");
		    }
    }
    printf("\n");
  }
  return 0;
}

//Aufgabe 7
int aufgabe7() {

    int n;
    double summe=0;
    printf("n = ?\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        summe = summe + ( 1.0 / (2 * i));
    }
    
    printf("Σ(1, %d) = %lf", n, summe);
    
    return EXIT_SUCCESS;
}

//Aufgabe 8
double eingabe(char * str) {
    double eingabe;
    printf("Geben Sie %s ein: ", str);
    scanf("%lf", &eingabe);
    return eingabe;
}

int aufgabe8()
{
    
    double epsilon = eingabe("Epsilon");
    double lastIterationValue=1;
    double vorzeichen = 1.0;
    double sum = 0;
    
    for(int i=0; fabs(sum - lastIterationValue) > epsilon; i++) {
        lastIterationValue = sum;
        sum = sum + (vorzeichen * (1.0 / ((2.0 * i) + 1.0)));
        vorzeichen = vorzeichen * -1;
    }
    
    printf("Pi = %.*e", DECIMAL_DIG, 4.0*sum);
    return EXIT_SUCCESS;
}