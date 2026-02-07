#if 0

#include <stdio.h>


int main(void){
    
    
    int sayi, adet=1, neg=0, pos=0;
    
    printf("7 adet sayinin pozitif negatif ayrimini yapacagiz\n");
    
    
    for(; adet<=7; ){
        
        printf("%d. sayiyi giriniz: ", adet);
        scanf("%d", &sayi);
        if (sayi>0)
            pos++;
        
        
        else if(sayi<0)
            neg++;
        
        else
        {printf("0 sayilmaz. Baska bir sayi giriniz: \n");
            adet--;
            
        }
        
        adet++;
        
        
    }
    
    printf("%d sayi pozitif \n", pos);
    printf("%d sayi negatif\n", neg);
    
    return(0);
}
#endif
