//
//  vizecikmis2.c
//  C_ogrenme
//
//  Created by Eren Sivri on 5.04.2025.
//

//
//#include <stdio.h>
//#include <string.h>
//void bul(int matris[10][10],int *toplam,int boyut){
//    int i,j;
//    for(i=0;i<boyut;i++){
//        for(j=0;j<boyut;j++){
//            if(i>j){
//                (*toplam)+=matris[i][j];
//            }
//        }
//    }
//}
//
//int main(void){
//    int secim,boyut,i,j,matris[10][10],toplam=0,adet,istop=0;
//    char isim[20][50],an[]={'a','n','\0'};
//    
//    printf("Matris icin 1 isim girmek icin 2 tusla: ");
//    scanf("%d",&secim);
//    if(secim==1){
//        printf("boyut gir: ");
//        scanf("%d",&boyut);
//        for(i=0;i<boyut;i++){
//            for(j=0;j<boyut;j++){
//                printf("%d %d matrisini gir: ",i+1,j+1);
//                scanf("%d",&matris[i][j]);
//            }
//        }
//        bul(matris,&toplam,boyut);
//        for(i=0;i<boyut;i++){
//            for(j=0;j<boyut;j++){
//                printf("%d ",matris[i][j]);
//            }
//            printf("\n");
//        }
//        printf("Toplam= %d",toplam);
//    }
//    
//    
//    else if(secim==2){
//        printf("kac isim: ");
//        scanf("%d",&adet);
//        for(i=0;i<adet;i++){
//            printf("%d. ismi gir: ",i+1);
//            scanf("%s",isim[i]);
//        }
//        printf("Icinde an gecenler\n ");
//        for(i=0;i<adet;i++){
//            if(strstr(isim[i], an) != NULL){
//                printf("%s\n",isim[i]);
//                istop++;
//            }
//        }
//        printf("Toplam= %d",istop);
//        
//    }
//    return 0;
//    
//}
//

