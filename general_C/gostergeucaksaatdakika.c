//
//  gostergeucaksaatdakika.c
//  C_ogrenme
//
//  Created by Eren Sivri on 11.12.2024.
//
#if 0
#include <stdio.h>

void hesapla(int *,int *,int *);
int main(void){
    int saniye,saat,dakika;
    printf("ucak yolculugu kac saniye surdu: ");
    scanf("%d",&saniye);
    hesapla(&saat,&dakika,&saniye);
    printf("%d saat %d dakika %d saniye surmustur",saat,dakika,saniye);
    return 0;
    
}
void hesapla(int *saat,int *dakika, int *saniye){
    
    *saat=*saniye/3600;
    *dakika=(*saniye-(*saat*3600))/60;
    *saniye=*saniye-(*saat*3600)-*dakika*60;
    
}
#endif
