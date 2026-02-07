//
//  finalcıkmıs4.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.06.2025.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struct butunleme{
//    char *ad;
//    long int no;
//    int yas;
//    
//};
//
//int main(void){
//    int i,j,uzunluk;
//    struct butunleme ogr;
//    
//    
//    printf("Adınızın uzunlugunu giriniz: ");
//    scanf("%d",&uzunluk);
//    
//    ogr.ad=(char*)malloc(uzunluk*sizeof(char));
//    
//    printf("Ad ogrenci no ve yası gir: ");
//    scanf("%s%li%d",ogr.ad,&ogr.no,&ogr.yas);
//    
// 
//    FILE *dosya;
//    dosya=fopen("/Users/erensivri/Desktop/23220030081.txt", "w");
//    
//    fprintf(dosya, "Ogrenci No: %li\nYas: %d \n",ogr.no,ogr.yas);
//    
//    for(i=0;i<sizeof(ogr.ad);i++){
//        for(j=0;j<=i;j++){
//            fputc(ogr.ad[i],dosya);
//        }
//        fprintf(dosya,"\n");
//    }
//    
//    fclose(dosya);
//    free(ogr.ad);
//    
//    return 0;
//}
