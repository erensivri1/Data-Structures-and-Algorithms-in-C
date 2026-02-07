//
//  basamakfonksi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 23.12.2024.
//

#if 0

#include <stdio.h>
int fonksi(int);
int main(void){
    int sayi,bas;
    
    printf("basamak sayisinin hesaplanmasini istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    
    while(sayi>0){
        bas=fonksi(sayi);
        printf("basamak sayisi=%d\n",bas);
        printf("basamak sayisinin hesaplanmasini istediginiz sayiyi giriniz: ");
        scanf("%d",&sayi);
    }
    
return 0;
}


int fonksi(int sayi){
    
    int bas=0;
    
    while(sayi>0){
        sayi/=10;
        bas++;
        }
 
    
    return bas;
}
#endif
