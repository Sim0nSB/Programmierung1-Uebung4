#include <stdio.h>
#include <stdlib.h>


int aufgabe1(), aufgabe2(), aufgabe3(), aufgabe4(), aufgabe5(), aufgabe6();

int main(void) {

  aufgabe1();
  //aufgabe2();
  //aufgabe3();
  //aufgabe4();
  //aufgabe5();
  //aufgabe6();
  

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
      printf("Eine Natürliche Zahl eingeben");
    }
  return 0;
}