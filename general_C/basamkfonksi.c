//
//  basamkfonksi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 4.12.2024.
//
#if 0
#include <stdio.h>
int basamak_bul(int);
int main(void){
    int sayi,basamak;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    basamak=basamak_bul(sayi);
    printf("Sayi %d basamaklidir",basamak);
    return (0);
}
int basamak_bul(int sayi){
    int i=1;
    while(sayi/10>0){
        sayi/=10;
            i++;}
        return(i);
}
#endif
