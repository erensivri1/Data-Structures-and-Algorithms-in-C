//
//  telefonsirketi.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    double sure,ucret;
    
    printf("Telefonda kac dk konustunuz: ");
    scanf("%lf", &sure);
    
    if(sure<=3)
        ucret=0.25;
    
    else if(sure>3)
        ucret=0.25+(sure-3)*0.08;
    
    printf("Odenecek ucret=%.2lf", ucret);
    
    return(0);
}
#endif
