#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n){

  for(int i =0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
       int temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] = temp;
       }
    }
    }


}
int main(){
 int n;
 cout<<"enter size of array"<<endl;
 cin>>n;
 int arr[n];
 cout<<"enter elements";
 for(int i=0; i<n; i++){
   cin>>arr[i];
 }
 bubblesort(arr,n);
 cout<<"sorted array"<<endl;
 for(int i=0; i<n; i++){
 cout<<arr[i]<<endl;}
return 0;

}
