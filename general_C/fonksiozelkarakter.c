//
//  fonksiozelkarakter.c
//  C_ogrenme
//
//  Created by Eren Sivri on 23.12.2024.
//
#if 0
#include <stdio.h>
int fonksi(int);
int main(void){
    int deger,i,sonuc;
    char istek;
    printf("Kac deger istediginizi giriniz: ");
    scanf("%d",&deger);
    
    for(i=0;i<deger;i++){
        printf("istediginiz karakteri giriniz: ");
        scanf(" %c",&istek);
        sonuc=fonksi(istek);
        if(sonuc==1)
            printf("%c sayi karakteridir\n",istek);
        else if(sonuc==2)
            printf("%c alfabetik karakterdir\n",istek);
        else if(sonuc==3)
            printf("%c özel karakterdir",istek);
    }
        
    return (0);
    
}
int fonksi(int istek){
    int sonuc;
    if(istek>=48&&istek<=57)
        sonuc=1;
    
    else if((istek>=65&&istek<=90)||(istek>=97&&istek<=122))
        sonuc=2;
    
    else
        sonuc=3;
    
    return sonuc;

}
#endif
