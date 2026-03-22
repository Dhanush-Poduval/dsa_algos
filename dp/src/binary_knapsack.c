#include <stdio.h>
#include "binary_knapsack.h"
#include <stdlib.h>
#include <math.h>

int binary_knapsack(int max_weight , int weight[], int value[], int n){
   struct binary binary[n-1][max_weight-1];
   for(int i=0;i<=n;i++){
     for(int j=0;j<=max_weight;j++){
       if(i==0 || j==0){
         binary[i][j].value=0;
       };
     };
   };
   int take ;
   int skip;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=max_weight;j++){
       if(weight[i-1]<=j){
          take=value[i-1]+binary[i-1][j-weight[i-1]].value;
          skip=binary[i-1][j].value;
          binary[i][j].value=(take>skip) ? take :skip;

       }
       else {
         binary[i][j].value=binary[i-1][j].value;
       }
     }
   }
   return binary[n][max_weight].value;

}
