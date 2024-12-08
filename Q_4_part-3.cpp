#include <iostream>
using namespace std;

void InsertionSort(int A[], int n){
    int counter_swap = 0;
    int counter_comp = 0;
    for(int i = 1; i< n; i++ ){
        int j= i-1;
        int x = A[i];
        
        while(j>-1 && A[j]>x){
            cout<<"Compare "<<A[j]<<" with "<<A[j+1]<<endl;
            counter_comp++;
            A[j+1] = A[j];
            j--;
            
        }
        cout<<"Swap "<<A[j+1]<<" with "<<x<<endl;
            counter_swap++;
        A[j+1]= x;
        
    }
    cout<<"Total comparisons : "<<counter_comp<<endl;
    cout<<"Total swaps : "<<counter_swap<<endl;
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

