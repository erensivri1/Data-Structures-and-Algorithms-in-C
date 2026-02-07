//
//  sil.c
//  C_ogrenme
//
//  Created by Eren Sivri on 1.12.2024.
//
#if 0
#include <stdio.h>
int main(void){
    int sat,diez,sira;
    char deger;
    
    printf("sira gir: ");
    scanf("%d", &sira);
    
    
    printf("sayilar azalarak gitsin istersen '+' tusla, azalarak gitsin istersen '-' tusla: ");
    scanf(" %c", &deger);
    
    
    
    while(deger!='-'&&deger!='+'){
        printf("Yanlis deger girdiniz. Tekrar deger giriniz: ");
        scanf(" %c", &deger);}
    
    
    
    if(deger=='+')
        for(sat=1;sat<=sira;sat++){
            for(diez=1;diez<=sat;diez++)
                printf("%d",diez);
            printf("\n");}
        
    else if(deger=='-')
        for(sat=sira;sat>=1;sat--){
            for(diez=1;diez<=sat;diez++)
                printf("%d",diez);
            printf("\n");}

    
    return (0);
    }
#endif
