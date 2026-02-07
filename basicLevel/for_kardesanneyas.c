//
//  ders2.c
//  C dersleri
//
//  Created by Eren on 6.11.2024.
//
#if 0

#include <stdio.h>

int main(void){
    int kardes1, kardes2, anne, gecenyıl;
    kardes1=4;
    kardes2=2;
    anne=25;
    for(gecenyıl=0;
        kardes1+kardes2<=anne;
        gecenyıl++)
    {
        kardes1++;
        kardes2++;
        anne++;
    }
    printf("%d yıl sonra kardeslerin yaslari toplami anneyi gecer.", gecenyıl);
    return(0);
    
}
#endif
