//
//  fahrenheitcelcius.c
//  C_ogrenme
//
//  Created by Eren Sivri on 23.12.2024.
//
#if 0
#include <stdio.h>
char fonksi1(char);
char fonksi2(char);
int main(void){
    char secim;
    int deger;
    printf("fahrenheit-->celcius icin C/c tuslayiniz\ncelcius-->fahrenheit icin F/f tuslayiniz\n");
    printf("Seciminizi giriniz: ");
    scanf(" %c",&secim);
    
    if(secim=='F'||secim=='f'){
        printf("Celcius degerini giriniz: ");
        scanf("%d",&deger);
        printf("%d fahrenheit",fonksi1(deger));
    }
    
    else if(secim=='C'||secim=='c'){
        printf("fahrenheit degerini giriniz: ");
        scanf("%d",&deger);
        printf("%d celcius",fonksi2(deger));
    }
    
    return (0);
}
char fonksi1(char deger){
    int fahri;
    fahri=((9*deger)/5)+32;
    return fahri;
    
}

char fonksi2(char deger){
    int celci;
    celci=(deger-32)*5/9;
    return celci;
    
}
#endif
