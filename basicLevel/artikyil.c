//
//  artikyil.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    int yil;
    
    printf("Konrtol etmek istediginiz yili giriniz: ");
    scanf("%d", &yil);
    
    if(yil%100==0 && yil%400!=0 )
            printf("%d yili artik yil degildir", yil);
            
        else if(yil%4==0)
            printf("%d yili artik yildir", yil);
            
        else
            printf("%d yili artik yil degildir", yil);
   
    return(0);
}
#endif
