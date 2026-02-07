//
//  deneme.c
//  C_ogrenme
//
//  Created by Eren Sivri on 3.01.2025.
//

//#include <stdio.h>
//void kups(int *);
//void prizmas(int *);
//void kures(int *);
//
//int main(void){
//    int numara,kup,prizma,kure;
//    printf("Numara seciniz(1-Kup 2-Dikdortgenler prizması 3-kure 4-bitir): ");
//    scanf("%d",&numara);
//    if(numara>0&&numara<=4)
//        
//    {
//        while(numara!=4)
//        {
//            if(numara==1){
//                kups(&kup);
//                printf("Kupun hacmi==%d\n",kup);
//            }
//            if(numara==2){
//                prizmas(&prizma);
//                printf("Dikdortgenler prizmasının hacmi==%d\n",prizma);
//            }
//            if(numara==3){
//                kures(&kure);
//                printf("Kurenin hacmi==%d\n",kure);
//            }
//            
//            printf("Numara seciniz(1-Kup 2-Dikdortgenler prizması 3-kure 4-bitir): ");
//            scanf("%d",&numara);
//        }
//    }
//    else
//        printf("Hatalı tuslama yaptiniz!! Program sonlandı ");
//    return 0;
//        
//}
//void kups(int *kup){
//    int kenar;
//    printf("Kenar giriniz: ");
//    scanf("%d",&kenar);
//    *kup=kenar*kenar*kenar;
//    
//}
//void prizmas(int *prizma){
//    int kenar1,kenar2,kenar3;
//    printf("Kenarları giriniz: ");
//    scanf("%d%d%d",&kenar1,&kenar2,&kenar3);
//    *prizma=kenar1*kenar2*kenar3;
//    
//}
//void kures(int *kure){
//    int yaricap;
//    printf("yaricap giriniz: ");
//    scanf("%d",&yaricap);
//    *kure=4*(3.14*yaricap*yaricap*yaricap)/3;
//}
