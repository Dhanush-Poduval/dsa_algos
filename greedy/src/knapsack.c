#include <stdio.h>
#include "knapsack.h"
#include <math.h>

void sort(struct items *item , int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if((item[i].ratio)<(item[j].ratio)){
        struct items temp=item[i];
	item[i]=item[j];
	item[j]=temp;
      }
    }
  }

}


void knapsack_h(struct items *item,int n){
  for(int i=0;i<n;i++){
    (item[i].ratio)=((item[i].value)/(item[i].weight));

  };
  sort(item,n);
  int curr_value;
  int capacity=60;
  int max_profit=0;
  int temp_ratio=0;
  for(int i=0;i<n;i++){
    if(item[i].weight<capacity){
      curr_value=item[i].value;
      max_profit+=curr_value;
      capacity-=item[i].weight; 
    }
    if(item[i].weight>capacity){
      curr_value=((float)capacity/(float)item[i].weight)*(item[i].value);
      max_profit+=curr_value;
      break;
    }




  };
  printf("THe maximum profit that can be formed is : %d\n",max_profit);

}
