#include<iostream>

#include "merge.h"

using namespace std;

void merge_sort(int arr[],int n){
  int middle;
  if(n<=1){
    return;
  }
  if(n%2==0){
    middle=n/2;
  }else{
    middle=(n+1)/2;
  }
  int leftArr[middle];
  int rightArr[n-middle];
  for(int i=0;i<n;i++){
    if(i<middle){
     leftArr[i]=arr[i];
    }else{
      rightArr[i-middle]=arr[i];
    };
  };
  int right , left;
  right=n-middle;
  left=middle;
  merge_sort(leftArr,middle);
  merge_sort(rightArr,n-middle);
  merge(leftArr,rightArr,arr,right,left);
  for(int m=0;m<n;m++){
    cout<<arr[m]<<endl;
  };

}

void merge(int leftArr[],int rightArr[],int arr[],int right,int left){
   int left_size=left;
   int right_size=right;
   int l=0,r=0,i=0;
   while(l<left_size && r<right_size){
       if(leftArr[l]<rightArr[r]){
          arr[i]=leftArr[l];
	  l++;
	  i++;
       }else{
         arr[i]=rightArr[r];
	 r++;
	 i++;
       };
   };
   while(l<left_size){
      arr[i]=leftArr[l];
      l++;
      i++;
   };
   while(r<right_size){
     arr[i]=rightArr[r];
     r++;
     i++;
   };

}
