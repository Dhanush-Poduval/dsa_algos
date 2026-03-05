#include <stdio.h>
#include "knapsack.h"
#include <math.h>


int main(){
  struct items item[4] {
    {200,40},
    {100,10},
    {120,20},
    {120,24}
  
  };
  int n=4;
  knapsack_h(item,4);

}
