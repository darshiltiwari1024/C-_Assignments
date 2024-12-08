// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

   void bubble_sort(int arr[], int n){
       
         for(int i = 0; i < n-1 ; i++ ){
           for(int j= 0 ; j< n-i-1 ; j++){
               if(arr[j]>arr[j+1]){
                   swap(arr[j],arr[j+1]);
               }
           }
       }
       
         }
int main() {
    int arr[5] = {15,4,6,22,1};
    int n = 5;
    // Write C++ code here

         for(int i = 0 ; i < n; i++ ){
             cout<<arr[i]<<",";
         }
         cout<<endl;
         bubble_sort(arr, n);
         
         for(int i = 0 ; i < n; i++ ){
             cout<< arr[i]<<",";
         }
      

    return 0;
}