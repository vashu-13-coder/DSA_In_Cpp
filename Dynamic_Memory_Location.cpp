#include <iostream>
using namespace std;

//Bad Practice
int &func(int a){
    int num = a;
    int &ans = num;
    return ans;
}

//Function without Reference variable   --> Pass by value
void update(int n){
    n++;
}

//Function with Reference variable    --> Pass by reference
void update2(int &n){
    n++;
}


int main(){
    int i = 5;
    i++;
    //Creating reference Variable
    /*
    int &j = i;
    j++;
    cout<<"The value of i is: "<<i <<" and value of j is: "<<j<<endl;
    cout<<"The address of variable i is: "<<&i <<" and address of variable j is: "<<&j<<endl;
    
    int a = 7;
    cout<<"The value of 'a' before update function is: "<<a<<endl;
    update(a);
    cout<<"The value of 'a' after update function is: "<<a<<endl;

    cout<<"The value of 'a' before update2 function is: "<<a<<endl;
    update2(a);
    cout<<"The value of 'a' after update2 function is: "<<a<<endl;

    int b =func(a);
    cout<<b;
    */


    //Static Memory Allocation
    /*
    char c = 'a';
    cout<<"The value stored in static variable 'c' is :"<< c << "and size of it is: "<<sizeof(c)<<endl;
    */

    //Dynamic Memory Allocation
    /*
    char *ch = new char;
    *ch = 'b';
    cout<<"The value stored in Dynamic variable 'ch' is :"<< *ch << " and size of it is: "<<sizeof(ch)<<" also the address at which it is stored is: "<<ch<<endl;

    int *arr = new int[5];
    cout<<"The value stored in Dynamic variable 'arr' is :"<< *arr << " and size of it is: "<<sizeof(arr)<<" also the address at which it is stored is: "<<arr<<endl;


    // Creating Variable Size Array
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;

    int *array = new int[size];
    
    cout<<"Enter Elements of Array: ";
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    cout<<"The value stored in Dynamic variable 'array' is :"<< *array << " and size of it is: "<<sizeof(array)<<" also the address at which it is stored is: "<<array<<endl;
    */

    //Dyanamic memory Allocation of 2D Array
    int rows;
    cout<<"Enter number of rows of Array 'arr': ";
    cin>>rows;

    int columns;
    cout<<"Enter number of columns of Array 'arr': ";
    cin>>columns;


    //Creation of 2D Array
    int **arr = new int*[rows];
    for( int i = 0 ; i < columns ; i++){
        arr[i] = new int[columns];
    }

    //Taking each element of 2D Array
    for(int i = 0 ; i < rows ; i++){
        for( int j = 0 ; j < columns ; j++){
            cin>>arr[i][j];
        }
    }
    
    //Printing each element of 2D Array
    for(int i = 0 ; i < rows ; i++){
        for( int j = 0 ; j < columns ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //Releasing Memory
    for(int i = 0 ; i < rows ; i++){
        delete []arr[i];
    } 
    delete []arr;


}