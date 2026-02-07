//
//  t160s16.c
//  C_ogrenme
//
//  Created by Eren Sivri on 30.05.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//struct yarısmacı{
//    char ad[10],soyad[10];
//    float performans;
//    float degerlendirme[4];
//};
//
//float hesapla(struct yarısmacı admin);
//
//int main(void){
//    struct yarısmacı admin;
//    int i;
//    
//
//    
//    strcpy(admin.ad, "eren");
//    strcpy(admin.soyad, "sivri");
//    
//    for(i=0;i<4;i++){
//        printf("%d.değerlendiricinin puanını gir: ",i+1);
//        scanf("%f",&admin.degerlendirme[i]);
//    }
//       
//        
//        printf("Performans puanı: %0.2f",hesapla(admin));
//        return 0;
//    
//    
//   
//}
//
//float hesapla(struct yarısmacı admin){
//    int i,kucuk=7,buyuk=0;
//    float toplam=0;
//    for(i=0;i<4;i++){
//        if(admin.degerlendirme[i]>buyuk){
//            buyuk=admin.degerlendirme[i];
//        }
//        if(admin.degerlendirme[i]<kucuk){
//            kucuk=admin.degerlendirme[i];
//        }
//        toplam+=admin.degerlendirme[i];
//    }
//    admin.performans=(toplam-kucuk-buyuk)/2;
//    
//    return admin.performans;
//}
//
