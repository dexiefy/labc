#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char const *argv[]) {
  char c[100];
  int argument = atoi(argv[2]);
  //======test argumentow==========
  // printf("podane argumenty\n");
  // for (int i = 1; i < argc; i++) {
  //     printf("%s\n", argv[i]);}
  //==============================

  ////////otwarcie plikow podanych w argumentach
  FILE* l = fopen(argv[1], "r");
  FILE* fp= fopen(argv[3], "w");
  ///////sprawdzenie czy pliki istnieja
  if (l == NULL){
    printf("Blad przy otwieraniu pliku! Upewnij sie ze plik z danymi istnieje!\n");
    exit(1);
  }
  if(fp == NULL){
    printf("brak pliku do zapisu!\n");
    exit(1);
  }

  fprintf(fp, "Wyniki obliczeń\n");

  //Petla skanujaca plik
  while(fscanf(l, "%s", c) != EOF)
  {
    //Deklaracja zmiennych nastepuje wewnatrz petli by uniknac zlego adresowania tablic
    float f=0,d=0, fractional=0;
    int znak=0,integral=0,q=0, i=0, cal[6], ula[32], expo[7], przecinek=0, ile=0, count=6, countb = 0, countc=0;

    //warunek sprawdzajacy czy podawane znaki sa liczbami lub znakiem minusa
    if ((c[0] >= 48 && c[0] <= 56) || c[0]==45){
      //rozpoczecie pracy 32 bitowej konwersji
      if(argument==32){
        //przekonwertowanie znakow z tablic c na float
        f=atof(c);
        //szukanie minusa
        if(c[0]==45){
          znak=1;
        }
        fprintf(fp, "Podana liczba: %f\n", f);

        //////////// Zerowanie Tablic
        for (i = 0; i <6; i++) {
          cal[i]= 0;}
          for ( i = 0; i <32; i++) {
            ula[i]= 0;}
            for ( i = 0; i <7; i++) {
              expo[i]= 0;}
              ///////////////separacja wartosci calkowitych od ulamkowych

              integral = (int)f;
              //Jesli czesc calkowita jest ujemna zostaje ona przerobiona na dodatnia
              if( integral < 0 ){
                integral = integral * (-1);
              }
              fractional = f - (int)f;
				if( fractional < 0 ){
                fractional = fractional * (-1);
              }
              ///////////////////// kowersja calosci na postac binarna
              while (integral>0){
                int a= integral%2;
                cal[count-1] = a;
                integral = integral / 2;
                count--;
              }
              //==================test===============
              //    for (i = 0; i < 6; i++) {
              //    printf("cal [%d] %d\n",i, cal[i]);}
              //========================================

              ////////////////kowersja czesci ulamkowej na postac binarna
              while(fractional != 0){
                d=0;
                d = fractional * 2;
                int b = (int)d;
                fractional = d - b;
                ula[countb] = b;
                countb++;
              }
              //===============testy==================
              // for (i = 0; i <6; i++) {
              //   printf("cal[%d]  %d\n",i, cal[i] );}
              // for (i = 0; i < 32; i++) {
              //   printf("ula[%d] %d\n",i, ula[i] ); }
              //=====================================

              /////////obliczanie pozycji przecinka
              int przesuniecieint=0;
              for (i = 0; i <7; i++) {
                if (cal[i] == 1){
                  przesuniecieint++;
                  break;
                }
                przesuniecieint++;
              }


              ile=0;
              for (i = 0; i < 7; i++) {
                ile++;
                if (cal[i]==1) {
                  break;
                }
              }
              ile=ile-2;
              przecinek = 6-przesuniecieint;
              //=================testy=================
              // printf(" od pozycji %d\n", przecinek);
              // printf(" dd pozycji %d\n", ile);
              // =====================================

              //Wypisanie znaku
              fprintf(fp, "Znak: %d\n", znak);


              ///////////Obliczanie cechy
              int exponent= 127+6-przesuniecieint;
              fprintf(fp,"Cecha: ");
              while (exponent>0){
                int e= exponent%2;
                expo[countc] = e;
                exponent = exponent / 2;
                countc++;
              }
              int t=0;
              for (q = 0; q <=7 ; q++) {
                fprintf(fp, "%d",  expo[7-t]);
                t++;
              }
              fprintf(fp, "\n");

              //Wypisanie Mantysy
              fprintf(fp, "Mantysa: ");
              for ( i =przesuniecieint; i < 6; i++) {
                fprintf(fp, "%d", cal[i]);
              }
              for (i = 0; i < 22-(przecinek-ile); i++) {
                fprintf(fp, "%d", ula[i] );
              }
              fprintf(fp,"\n");
            }

            ////======/////////777777//77/7/7/7/75/4/5/3/4/2/3/24/32/4/23/4/2/4/2/34/2/4/2/34/2//3/42/4/32/4/24/32
            ////======/////////777777//77/7/7/7/75/4/5/3/4/2/3/24/32/4/23/4/2/4/2/34/2/4/2/34/2//3/42/4/32/4/24/32
            ////======/////////777777//77/7/7/7/75/4/5/3/4/2/3/24/32/4/23/4/2/4/2/34/2/4/2/34/2//3/42/4/32/4/24/32


            if(argument==64){
              int expo[10];
              int ula[52];
              int cal[8];

              //przekonwertowanie znakow z tablic c na float
              f=atof(c);
              //szukanie minusa
              if(c[0]==45){
                znak=1;
              }
              fprintf(fp, "Podana liczba: %f\n", f);

              //////////// Zerowanie Tablic
              for (i = 0; i <8; i++) {
                cal[i]= 0;}
                for ( i = 0; i <52; i++) {
                  ula[i]= 0;}
                  for ( i = 0; i <10; i++) {
                    expo[i]= 0;}
                    ///////////////separacja wartosci calkowitych od ulamkowych

                    integral = (int)f;
                    //Jesli czesc calkowita jest ujemna zostaje ona przerobiona na dodatnia
                    if( integral < 0 ){
                      integral = integral * (-1);
                    }
                    fractional = f - (int)f;
                    ///////////////////// kowersja calosci na postac binarna
                    while (integral>0){
                      int a= integral%2;
                      cal[count-1] = a;
                      integral = integral / 2;
                      count--;
                    }
                    //==================test===============
                    //    for (i = 0; i < 6; i++) {
                    //    printf("cal [%d] %d\n",i, cal[i]);}
                    //========================================

                    ////////////////kowersja czesci ulamkowej na postac binarna
                    while(fractional != 0){
                      d=0;
                      d = fractional * 2;
                      int b = (int)d;
                      fractional = d - b;
                      ula[countb] = b;
                      countb++;
                    }
                    //===============testy==================
                    // for (i = 0; i <6; i++) {
                    //   printf("cal[%d]  %d\n",i, cal[i] );}
                    // for (i = 0; i < 32; i++) {
                    //   printf("ula[%d] %d\n",i, ula[i] ); }
                    //=====================================

                    /////////obliczanie pozycji przecinka
                    int przesuniecieint=0;
                    for (i = 0; i <9; i++) {
                      if (cal[i] == 1){
                        przesuniecieint++;
                        break;
                      }
                      przesuniecieint++;
                    }


                    ile=0;
                    for (i = 0; i < 9; i++) {
                      ile++;
                      if (cal[i]==1) {
                        break;
                      }
                    }
                    ile=ile-2;
                    przecinek = 6-przesuniecieint;
                    //=================testy=================
                    // printf(" od pozycji %d\n", przecinek);
                    // printf(" dd pozycji %d\n", ile);
                    // =====================================

                    //Wypisanie znaku
                    fprintf(fp, "Znak: %d\n", znak);


                    ///////////Obliczanie cechy
                    int exponent= 1023+6-przesuniecieint;
                    fprintf(fp,"Cecha: ");
                    while (exponent>0){
                      int e= exponent%2;
                      expo[countc] = e;
                      exponent = exponent / 2;
                      countc++;
                    }
                    int t=0;
                    for (q = 0; q <=10 ; q++) {
                      fprintf(fp, "%d",  expo[10-t]);
                      t++;
                    }
                    fprintf(fp, "\n");

                    //Wypisanie Mantysy
                    fprintf(fp, "Mantysa: ");
                    for ( i =przesuniecieint; i < 8; i++) {
                      fprintf(fp, "%d", cal[i]);
                    }
                    for (i = 0; i < 51-(przecinek-ile); i++) {
                      fprintf(fp, "%d", ula[i] );
                    }
                    fprintf(fp,"\n");
                  }


                }
                else{
                  printf("\nNiepoprawne dane!\n");
                  continue;
                }

              }
              fclose(fp);
              fclose(l);
            }
