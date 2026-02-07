//
//  gno.c
//  C_ogrenme
//
//  Created by Eren Sivri on 28.11.2024.
//
#if 0
#include <stdio.h>
int main(void){
    int not,kredi,toplamnot=0,kreditoplam=0;
    float gno;
    
    printf("Prog kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;
    
    printf("kesikli kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    printf("mat kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;

    
    printf("bm kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    printf("fiz kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    printf("fizlab kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    printf("edeb kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    printf("tarih kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;

    
    
    printf("ing kredi: ");
    scanf("%d", &kredi);
    
    printf("Not giriniz: ");
    scanf("%d",&not);
    
    toplamnot+=kredi*not;
    kreditoplam+=kredi;


    gno=toplamnot/kreditoplam;
    
    printf("Toplam not= %d\n",toplamnot);
    printf("Toplam kredi= %d\n", kreditoplam);
    printf("Dönem Ortalaması= %.2f", gno);
    
    return (0);
    
}
#endif
