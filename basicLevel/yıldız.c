//
//  yıldız.c
//  labders
//
//  Created by Eren Sivri on 20.11.2024.
//
#if 0
#include <stdio.h>
int main(void){
int n,i,j;
printf("sayi giriniz: ");
scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
return(0);
}
#endif




#if 0
#include <stdio.h>
int main(void){
    int i,j,n;
    printf("istediginiz satır sayisini giriniz: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++ ){
        for(j=0; j<i; j++)
            printf("*");
        printf("\n");
            }
    return (0);
}
#endif



#if 0
#include <stdio.h>
int main(void){
    int i,j,n;
    printf("istediginiz satır sayisini giriniz: ");
    scanf("%d", &n);
    
    for(i=n; i>=1; i-- ){
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
            }
    return (0);
}
#endif





#if 0
#include <stdio.h>
int main(void){
int n,i,j;
printf("sayi giriniz: ");
scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
            printf("a");
            
        printf("1");

        for(j=n; j>i; j--)
            printf("b");
        
        printf("\n");
    }
return(0);
}
#endif






#if 0
#include <stdio.h>
int main(void){
    int i,j,n;
    printf("istediginiz satır sayisini giriniz: ");
    scanf("%d", &n);
    
    for(i=n; i>=1; i-- ){
        for(j=1; j<=i; j++)
            printf("%d", n);
        printf("\n");
            }
    return (0);
}
#endif



