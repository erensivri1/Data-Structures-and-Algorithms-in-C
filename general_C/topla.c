//
//  topla.c
//  C_ogrenme
//
//  Created by Eren Sivri on 4.12.2024.
//
#if 0
#include <stdio.h>
void topla1(void);
int main(void){
    topla1();
    return (0);
}

void topla1(void){
    int toplam=0,i,sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++){
        toplam+=i;
    }
    
    printf("Toplam=%d",toplam);
        
}
#endif
