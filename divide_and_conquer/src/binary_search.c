#include "binary.h"

int binary_search(int arr[],int low , int high,int k){
	int mid;
	if(low>high){
	 return 0;
	}
	mid=(low+high)/2;
	if(arr[mid]==k){
	 return 1;
	}
	if(arr[mid]>k){
	 high=mid-1;
	 return binary_search(arr,low,high,k);
	}
	else{
	 return binary_search(arr,mid+1,high,k);
	}

   

}
