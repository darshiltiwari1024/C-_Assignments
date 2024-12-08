#include <iostream>
using namespace std;

void InsertionSort(int A[], int n){
    for(int i = 1; i< n; i++ ){
        int j= i-1;
        int x = A[i];
        
        while(j>-1 && A[j]>x){
            A[j+1] = A[j];
            j--;
        }
        A[j+1]= x;
    }
}

int main() {
   // Write C++ code here
    int arr[5] = {15,4,6,22,1};
    int n = 5;
    // Write C++ code here

         for(int i = 0 ; i < n; i++ ){
             cout<<arr[i]<<",";
         }
         cout<<endl;
         InsertionSort(arr, n);
         
         for(int i = 0 ; i < n; i++ ){
             cout<< arr[i]<<",";
         }

    return 0;
}
