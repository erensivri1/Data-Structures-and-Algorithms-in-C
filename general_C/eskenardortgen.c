//
//  eskenardortgen.c
//  C_ogrenme
//
//  Created by Eren Sivri on 27.11.2024.
//
#if 0
#include <stdio.h>
int main(void){
    int kenar,satir=1,krk,bos;
    char karakter;
    printf("Kenar uzunluğunu giriniz: ");
    scanf("%d",&kenar);
    
    printf("karakter giriniz: ");
    scanf(" %c",&karakter);
    
    for(satir=1;kenar>=satir;satir++)
    {
        for(bos=1;bos<=kenar-satir;bos++)
            printf(" ");
        
        
        for(krk=0; krk<2*satir-1; krk++)
            printf("%c",karakter);
        printf("\n");
    }
    
    
    for(satir=kenar-1;satir>0;satir--){
        for(bos=0;bos<=kenar-satir-1;bos++)
            printf(" ");
        
        for(krk=1;krk<2*satir;krk++)
            printf("%c",karakter);
        printf("\n");}
    
    
    return (0);
}

#endif
