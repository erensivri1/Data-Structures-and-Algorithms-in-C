#if 0
#include <stdio.h>


int main(void){
    int sayi, max, i=1;
   
    printf("10 Pozitif Sayi Giriniz\n ");
    printf("%d.sayiyi giriniz: \n", i);
    scanf("%d", &sayi);
    while(i<=10){
     
        if(sayi>max){
            max=sayi;
            i++;}
            printf("%d.sayiyi giriniz: ", i);
            scanf("%d",&sayi);
            
        
        if(sayi<=0){
            printf("Pozitif sayi giriniz");
            scanf("%d", &sayi);}
            
    }
    printf("En buyuk sayi=%d", max);
    return(0);
    
        
}
#endif
