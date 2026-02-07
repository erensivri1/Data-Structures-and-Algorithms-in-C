//
//  k320s6.c
//  C_ogrenme
//
//  Created by Eren Sivri on 24.05.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//
//struct calısan {
//    char isim[20],soyisim[20];
//    int yas,aylik;
//    char bolum[20];
//}sahıs[5];
//int main(void){
//    int i,yasli=0,yuksek=0,toplam=0;
//    double ort;
//    char yuksekisim[50];
//    printf("5 sahıs icin sırayla ad soyad yas aylik bolum bilgilerini gir: ");
//    for(i=0;i<5;i++){
//        scanf("%s%s%d%d%s",sahıs[i].isim,sahıs[i].soyisim,&sahıs[i].yas,&sahıs[i].aylik,sahıs[i].bolum);
//        if(sahıs[i].aylik>yuksek){
//            strcpy(yuksekisim,sahıs[i].isim);
//            strcat(yuksekisim," ");
//            strcat(yuksekisim, sahıs[i].soyisim);
//            strcat(yuksekisim," ");
//            strcat(yuksekisim, sahıs[i].bolum);
//            yuksek=sahıs[i].aylik;
//        }
//        if(sahıs[i].yas>60){
//            yasli++;
//        }
//        
//        toplam+=sahıs[i].aylik;
//    }
//    ort=toplam/5.0;
//    
//    printf("60 yas ustu kişi sayisi: %d\n",yasli);
//    printf("Ortalama aylik: %.2f\n",ort);
//    printf("En yuksek ayliği alan: %s\n",yuksekisim);
//    return 0;
//
//}
