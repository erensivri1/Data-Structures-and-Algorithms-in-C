//
//  diskriminant.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.12.2024.
//
#if 0
#include <stdio.h>
#include <math.h>
void bul(int a,int b,int c);
int main(void){
    int a,b,c;

    printf("a katsayısı= ");
    scanf("%d",&a);
    
    printf("b katsayısı= ");
    scanf("%d",&b);
    
    printf("c katsayısı= ");
    scanf("%d",&c);
    bul(a,b,c);
    
}
void bul(int a,int b,int c){
    int disk,x1,x2,i;
    double degera,degerb;
   
    disk=b*b-(4*a*c);
    
    if(disk>0){
        x1=(-b+sqrt(disk))/2*a;
        x2=(-b-sqrt(disk))/2*a;
        printf("kok1= %d, kok2= %d",x1,x2);}
        
    
    else if(disk==0){
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("kok1= %d, kok2= %d",x1,x2);
    }
    
    else {
            degera = -b / (2.0 * a);
            degerb = sqrt(-disk) / (2.0 * a);
            printf("Kok1= %.2f + %.2fi, Kok2= %.2f - %.2fi\n", degera, degerb, degera, degerb);
        }
    
}
#endif
