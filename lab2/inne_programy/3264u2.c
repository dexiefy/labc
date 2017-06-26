#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  //otwarcie pliku do odczytu
  FILE* f = fopen("liczby.txt", "r");

  //sprawdzenie czy plik z danymi istnieje
  if (f == NULL){
    printf("Blad przy otwieraniu pliku! Upewnij sie ze plik z danymi istnieje!\n");
    exit(1);
  }


  //deklaracja zmiennych
  long long int n = 0;
  int m = 0;
  char c[100];
  //petla pobierajaca dane z pliku i zapisujaca je w 'c'
  while( fscanf(f, "%s", c) != EOF)
  {
    //warunek sprawdzajacy czy pobrany znak jest w zasiegu liczb Ascii
    //oraz czy przypadkiem nie jest to minus
    if ((c[0] >= 48 && c[0] <= 56) || c[0]==45){

      //64 bity
      //konwersja znaków z 'c' do zmiennej 'n' typu long long int
      n = atoi(c);
      printf("\n");
      printf("64 Bitowa postac liczby %lli\n", n);

      //petla przechodzaca przez kolejne bity liczby
      for (int i = 63; i >= 0; i--){
        //zmienna k rowna liczbie 'n' w postaci bitowej, przesunieta o 'i' pozycji
        //jesli otrzymany po przesunieciu bit jest rowny 1, zostanie on wypisany, jesli nie, zostanie wypisane 0
        int k = n >> i;

        if (k & 1)
        printf("1");
        else
        printf("0");
      }
      //32 bity
      m = atoi(c);
      printf("\n\n32 Bitowa postac liczby %d\n", m);
      for (int i = 31; i >= 0; i--){

        int s = m >> i;

        if (s & 1)
        printf("1");
        else
        printf("0");
      }
      printf("\n");
    }
    else{
      printf("\nNiepoprawne dane!\n");
      continue;
    }
  }
  //zamkniecie pliku
  fclose(f);
}
