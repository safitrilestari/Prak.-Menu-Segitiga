#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int menu;
  float a,b,c,t,k,l,sa,sb,sc;

  while(1) {

    printf("------- Menu Segitiga -------\n");
    printf("1. Mencari sisi miring 	(c) \n");
    printf("2. Mencari luas 		(l) \n");
    printf("3. Mencari keliling 	(k) \n");
    printf("4. Keluar program \n");
    printf("------------------------------\n");

    printf("Pilih nomor menu: ");
    scanf("%d",&menu);
    fflush(stdin);

    if(menu == 1){
      printf("Masukkan nilai a: ");
      scanf("%f", &a);
      printf("Masukkan nilai b: ");
      scanf("%f", &b);
      c=sqrt((a*a)+(b*b));
      printf("Nilai sisi miring adalah %.2f\n", c);
    } else if (menu == 2){
      printf("Masukkan nilai alas: ");
      scanf("%f",&a);
      printf("Masukkan nila tinggi: ");
      scanf("%f",&t);
      l=t*a/2;
      printf("Nilai luas adalah %.2f\n",l);
    } else if (menu == 3){
      printf("Masukkan nilai sisi a: ");
      scanf("%f", &sa);
      printf("Masukkan nilai sisi b: ");
      scanf("%f", &sb);
      printf("Masukkan nilai sisi c: ");
      scanf("%f", &sc);
      k=sa+sb+sc;
      printf("Nilai keliling adalah %.2f\n",k);
    } else if(menu == 4){
      exit(0);
    } else {
      printf("Menu yang anda input salah");
    }
  }
  return 0;
}
