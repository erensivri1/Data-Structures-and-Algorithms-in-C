//
//  gostergeswap.c
//  C_ogrenme
//
//  Created by Eren Sivri on 10.12.2024.
//
#if 0
#include <stdio.h>
void swap(int *,int *,int *);
int main(void){
    int x,y,z;
    printf("sırasıyla x, y ve z degeri gir: ");
    scanf("%d%d%d",&x,&y,&z);
    swap(&x,&y,&z);
    printf("%d %d %d",x,y,z);
    
    return 0;
}

void swap(int *a,int *b, int *c){
    int deger;
    
    if(*a<*b){
        deger=*a;
        *a=*b;
        *b=deger;
            }
    
    if(*a<*c){
        deger=*a;
        *a=*c;
        *c=deger;
            }
    
    
    if(*b<*c){
        deger=*b;
        *b=*c;
        *c=deger;
            }
    
    }
#endif
