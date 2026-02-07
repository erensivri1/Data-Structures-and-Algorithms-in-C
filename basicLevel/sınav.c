//
//  sınav.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    float sinav1,sinav2,final,ort;
    char not;
    
    
    printf("Birinci sinavdan kac aldi: ");
    scanf("%f", &sinav1);
    
    printf("ikinci sinavdan kac aldi: ");
    scanf("%f", &sinav2);
    
    printf("finalden kac aldi: ");
    scanf("%f", &final);
    
    
    ort=sinav1*0.2+sinav2*0.3+final*0.4;
    
    if(100>=ort&&ort>=90){
        not='A';}
        
        else if((90>ort)&&(ort>=80)){
            not='B';}
        else if((80>ort)&&(ort>=70)){
            not='C';}
        else if((70>ort)&&(ort>=60)){
            not='D';}
        else if((60>ort)&&(ort>=0)){
            not='F';}
        else
            printf("Not degeri 100 ustu veya negatif olamaz!!");
        
            
        
        
    printf("Not degeri=%c", not);
        
    return (0);
}
#endif
