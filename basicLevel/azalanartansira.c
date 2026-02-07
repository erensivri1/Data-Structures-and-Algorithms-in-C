//
//  azalanartansira.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    int sayi1,sayi2,sayi3,sayi4;
    printf("Dort tam sayi giriniz: ");
    scanf("%d%d%d%d",&sayi1,&sayi2,&sayi3,&sayi4);
    
    if(sayi1>sayi2&&sayi2>sayi3&&sayi3>sayi4)
        printf("Sayilar azalan sirali");
    
    else if(sayi1<sayi2&&sayi2<sayi3&&sayi3<sayi4)
        printf("Sayilar artan sirali");
    
    else
        printf("Sayilar sirali degil");
    
    return(0);
    
}
#endif
