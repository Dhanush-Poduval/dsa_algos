#include <stdio.h>
#include "binary.h"

int main(){
  int n;
  printf("Enter the size of the array");
  scanf("%d",&n);
  int k;
  printf("Enter the value to be found");
  scanf("%d",&k);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  int result=0;
  int min=0;
  int max=n-1;
  result=binary_search(arr,min,max,k);
  if(result==1){
    printf("Found");
  }else{
    printf("Not Found");
  }

}
