//
//  finalcıkmıs3.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.06.2025.
//

//#include <stdio.h>
//#include <stdlib.h>
//struct yapı{
//    char ad[10];
//    int puan;
//};
//
//int main(void){
//    int ort,max=0,kisi,i,toplam=0;
//    printf("Kac yarısmacı var: ");
//    scanf("%d",&kisi);
//    
//    FILE *dosya;
//    dosya=fopen("/Users/erensivri/Desktop/yarisma.txt", "w");
//    struct yapı *yarısmacı;
//    yarısmacı=(struct yapı*)malloc(kisi*sizeof(struct yapı));
//    
//    for(i=0;i<kisi;i++){
//        printf("%d.yarismacinin adini ve puanini giriniz: ",i+1);
//        scanf("%s%d",(yarısmacı+i)->ad,&(yarısmacı+i)->puan);
//        fprintf(dosya, "%s %d\n",(yarısmacı+i)->ad,(yarısmacı+i)->puan);
//        toplam+=(yarısmacı+i)->puan;
//        if((yarısmacı+i)->puan>max){
//            max=(yarısmacı+i)->puan;
//        }
//    }
//    ort=toplam/kisi;
//    
//    for(i=0;i<kisi;i++){
//        if(max==(yarısmacı+i)->puan){
//            printf("\nOrtalama: %d    En yuksek puan: %s %d",ort,(yarısmacı+i)->ad,(yarısmacı+i)->puan);
//            fprintf(dosya,"\nOrtalama: %d    En yuksek puan: %s %d",ort,(yarısmacı+i)->ad,(yarısmacı+i)->puan);
//        }
//    }
//    
//    free(yarısmacı);
//    fclose(dosya);
//    return 0;
//    
//}
