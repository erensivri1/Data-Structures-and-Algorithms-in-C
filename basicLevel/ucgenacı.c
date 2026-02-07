//
//  ucgenacı.c
//  problem
//
//  Created by Eren on 8.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    float dar,genis,dik,aci1,aci2,aci3;
    
    printf("Ucgenin ic acilarini giriniz: ");
    scanf("%f%f%f",&aci1,&aci2,&aci3);
    
    if(aci1+aci2+aci3!=180)
        printf("Ucgen degil");
    
    else if(aci1+aci2==90||aci2+aci3==90||aci1+aci3==90)
        printf("Dik ucgen");
    
    else if(aci1+aci2>90||aci2+aci3>90||aci1+aci3>90)
        printf("Genis acili ucgen");
    
    else
        printf("Dar acili ucgen");
    
    return (0);
}
#endif
