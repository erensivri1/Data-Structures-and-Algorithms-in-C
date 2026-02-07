//
//  gostergeyuzdeonda.c
//  C_ogrenme
//
//  Created by Eren Sivri on 11.12.2024.
//
#if 0
#include <stdio.h>
void basamak(int,int *,int *,int *);
int main(void){
    int sayi,yuzde,onda,bir;
    printf("3 basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    basamak(sayi,&yuzde,&onda,&bir);
    printf("Yuzler basamagi=%d\nOnlar basamagi=%d\nBirler basamagi=%d",yuzde,onda,bir);
    return (0);
}

void basamak(int sayi,int *yuzde,int *onda,int *bir){
    *yuzde=sayi/100;
    *onda=(sayi%100)/10;
    *bir=sayi%10;
}
#endif
