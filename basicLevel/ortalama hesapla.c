//
//  ortalama hesapla.c
//  vizehazirlik
//
//  Created by Eren on 11.11.2024.
//
#if 0
#include <stdio.h>


int main(void){
    
    float fiz,kimya,biyo,mat,ede,tarih,ing,ort;
    
    printf("fiz: ");
    scanf("%f",&fiz);
    
    printf("kimya: ");
    scanf("%f",&kimya);
    
    printf("biyo: ");
    scanf("%f",&biyo);
    
    printf("mat: ");
    scanf("%f",&mat);
    
    printf("ede: ");
    scanf("%f",&ede);
    
    printf("tarih: ");
    scanf("%f",&tarih);
    
    printf("ing: ");
    scanf("%f",&ing);
    
    
    ort=(fiz+kimya+biyo+mat+ede+tarih+ing)/8;
    printf("ortalama=%.2f", ort);
    
    if(ort>50)
        printf("gecti");
    
    else
        printf("kaldi");
    
    return(0);
    
    
    
}
#endif
