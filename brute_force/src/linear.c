#include "linear.h"
#include<stdbool.h>
bool linear_search(int arr[],int k,int n){
   int size;
   bool count;
   count=false;
   for(int i=0;i<n;i++){
     if(arr[i]==k){
      count= true;
     }
   }
   return count;

}
