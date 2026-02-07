//
//  dortislem.c
//  problem
//
//  Created by Eren on 9.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    float sayi1, sayi2;
    char islem;
    
    printf("Yapmak istediginiz islemi giriniz: ");
    scanf("%c",&islem);
    
    
    printf("2 adet sayi giriniz: ");
    scanf("%f%f",&sayi1,&sayi2);
    
    printf("%.2f%c%.2f", sayi1,islem,sayi2);
    
    switch(islem){
            
        case '+': printf("=%.2f", sayi1+sayi2);
            break;
        case '-': printf("=%.2f", sayi1-sayi2);
            break;
        case '/': printf("=%.2f", sayi1/sayi2);
            break;
        case '*': printf("=%.2f", sayi1*sayi2);
            break;
            
        default:
            printf("Yanlis islem");
    }
    
    
    
}
#endif

