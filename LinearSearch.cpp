#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int n,x;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter elemets in the array"<<endl;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to be searched"<<endl;
    cin>>x;
    int result = linearSearch(arr, n, x);
    if(result == -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<result<<endl;
    }
    return 0;
}