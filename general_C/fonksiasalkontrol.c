//
//  fonksiasal.c
//  C_ogrenme
//
//  Created by Eren Sivri on 4.12.2024.
//

#if 0
#include <stdio.h>
int asal(int);
int main(void){
    int n,sonuc;
    printf("Tamsayi giriniz: ");
    scanf("%d",&n);
    
    sonuc=asal(n);
    printf("sonuc=%d",sonuc);
    return(0);
}

int asal(int n){
    int kontrol=0,i,s=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            kontrol++;}
    
    if(kontrol==2)
        s++;
   
    return(s);
        
}
#endif
