//
//  labfonksi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 4.12.2024.
//
#if 0
#include <stdio.h>
#include <math.h>
int ilk(int a);
int son(int b);

int main(void){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi==pow(ilk(sayi)+son(sayi),2))
        printf("kurala uygun");
    
    else
        printf("kurala uygun degil");
    
    return (0);
}

int ilk(int sayi){
    int ab;
    ab=sayi/100;
    return (ab);
}

int son(int sayi){
    int cd;
    cd=sayi%100;
    return (cd);
    
}
#endif
