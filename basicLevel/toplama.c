//
//  main.c
//  cson
//
//  Created by Eren on 6.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    int i=1;
    float sayi, toplam=0.0;
    
    printf("Bir sayi giriniz: ");
    scanf("%f", &sayi);
    while(i<=10){
        
        if(sayi>0){
            toplam= sayi+toplam;
            i=i+1;
            printf("Bir sayi giriniz: ");
            scanf("%f",&sayi);}
        else{
            printf("Pozitif sayi giriniz: ");
            scanf("%f", &sayi);
        }
       
    }
    
    printf("Sayilerin toplami=%0.2f", toplam);

    return(0);
    
    
}
#endif
