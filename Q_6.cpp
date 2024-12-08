// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int address(int type_space,int rows, int columns ,int depth, int memory, int base, int i, int j, int k ){
    if(memory == 0){
    return (k*rows*columns + i*columns + j)*type_space + base;
    }
    else if(memory == 1){
        return (k*rows*columns + j*rows + i )*type_space + base; 
    }
    
    return -1;
}

int main() {
    // Write C++ code here
    
    int type_space,rows,columns,depth,memory,base,i,j,k;
    cout<< "Enter details about the 3D array : "<<endl;
    cout<<"Enter the type of array , 4 for int ,1 for char, 4 for float, 8 for double, 1 for bool : ";
    cin>>type_space;
    cout<<endl<<"Enter the number of rows : ";
    cin>>rows;
    cout<<endl<<"Enter the number of columns : ";
    cin>>columns;
    cout<<endl<<"Enter the number of depth : ";
    cin>>depth;
    cout<<endl<<"Enter the memory, 0 for row major , 1 for column measure :  ";
    cin>>memory;
    cout<<endl<<"Enter base address : ";
    cin>>base;
    cout<<endl<< " Enter element row index(i) : ";
    cin>>i;
    cout<<endl<<"Enter element column index(j) : ";
    cin>>j;
    cout<<endl<<"Enter element depth index(k) : ";
    cin>>k;
    
    cout<<endl<< "Your element address in the given 3D array is : " <<address(type_space,rows,columns,depth,memory,base,i,j,k);
    

    return 0;
}
