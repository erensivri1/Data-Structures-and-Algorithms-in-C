//
//  magazaindirim.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0
#include <stdio.h>


int main(void){
    float tutar,ındırım,odeme;
    
    printf("alısveris tutarı giriniz: ");
    scanf("%f",&tutar);
    
    if(tutar>=0&&tutar<=100)
        odeme=tutar-(tutar/100*4);
    
    else if (tutar>=101&&tutar<=250)
        odeme= tutar-5-(tutar/100*7);
    
    else
        odeme=26+tutar-(tutar-250)/100*10;
    
    printf("Odeme= %.2f", odeme);
    
    return (0);
}
#endif

