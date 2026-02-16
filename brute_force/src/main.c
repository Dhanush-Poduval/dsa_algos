#include<stdio.h>
#include "linear.h"
#include<stdbool.h>
int main(){
  int n,a;
  bool result;
  printf("ENter the size of the array");
  scanf("%d",&n);
  int arr[n];
  printf("ENter the element to be searched");
  scanf("%d",&a);
  for(int i=0;i<n;i++){
    printf("Enter the %d elemnt of the array ",i+1);
    scanf("%d",&arr[i]);
  }
  result=linear_search(arr,a,n);
  if(result==true){
   printf("FOund");
  }
  else{
    printf("NOt found");
  }

}
