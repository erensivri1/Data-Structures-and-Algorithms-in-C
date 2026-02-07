//
//  gostergecevrealan.c
//  C_ogrenme
//
//  Created by Eren Sivri on 11.12.2024.
//
#if 0
#include <stdio.h>
void fonksi(int,int,int *,int *);
int main(void){
    int en,boy,cevre,alan;
    printf("en ve boy degerlerini giriniz: ");
    scanf("%d%d",&en,&boy);
    
    fonksi(en,boy,&cevre,&alan);
    
    printf("Dikdörtgenin cevresi=%d\n",cevre);
    printf("Dikdörtgenin alani=%d",alan);
    
    return (0);
    
    
}
void fonksi(int en,int boy,int *cevre,int *alan){
    *cevre=(en+boy)*2;
    *alan=en*boy;
}
#endif
