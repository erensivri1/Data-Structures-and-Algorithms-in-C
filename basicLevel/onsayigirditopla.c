//
//  onsayigirditopla.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0
#include <stdio.h>


int main(void){
    float toplam=0.0,sayi;
    int sayac=1;
    
    
    
    while(sayac<=10){
        printf("%d. reel sayi yaziniz: ", sayac);
        scanf("%f", &sayi);
        
        if(sayi>0){
            toplam+=sayi;
            sayac++;}
        
        else
            printf("Yanlis sayi girdiniz!!");
    }

        
    
    printf("Toplam=%.2f", toplam);
        
    return (0);
}
#endif


