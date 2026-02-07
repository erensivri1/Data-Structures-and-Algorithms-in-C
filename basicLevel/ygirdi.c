//
//  ygirdi.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0

#include <stdio.h>
#include <math.h>
int main(void){
    
    float y;
    printf("y degeri giriniz: ");
    scanf("%f", &y);
    
    if(y>10)
        y=sqrt(pow(y,3)+1);
    else if(y>=0&&10>=y)
        y=y-10;
    else
        y=y/(y+15);
    
    printf("Y degeri=%f", y);
    
    return(0);
    
}
#endif
