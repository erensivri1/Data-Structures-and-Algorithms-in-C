//
//  deneme.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.12.2024.
//
#if 0
#include <stdio.h>
void fonk(int,int,int *,int *,int *,int *);
int main(void){
    int sayi1,sayi2,topla,cıkar,carp,bol;
    printf("iki sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    fonk(sayi1,sayi2,&topla,&cıkar,&carp,&bol);
    printf("toplam=%d\n",topla);
    printf("cıkar=%d\n",cıkar);
    printf("carpım=%d\n",carp);
    printf("bolum=%d\n",bol);
    return (0);

    
}
void fonk(int sayi1,int sayi2, int *topla,int *cıkar,int *carp,int *bol){
    *topla=sayi1+sayi2;
    *cıkar=sayi1-sayi2;
    *carp=sayi1*sayi2;
    *bol=sayi1/sayi2;
}
#endif
