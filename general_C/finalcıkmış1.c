//
//  finalcıkmış1.c
//  C_ogrenme
//
//  Created by Eren Sivri on 1.06.2025.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struc t siparis{
//    int urunadet,kalori;
//    char urunad[10];
//};
//
int main(void){
    FILE *kalori,*siparis;
    char ch;
    int toplam=0,farklıadet;
    kalori=fopen("/Users/erensivri/Desktop/kalori.txt", "r");
    siparis=fopen("/Users/erensivri/Desktop/sipariş.txt", "w");
    
    while ((ch=getc(kalori))!=EOF) {
        printf("%c",ch);
    }
    
    
    
    struct siparis *yemek;
    
    printf("Kac farkli urun siparis edeceksiniz? ");
    scanf("%d",&farklıadet);
    
    yemek=(struct siparis*)malloc(sizeof(struct siparis));
    
   
    
    for(int i=0;i<farklıadet;i++)
    {
        printf("Urun adini, kac adet istediginizi ve kalorisini giriniz: ");
        scanf("%s%d%d",yemek->urunad,&yemek->urunadet,&yemek->kalori);
        fprintf(siparis,"%s %d %d\n", yemek->urunad,yemek->urunadet,yemek->kalori);
        toplam+=yemek->urunadet*yemek->kalori;
    }
    
    printf("Toplam kalori: %d",toplam);
    
    fclose(siparis);
    fclose(kalori);
    free(yemek);
    
    return 0;
}
