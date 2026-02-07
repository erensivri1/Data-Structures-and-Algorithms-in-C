//
//  gosterge10sayi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 11.12.2024.
//
#if 0
#include <stdio.h>
void fonksi(int *,int *);
int main(void){
    int sayi1=-2147483648,sayi2=-2147483648;
    fonksi(&sayi1,&sayi2);
    printf("En buyuk iki sayi=%d %d",sayi2,sayi1);
    return (0);
    
}
void fonksi(int *sayi1,int *sayi2){
    int i,deger;
    printf("10 tane tamsayi giriniz: ");
    for(i=1;i<=10;i++){
        scanf("%d",&deger);
        if(deger>*sayi1){
            *sayi2=*sayi1;
            *sayi1=deger;
        }
        else if (deger > *sayi2) {
            *sayi2 = deger;
        }
    }
}
#endif
