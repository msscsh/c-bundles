#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int lz1=100, lz2=100, lp=100,L=0,az1=0,az2=0,ap=0,def=0,c,c2,ammo=12,medkit=3,round=1;        
        srand(time(NULL));        
        while ((lp > 0 && (lz1 > 0 || lz2 > 0)) || (lz1 > 0 && lz2 > 0)) {
            printf("\nRound %d!\n",round);
            printf("Life %d\n",lp);
            printf("| 1:Atacar(ammo %d) |\n| 2:Defender        |\n| 3:Curar (Medkit %d)|\n",ammo,medkit);
            scanf("%d",&c);        
            switch (c){
                case 1:
                        printf("Atacar quem?\n");
                        printf("1:Zombie 1 %d\n",lz1);    
                        printf("2:Zombie 2 %d\n",lz2);
                        scanf("%d",&c2);
                        ap = (rand()%200+13);
                        ammo -= 1;
                        break;
                case 2:
                        def = (rand()%10+8);
                        c2 = 0;
                        break;
                case 3:
                        L = (rand()%20+5);
                        medkit -= 1;
                        printf("Voce recuperou %d\n",L);
                        lp += L;
                        c2 = 0;
                        break;
                }        
            if (c2 == 1){
                lz1 -= ap;
                printf("| Voce tirou %d do Zombie 1 |",ap);
                }else if (c2 == 2){
                        lz2 -= ap;  
                        printf("| Voce tirou %d do Zombie 2 |",ap);             
                        }else{
                            printf("| Voce errou |");
                            }                   
            if (lz1 >0){
                    az1 = (rand()%8+1);
                    lp -= az1;
                    printf("| Zombie 1 tirou %d |",az1);
                    }
            if (lz2 >0){
                    az2 = (rand()%8+2);
                    lp -= az2;
                    printf("| Zombie 2 tirou %d |",az2);
                    }
            round++;
            system("clear");
        }
        if(lp > 0 ){
               printf("Vitoria");
               }else if(lz1 > 0 || lz2 > 0){
                     printf("Tente novamente...\n GAME OVER");
                     }
}
