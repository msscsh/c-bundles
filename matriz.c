#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int m[4][4];
        int somadalinha3=0;
        float somadacoluna2=0;
        float somadamatriz=0;
        float mGeo=1;
        float mediaGeo;
        
        //Setting a different seed
        srand(time(NULL));

        for (int j=0; j <=3; j++) {
            for (int i=0; i<=3; i++) {
                m[i][j] = (rand() % 11+5);
                somadamatriz += m[i][j];
                if(j == 2 )
                    somadalinha3 += m[i][j];
                if(i == 1 )
                    somadacoluna2 += m[i][j];
                if(i == j )
                    mGeo = mGeo * m[i][j];
            }
        }

        for (int j=0; j <=3; j++) {
            printf("\n");
            for (int i=0; i<=3; i++) {
                printf(" %d |", m[i][j]);
            }
        }

        mediaGeo = pow(mGeo,(1/4));

        printf("\n\nSoma da matriz: %.0f\n",somadamatriz);
        printf("Media da matriz: %.2f\n",somadamatriz/16);
        printf("Soma da 3a linha: %d\n",somadalinha3);
        printf("Media da 2a coluna: %.2f\n",somadacoluna2/4);
        printf("Media geometrica: %.2f\n",mediaGeo);

}
