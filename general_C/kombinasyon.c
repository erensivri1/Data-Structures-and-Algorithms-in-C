//
//  kombinasyon.c
//  C_ogrenme
//
//  Created by Eren Sivri on 4.12.2024.
//
#if 0
#include <stdio.h>
int komb(int,int);
int fakt(int);
int main(void){
    int n,r;
    printf("iki tamsayi giriniz: ");
    scanf("%d%d",&n,&r);
    komb(n,r);
    return (0);
}

int komb(int n,int r){
    int sonuc;
    sonuc=fakt(n)/(fakt(r)*fakt(n-r));
    printf("sonuc=%d",sonuc);
    return(sonuc);
}
int fakt(int m){
    int i,sonuc=1;
    for(i=1;i<=m;i++){
        sonuc*=i;
    }
    return(sonuc);
}
#endif
