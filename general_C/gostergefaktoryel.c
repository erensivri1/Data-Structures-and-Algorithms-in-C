//
//  gostergefaktoryel.c
//  C_ogrenme
//
//  Created by Eren Sivri on 25.12.2024.
//
#if 0
#include <stdio.h>
void fonksi(float *,float);

int main(void){
    int sayi;
    float sonuc=0;
    printf("sayi gir: ");
    scanf("%d",&sayi);
    fonksi(&sonuc,sayi);
    printf("sonuc=%f",sonuc);
    return 0;
    
}
void fonksi(float *sonuc,float sayi){;
    float ust=0,alt=1,i;
    for(i=1;i<=sayi;i++){
        ust+=i;
        alt*=i;
        *sonuc+=ust/alt;
    }
}
#endif
