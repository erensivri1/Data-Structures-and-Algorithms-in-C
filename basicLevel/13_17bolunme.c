//
//  13_17bolunme.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include "stdio.h"

int main(void){
    int sayi;
    printf("Pozitif tam sayi giriniz: ");
    scanf("%d", &sayi);
    
    if(sayi%13==0 && sayi%17!=0)
        printf("Sayi 13e bolunur.");
    
    else if (sayi%17==0 && sayi%13!=0)
        printf("Sayi 17ye bolunur.");
    
    else if (sayi%17==0 && sayi%13==0)
        printf("Sayi 17ye ve 13e bolunur.");
    
    
    else if (sayi%17!=0 && sayi%13!=0)
        printf("Sayi 17ye ve 13e bolunmuyor.");
    
    return (0);

}
#endif
