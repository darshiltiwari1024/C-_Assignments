
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int address(int type_space, int rows, int columns ,int memory, int base, int i, int j ){
    if(memory == 0){
    return (i*columns + j)*type_space + base;
    }
    else if(memory == 1){
        return (j*rows + i )*type_space + base; 
    }
    
    return -1;
}

int main() {
    // Write C++ code here
    
    int type_space,rows,columns,memory,base,i,j;
    cout<< "Enter details about the 2D array : "<<endl;
    cout<<"Enter the type of array , 4 for int ,1 for char, 4 for float, 8 for double, 1 for bool : ";
    cin>>type_space;
    cout<<endl<<"Enter the number of rows : ";
    cin>>rows;
    cout<<endl<<"Enter the number of columns : ";
    cin>>columns;
    cout<<endl<<"Enter the memory, 0 for row major , 1 for column measure :  ";
    cin>>memory;
    cout<<endl<<"Enter base address : ";
    cin>>base;
    cout<<endl<< " Enter element row index(i) : ";
    cin>>i;
    cout<<endl<<"Enter element column index(j) : ";
    cin>>j;
    
    cout<<endl<< "Your element address in the given 2D array is : " <<address(type_space,rows,columns,memory,base,i,j);
    

    return 0;
}
