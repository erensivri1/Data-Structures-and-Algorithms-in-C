//
//  k346s7.c
//  C_ogrenme
//
//  Created by Eren Sivri on 25.05.2025.
//

//#include <stdio.h>
//int main(void){
//    FILE *ogrenci,*gecti,*kaldi;
//    char isim[10];
//    int not;
//    
//    
//    ogrenci=fopen("/Users/erensivri/Desktop/metinislemdosyalari/ogrenci.txt","r");
//    gecti=fopen("/Users/erensivri/Desktop/metinislemdosyalari/gecti.txt","w");
//    kaldi=fopen("/Users/erensivri/Desktop/metinislemdosyalari/kaldi.txt","w");
//
//    while (fscanf(ogrenci, "%s %d",isim,&not)!=EOF) {
//        if(not>60){
//            fprintf(gecti, "%s %d\n",isim,not);
//        }
//        else
//            fprintf(kaldi, "%s %d\n",isim,not);
//    }
//    fclose(ogrenci);
//    fclose(gecti);
//    fclose(kaldi);
//
//    return 0 ;
//}
