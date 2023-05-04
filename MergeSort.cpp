#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
   
    int n1 = mid - start + 1;
    int n2 =  end - mid;
  
    /* create temp arrays */
    int left[n1], right[n2];
  
    /* Copy data to temp arrays L[] and R[] */
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1+ j];
  
    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = start; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
  
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
  
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}   

void mergeSort(int arr[], int start, int end){
    if(start < end){
        int mid = start + (end - start) /2;

        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }

}

int main(){
    int n;
    int arr[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
     
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    cout<<"Sorted elements: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
