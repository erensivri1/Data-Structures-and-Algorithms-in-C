//
//  t183s12.c
//  C_ogrenme
//
//  Created by Eren Sivri on 2.06.2025.
//
//
//#include <stdio.h>
//int main(void){
//    
//    
//    FILE *sayilar,*cikti;
//    
//    int i;
//    int sayi[2];
//    char harf;
//    
//    sayilar=fopen("/Users/erensivri/Desktop/sayilar.txt", "r");
//    cikti=fopen("/Users/erensivri/Desktop/cıktı.txt", "w");
//    
//    
//    while (!feof(sayilar)) {
//        for(i=0;i<2;i++)
//        {
//            fscanf(sayilar, "%d",&sayi[i]);
//        }
//        if(sayi[0]>sayi[1]){
//            fprintf(cikti, "%d\n",sayi[0]);
//        }
//        else
//            fprintf(cikti, "%d\n",sayi[1]);
//    }
//    
//    fclose(cikti);
//    fclose(sayilar);
//    
//    cikti=fopen("/Users/erensivri/Desktop/cıktı.txt", "r");
//    
//    while ((harf=fgetc(cikti))!=EOF) {
//        printf("%c",harf);
//    }
//    
//    fclose(cikti);
//    
//    return 0;
//    
//}
