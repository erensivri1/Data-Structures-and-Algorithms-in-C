//
//  onur.c
//  problem
//
//  Created by Eren on 10.11.2024.
//
#if 0

#include<stdio.h>
int main (void)
{
    char tip;
    float alan,ucret=0,toplam=0;
    printf("Hali tipini giriniz (T/B/S): ");
    scanf("%c", &tip);
    printf("Kac metrekare hali dosenecek? ");
    scanf("%f", &alan);
    
    if (alan>=0){
        if (alan<25){
            
            ucret=ucret+35.00;
            
        }else if (alan>=100){
            ucret=ucret+75.00;
            
        }else {
            ucret=ucret+60.00;
        }
        
        switch (tip)
        {  case 'T': toplam=ucret+alan*18.80;
                break;
            case 'B': toplam=ucret+alan*17.80;
                break;
            case 'S': toplam=ucret+alan*19.20;
            default:
            printf("Dogru tip giriniz");}
        
        
        
        printf("Odenmesi gereken ucret:%.2f", toplam);
        return (0);
        
    }
    }
#endif
