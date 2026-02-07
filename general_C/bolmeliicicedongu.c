//
//  bolmeliicicedongu.c
//  C_ogrenme
//
//  Created by Eren Sivri on 28.11.2024.
//
#if 0
#include <stdio.h>
#include <math.h>
int main(void){
    int n,i;
    float x,seri;
    printf("Pozitif tam sayi degeri giriniz: ");
    scanf("%d", &n);
    
    
    if(n<=0){
        printf("bu sayi pozitif degil. lutfen pozitif sayi giriniz: ");}
    
    
    printf("Reel sayi degeri giriniz: ");
    scanf("%f", &x);
    
    for(i=1;i<=2*n-1;i+=2)
        seri+=i/pow(x,i+1);
    
    printf("Seri=%f",seri);
    
  
    
        
        
        
        return 0;
}

#endif
