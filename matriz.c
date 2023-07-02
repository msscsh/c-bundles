#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

       int m[4][4],i,j,somadalinha3=0;
       float somadacoluna2=0,somadamatriz=0,Mgeo=1,MG;
       
       srand(time(NULL));
       
       for (j=0; j <=3; j++){
           for (i=0; i<=3; i++){
               
       m[i][j] = (rand()%11+5);
       somadamatriz += m[i][j] ;
       if(j == 2 )
       somadalinha3 += m[i][j] ;
       if(i == 1 )
       somadacoluna2 += m[i][j] ;
       if(i == j )
       Mgeo = Mgeo * m[i][j] ;
       
           }
           }
           
       for (j=0; j <=3; j++){
           printf("\n");
           for (i=0; i<=3; i++){
           printf(" %d |",m[i][j]);
           }
           }
       MG = pow(Mgeo,(1/4));
       printf("\nSoma da matriz: %.0f\n",somadamatriz);
       printf("Media da matriz: %.2f\n",somadamatriz/16);
       printf("Soma da 3a linha: %d\n",somadalinha3);
       printf("Media da 2a coluna: %.2f\n",somadacoluna2/4);
       printf("Media geometrica: %.2f\n",MG);
       
       getchar();

}
