#include <iostream>
#include "merge.h"
using namespace std;

int main(){
  cout<< "Enter the size of the array"<<endl;
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" Element"<<endl;
    cin>>arr[i];
  };
  merge_sort(arr,n); 

}
