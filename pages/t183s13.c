//
//  t183s13.c
//  C_ogrenme
//
//  Created by Eren Sivri on 2.06.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//struct ogrenci{
//    char ad[10],soyad[10];
//    int boy;
//};
//int main(void){
//    FILE *uzunluk;
//    uzunluk=fopen("/Users/erensivri/Desktop/uzun.txt", "w");
//    int sayi,ort,i,toplam=0;
//    printf("Sinifta kac kisi var: ");
//    scanf("%d",&sayi);
//    
//    struct ogrenci sinif[sayi];
//    
//    for(i=0;i<sayi;i++){
//        scanf("%s%s%d",sinif[i].ad,sinif[i].soyad,&sinif[i].boy);
//        toplam+=sinif[i].boy;
//        fprintf(uzunluk,"%s%s%d\n",sinif[i].ad,sinif[i].soyad,sinif[i].boy);
//    }
//    
//    ort=toplam/sayi;
//    printf("Ortalama %d",ort);
//    fclose(uzunluk);
//    
//    return 0;
//}
