//
//  gostergepara.c
//  C_ogrenme
//
//  Created by Eren Sivri on 25.12.2024.
//
#if 0
#include <stdio.h>
void fonksi(int *,int *,int *,int *,int *,int);
int main(void){
    int yuzluk,ellilik,yirmilik,onluk,beslik,para;
    printf("cekmek istediginiz parayi giriniz: ");
    scanf("%d",&para);
    fonksi(&yuzluk,&ellilik,&yirmilik,&onluk,&beslik,para);
    printf("Yuzluk=%d\n",yuzluk);
    printf("Ellilik=%d\n",ellilik);
    printf("Yirmilik=%d\n",yirmilik);
    printf("Onluk=%d\n",onluk);
    printf("Beslik=%d\n",beslik);
    return 0;
    
    
}
void fonksi(int *yuzluk,int *ellilik,int *yirmilik,int *onluk,int *beslik,int para){
    *yuzluk=para/100;
    *ellilik=(para-(*yuzluk*100))/50;
    *yirmilik=(para-(*yuzluk*100+*ellilik*50))/20;
    *onluk=(para-(*yuzluk*100+*ellilik*50+*yirmilik*20))/10;
    *beslik=(para-(*yuzluk*100+*ellilik*50+*yirmilik*20+*onluk*10))/5;
}
#endif
