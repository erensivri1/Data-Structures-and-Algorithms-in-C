//
//  parametretemel.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.12.2024.
//
#if 0
#include <stdio.h>
int sayi(int a);
int main(void){
    int sonuc,tamsayi;
    printf("Tamsayi giriniz: ");
    scanf("%d",&tamsayi);
    sonuc= sayi(tamsayi);
    printf("Sonuc=%d", sonuc);
    return(0);
}

int sayi(int a){
    int s=0;
    while(a%10>0){
        s+=a%10;
        a=(a-a%10)/10;
    }
return(s);
}
#endif
