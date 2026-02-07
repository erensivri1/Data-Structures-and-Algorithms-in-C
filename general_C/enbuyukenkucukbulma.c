//
//  enbuyukenkucukbulma.c
//  C_ogrenme
//
//  Created by Eren Sivri on 2.12.2024.
//
#if 0
#include <stdio.h>
int main(void){
   
    int buy=-2147483647,kuc=2147483647,tane,sayac,sayi;
    printf("kac sayi girmek istiyorsunuz: ");
    scanf("%d",&tane);
    
    
    while(tane<=0){
        printf("pozitif sayi girmelisin: ");
        scanf("%d",&tane);
    }
        
    for(sayac=1;sayac<=tane;sayac++){
        printf("sayi giriniz: ");
        scanf("%d",&sayi);
            
        if (sayi > buy)
                buy = sayi;
        if(sayi < kuc)
                kuc = sayi;}
        
        
    printf("En buyuk sayi=%d\n",buy);
    printf("En kucuk sayi=%d\n",kuc);
    
    return(0);
  
}
#endif
