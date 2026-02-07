//
//  gostergelab.c
//  C_ogrenme
//
//  Created by Eren Sivri on 10.12.2024.
//
#if 0
#include <stdio.h>
void hesapla(int ,int ,int *);
int main(void){
    int sayi1,sayi2,swap,ortalama_deger,toplam=0;
    printf("iki sayi degeri giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    
    if(sayi1<sayi2){
        swap=sayi1;
        sayi1=sayi2;
        sayi2=swap;
        }
    
    hesapla(sayi1,sayi2,&ortalama_deger);
    printf("Ortalama deger=%d",ortalama_deger);
    
    return 0;
    }


void hesapla(int sayi1,int sayi2, int *ortalama_deger){
    int i,toplam=0,say=0;
    for(i=sayi2+1;i<sayi1;i++){
        if(i%2==0){
            toplam+=i;
            say+=1;}
    }
    
    *ortalama_deger=toplam/say;
}
#endif
