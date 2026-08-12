#include <iostream>
#include <array>
using namespace std;

//Printing 2D Array
void printArray(int array[][4], int row , int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}


//Function to search value in 2D array
bool SearchValue(int array[][4], int element , int row , int column){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            if (array[i][j] == element){
                return true;
            }
       }
    }
    return false;
}


//Function to find Row-wise Sum
void Row_wise_Sum(int array[][4] , int row , int column){
    for (int i = 0; i < row; i++){
        cout<<"The Sum of Row "<<i + 1<<" is: ";
        int sum = 0;
        for (int j = 0; j < column; j++){
            sum += array[i][j];
        }
        cout<<sum<<endl;
    }
}


// Function to find Largest Row sum
void Largest_row_Sum(int array[][4] , int row , int column){
    int maxSum = 0 , maxSum_Index = 0;
    for (int i = 0; i < row; i++){
        int sum = 0;
        for (int j = 0; j < column; j++){
            sum += array[i][j];
        }
        if (maxSum < sum){
            maxSum = sum;
            maxSum_Index = i + 1;
        }
    }
    cout<<"The Row which have largest sum of row is: "<<maxSum_Index<<" and the sum is: "<<maxSum<<endl;
}


int main(){

    // Creation of 2D Array without taking Input from user
    /*
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,0,1,2};
    cout<<"The 2D Array(Row-wise representation) arr1 is: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // Creation of 2D Array entering element row wise
    /*
    int arr2[3][4] = {{1 , 11 , 111, 1111}, {2 , 22 , 222 , 2222}, {3, 33 , 333, 3333}};
    cout<<"The 2D Array(Row-wise representation) arr2 is: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // Creation of 2D Array by taking Input from user --> Row-wise
    int arr[3][4];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<"Enter the element at index arr["<<i<<"]["<<j<<"] is:";
            cin>>arr[i][j];
        }
    }
    

    
    //Printing each element of 2D Array  --> Row-wise
    /*
    cout<<"The 2D Array(Row-wise representation) arr is: "<<endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */


    //Printing 2D Array by printArray function
    cout<<"Printing array By Function printArray:"<<endl;
    printArray(arr , 3 ,4);

    
    //Printing each element of 2D Array  --> Column-wise
    /*
    cout<<"The 2D Array(Column-wise representation)  arr is: "<<endl;
    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 3; i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    */

    
    
    //Searching Particular value in 2D Array
    /*
    cout<<"Enter Value that is to be searched in 2D Array: ";
    int target;
    cin>>target;
    if (SearchValue(arr , target , 3 ,4)){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    */


    // Printing Row-wise Sum
    Row_wise_Sum(arr , 3 , 4);

    //Printing Row number which has Largest row sum
    Largest_row_Sum(arr , 3 , 4);


    
}