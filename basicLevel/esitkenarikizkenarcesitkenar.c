//
//  esitkenarikizkenarcesitkenar.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    int aci1,aci2,aci3;
    printf("Uc tane aci degeri giriniz: ");
    scanf("%d%d%d", &aci1,&aci2,&aci3);
    
    if(aci1==aci2&&aci2==aci3)
        printf("Ucgen esitkenar");
    
    else if((aci1==aci2&&aci2!=aci3)||(aci1==aci3&&aci3!=aci2)||(aci2==aci3&&aci3!=aci1))
        printf("Ucgen ikizkenar");
    
    else
        printf("Ucgen cesitkenar");
    
    return (0);
        
}
#endif
