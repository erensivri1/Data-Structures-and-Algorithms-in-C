//
//  haliparasi2.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    char kod;
    int alan;
    float ucret=0;
    
    printf("İstediginiz halini kodunu seciniz: ");
    scanf(" %c", &kod);
    
    printf("Halinin alanini giriniz: ");
    scanf("%d", &alan);
    
    switch (kod){
            
        case 'T' : ucret=alan*18.80;
            break;
            
        case 'B' : ucret=alan*17.80;
            break;
        
        case 'S' : ucret=alan*19.20;
            break;
            
        default:printf("Yanlis kodlama");
                
    }
        
    printf("Haliya odenecek ucret= %.2f", ucret);
    
    return (0);
    
}
#endif
