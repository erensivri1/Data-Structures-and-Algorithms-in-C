//
//  fonksiyonlabi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 27.11.2024.
//
#if 0
//parametresiz değer döndürmeyen
#include <stdio.h>
void fonk();
    

int main(){
    fonk();
    return(0);
}
void fonk(){
    int sayi,yenisayi=0;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    
    while(sayi>0)
    {
        yenisayi=10*yenisayi+sayi%10;
        sayi=sayi/10;
        
    }
    printf("Yenisayi= %d", yenisayi);
}




//parametreli değer döndürmeyen(değeri main fonksiyonun içinde alır.)
#include <stdio.h>
void fonk(int s);
int main(){
    
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    
    fonk(sayi);
    return(0);
}
void fonk(int s){
    int yenisayi=0;
    while(s>0)
    {
        yenisayi=10*yenisayi+s%10;
        s=s/10;
        
    }
    printf("Yenisayi= %d", yenisayi);
}


//parametresiz değer döndüren
#include <stdio.h>
int fonk();

int main()
{   int yenisayi;
    yenisayi=fonk();
    
    printf("Yenisayi= %d", yenisayi);

    return(0);
}
int fonk(){
    int sayi,yenisayi=0;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    
    while(sayi>0)
    {
        yenisayi=10*yenisayi+sayi%10;
        sayi=sayi/10;
        
    }
    return yenisayi;
}


//parametreli değer döndüren
#include <stdio.h>
int fonk(int s);

int main()
{
    int sayi, yenisayi;
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    
    yenisayi=fonk(sayi);
    printf("Yenisayi= %d", yenisayi);

    return(0);
}


int fonk(int s)
{
    int yenisayi=0;
    while(s>0)
    {
        yenisayi=10*yenisayi+s%10;
        s=s/10;
        
    }
    return yenisayi;
}
#endif
