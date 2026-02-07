//
//  kesir.c
//  problem
//
//  Created by Eren on 9.11.2024.
//
#if 0

#include <stdio.h>
int main(void){
    
    char op;
    //int a,b;
    float a,b, sonuc;
    
    printf("Toplama veya cikarma operatoru giriniz: ");
    scanf(" %c", &op);
    
    printf("a ve b degiskenlerine 2 tamsayi giriniz: ");
    scanf("%f%f",&a,&b);
    
    if(a==0||b==0)
        printf("Islem yapilamaz");
    
    else if(op=='+'){
        sonuc=(1/a)+(1/b);
        printf("1/%.2f %c 1/%.2f = %.2f", a,op,b,sonuc);}
        
    else if(op=='-'){
        sonuc=1/a-1/b;
        printf("1/%.0f%c1/%.0f=%.2f", a,op,b,sonuc);}

    else
        printf("Hatali islem");
    
    return (0);
}
#endif
