//
//  vizecikmis1.c
//  C_ogrenme
//
//  Created by Eren Sivri on 5.04.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//void birlestir(char ad[][20],char soyad[][20],int sonuc[3][3],char adsoyad[3][20]){
//    int i;
//    
//    for(i=0;i<3;i++){
//        
//        strcpy(adsoyad[i], ad[i]);
//        strcat(adsoyad[i], " ");
//        strcat(adsoyad[i], soyad[i]);
//    }
//    for(i=0;i<3;i++){
//        sonuc[i][2]=sonuc[i][0]*0.4+sonuc[i][1]*0.6;
//    }
//    
//}
//int main(void){
//    char ad[3][20],soyad[3][20];
//    int sonuc[3][3],i,j;
//    char adsoyad[3][20]={};
//    
//    for(i=0;i<3;i++){
//        printf("%d. ogrencinin adini soyadini vize ve final notunu giriniz: ",i+1);
//        scanf("%s%s%d%d",ad[i],soyad[i],&sonuc[i][0],&sonuc[i][1]);
//    }
//    birlestir(ad, soyad, sonuc,adsoyad);
//    
//    printf("SINAV SONUCLARI\n");
//    for(i=0;i<3;i++){
//        printf("%s %d\n",adsoyad[i],sonuc[i][2]);
//    }
//    return 0;
//}
