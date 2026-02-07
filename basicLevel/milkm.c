//
//  milkm.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h> 
int main(void){
    
    char secim,km,k,K,m,M, mil;
    int yol;
    
    printf("Alinan yol mil cinsindense M/m, kilometre cinsindense K/k seçimini yapiniz: ");
    scanf("%c", &secim);
    
    if(secim=='k'||secim=='K'){
        printf("Kaç kilometre yol aldiniz: ");
        scanf("%d", &yol);
        yol=yol/1.609344;
        printf("Alinan yol= %d kilometre", yol);}
    
        
    
    else if (secim=='m'||secim=='M'){
        printf("Kaç mil yol aldiniz: ");
        scanf("%d", &yol);
        yol=yol*1.609344;
        printf("Alinan yol= %d mil", yol);}
    
    else
        printf("Hatali giris yaptiniz");
    
    
    return(0);
    
}
#endif
