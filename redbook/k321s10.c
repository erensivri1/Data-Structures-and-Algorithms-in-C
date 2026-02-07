//
//  k321s10.c
//  C_ogrenme
//
//  Created by Eren Sivri on 24.05.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//struct basketci{
//    char isim[20];
//    int yas,boy,agırlık,ortskor,rebound;
//}oyuncu[3];
//
//int main(void){
//    int i,sayi=1,yuksekskor=0,yuksekrebo=0,toplamboy=0;
//    double ortboy;
//    char skorcu[20],rebocu[20];
//    for(i=0;i<3;i++){
//        printf("%d.oyuncunun isim yas agırlık boy ortalamaskor ve ortalamarebound degerlerini giriniz: ",sayi);
//        scanf("%s%d%d%d%d%d",oyuncu[i].isim,&oyuncu[i].yas,&oyuncu[i].boy,&oyuncu[i].agırlık,&oyuncu[i].ortskor,&oyuncu[i].rebound);
//        toplamboy+=oyuncu[i].boy;
//        
//        if(oyuncu[i].ortskor>yuksekskor){
//            strcpy(skorcu, oyuncu[i].isim);
//            yuksekskor=oyuncu[i].ortskor;
//        }
//        
//        if(oyuncu[i].rebound>yuksekrebo){
//            strcpy(rebocu, oyuncu[i].isim);
//            yuksekrebo=oyuncu[i].rebound;
//        }
//        sayi++;
//    }
//    
//    ortboy=toplamboy/3.0;
//    
//    printf("Ortalama boy: %.2f\n",ortboy);
//    printf("En skorer oyuncu: %s\n",skorcu);
//    printf("En iyi rebound alan oyuncu: %s\n",rebocu);
//    
//    return 0;
//
//}
