//
//  dizilermukemmelsayi.c
//  C_ogrenme
//
//  Created by Eren Sivri on 28.03.2025.
//
//
//#include <stdio.h>
//void mukemmel(int dizi[],int n){
//    int i,dizi2[30],j,topla=0;
//    
//    for(i=0;i<n;i++){
//        printf("%d.degeri gir: ",i+1);
//        scanf("%d",&dizi[i]);
//        
//        topla=0;
//        
//        for(j=1;j<dizi[i]-1;j++){
//            if(dizi[i]%j==0){
//                topla+=j;
//            }
//        }
//        if(topla==dizi[i]){
//            dizi2[i]=1;
//        }
//        else
//            dizi2[i]=0;
//    }
//    
//    printf("mukemmel sayi sonuclari: ");
//    for(i=0;i<n;i++){
//        printf("%d ",dizi2[i]);
//    }
//    
//}
//
//int main(void){
//    int dizi[30],n;
//    
//    printf("n sayısını gir: ");
//    scanf("%d",&n);
//
//    
//    mukemmel(dizi,n);
//    
//    return 0;
//}
