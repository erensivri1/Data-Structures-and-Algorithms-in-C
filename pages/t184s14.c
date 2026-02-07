//
//  t184s14.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.06.2025.
//
//
//#include <stdio.h>
//#include <string.h>
//int main(void){
//    FILE *kelime,*uzun;
//    char yazi[10],yazi2[10];
//    int kullanicisayi;
//    kelime=fopen("/Users/erensivri/Desktop/kelime.txt", "r");
//    uzun=fopen("/Users/erensivri/Desktop/uzun.txt", "w");
//    
//    while (!feof(kelime)) {
//        fscanf(kelime, "%s",yazi);
//        fprintf(uzun, "%s %d\n",yazi,strlen(yazi));
//        
//    }
//    fclose(uzun);
//    
//    printf("Deger giriniz: ");
//    scanf("%d",&kullanicisayi);
//    
//    uzun=fopen("/Users/erensivri/Desktop/uzun.txt", "r");
//
//    while (!feof(uzun)) {
//        fscanf(uzun, "%s",yazi2);
//       
//        if(strlen(yazi2)>kullanicisayi){
//            printf("%s\n",yazi2);
//        }
//        
//    }
//    
//    fclose(uzun);
//    fclose(kelime);
//    
//    return 0;
//    
//    
//}
