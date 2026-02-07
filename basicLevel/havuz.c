#if 0

#include <stdio.h>

int main(void){

    double en,boy,yukseklik,gereken;

    printf("Havuzun sırasıyla enini, boyunu ve yuksekligini belirten 3 deger giriniz:");

    scanf("%lf%lf%lf", &en,&boy,&yukseklik);
    
    gereken=en*boy*yukseklik;

    printf("Gereken su miktarı:%0.2lf metreküp", gereken);

    return(0);


}
#endif
