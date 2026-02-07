//
//  whiledongusoru.c
//  C_ogrenme
//
//  Created by Eren Sivri on 26.11.2024.
//
#if 0
#include <stdio.h>
int main(void){
    int sayi,sayac=1,toplam=0;
    while(sayac<1000){
        toplam=sayac+toplam;
        sayac++;
    }
    printf("toplam=%d ", toplam);
    return (0);
}

#include <stdio.h>
int main(void){
    int sayi,sayac=2,toplam=0;
    while(sayac<1000){
        toplam=sayac+toplam;
        sayac=sayac+2;
    }
    printf("toplam=%d ", toplam);
    return (0);
}

#include <stdio.h>
int main(void){
    int sayac=1;
    float toplam=0;
    while(sayac<=100){
        toplam=(1/sayac)+toplam;
        sayac++;
    }
    printf("toplam=%.2f ", toplam);
    return (0);
}

#include <stdio.h>
int main(void){
    int sayac=1;
    float toplam=0;
    while(sayac<=100){
        if(sayac%2==0){
            toplam=(1/sayac)-toplam;
            sayac++;}
            
        else{
            toplam=(1/sayac)+toplam;
            sayac++;}
    }
    printf("toplam=%.2f ", toplam);
    return (0);
}
#endif
