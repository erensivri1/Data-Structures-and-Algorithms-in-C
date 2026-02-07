//
//  cetofonksi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 5.12.2024.
//
#if 0
#include <stdio.h>
void bul(int a,int b);
int main(void){
    int a,b;
    printf("iki sayi giriniz: ");
    scanf("%d%d",&a,&b);
    bul(a,b);
    return 0;
}

void bul(int a,int b){
    int ebob,i,deger=0;
    if(a>b){
        for(i=1;i<=b;i++){
            if(b%i==0&&a%i==0)
                deger=i;}
    }
    
    else if(a<b){
        for(i=1;i<=a;i++){
            if(a%i==0&&b%i==0)
                deger=i;}
    }
    
    else
        for(i=1;i<=a;i++){
            if(a%i==0&&b%i==0)
                deger=i;}
    
    printf("EBOB=%d",deger);
}
#endif
