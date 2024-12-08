// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Selection_Sort(int arr[], int n){
    for(int i = 0 ;  i < n-1; i++){
        int SmallestIndex = i;
        for(int j = i+1; j<n ; j++){
            if(arr[j]< arr[SmallestIndex]){
                SmallestIndex = j;
        }
    }
    swap(arr[i],arr[SmallestIndex]);
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
         Selection_Sort(arr, n);
         
         for(int i = 0 ; i < n; i++ ){
             cout<< arr[i]<<",";
         }

    return 0;
    
}
