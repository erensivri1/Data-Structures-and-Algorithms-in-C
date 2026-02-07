//
//  finalcıkmıs2.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.06.2025.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//struct kisi {
//    char ad[10],sonuc[50];
//    int kilo;
//    double boy,vki;
//};
//int main(void){
//    FILE *dosya;
//    dosya=fopen("/Users/erensivri/Desktop/vki.txt", "w");
//    int sayi,i;
//    double max=0;
//    printf("kac kisi girilecek ");
//    scanf("%d",&sayi);
//    
//    struct kisi *yapi;
//    yapi=(struct kisi*)malloc(sayi*sizeof(struct kisi));
//    
//    for(i=0;i<sayi;i++){
//        printf("%d.kisinin ad kilo boy degerlerini gir: ",i+1);
//        scanf("%s%d%lf",(yapi+i)->ad,&(yapi+i)->kilo,&(yapi+i)->boy);
//        (yapi+i)->vki=(yapi+i)->kilo/((yapi+i)->boy*(yapi+i)->boy);
//        if((yapi+i)->vki<18.5){
//            strcpy((yapi+i)->sonuc, "Zayıf");
//        }
//        if(18.5<=(yapi+i)->vki&&(yapi+i)->vki<25){
//            strcpy((yapi+i)->sonuc, "Normal");
//        }
//        if(25<=(yapi+i)->vki&&(yapi+i)->vki<30){
//            strcpy((yapi+i)->sonuc, "Fazla");
//        }
//        if(30<=(yapi+i)->vki&&(yapi+i)->vki<40){
//            strcpy((yapi+i)->sonuc, "Obez");
//        }
//        if(40<=(yapi+i)->vki){
//            strcpy((yapi+i)->sonuc, "İleri Obez");
//        }
//        if((yapi+i)->vki>max){
//            max=(yapi+i)->vki;
//        }
//        fprintf(dosya,"%s %d %0.2f %0.2f %s\n",(yapi+i)->ad,(yapi+i)->kilo,(yapi+i)->boy,(yapi+i)->vki,(yapi+i)->sonuc);
//
//    }
//    for(i=0;i<sayi;i++){
//        if((yapi+i)->vki==max){
//            printf("Max VKI: %0.2f  Sonuc: %s   Adı: %s",(yapi+i)->vki,(yapi+i)->sonuc,(yapi+i)->ad);
//            fprintf(dosya, "Max VKI: %0.2f  Sonuc: %s   Adı: %s",(yapi+i)->vki,(yapi+i)->sonuc,(yapi+i)->ad);
//        }
//
//    }
//    
//    
//    fclose(dosya);
//    free(yapi);
//    
//    return 0;
//}
