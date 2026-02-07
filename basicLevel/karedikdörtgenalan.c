//
//  karedikdörtgenalan.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0
#include <stdio.h>


int main(void){
    
    char kod;
    int kenar1,kenar2,alan;
    
    printf("2 adet kenar giriniz: ");
    scanf("%d%d",&kenar1,&kenar2);
    
    printf("Sekil kareyse K/k, dikdortgense D/d kodunu giriniz: ");
    scanf(" %c", &kod);
    
    if((kod=='K' || kod=='k') && (kenar1==kenar2)){
        alan=kenar1*kenar2;
        printf("Alan=%d", alan);}
    
    else if(kod=='D' || kod=='d'){
        alan=kenar1*kenar2;
        printf("Alan=%d", alan);}
    
    else
        printf("Yanlis harf kodladiniz veya hatalı tur secimi");
    
    return (0);
        
}



//switch case



#include <stdio.h>

int main(void){
    char kod;
    int kenar1,kenar2,alan;
    
    printf("2 adet kenar giriniz: ");
    scanf("%d%d",&kenar1,&kenar2);
    
    printf("Sekil kareyse K/k, dikdortgense D/d kodunu giriniz: ");
    scanf(" %c", &kod);
    
    switch (kod){
        case 'K' :alan=kenar1*kenar2;
            printf("Alan=%d", alan);
            break;
            
        case 'k' :alan=kenar1*kenar2;
            printf("Alan=%d", alan);
            break;
            
        case 'D' :alan=kenar1*kenar2;
            printf("Alan=%d", alan);
            break;
            
        case 'd' :alan=kenar1*kenar2;
            printf("Alan=%d", alan);
            break;
            
        
        
    }
    return (0);
}
#endif
