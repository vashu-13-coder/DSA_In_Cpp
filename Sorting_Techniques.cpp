#include <iostream>
#include <vector>
using namespace std;

// Selection Sort
vector<int> SelectionSort(vector<int> &array){
    for ( int i = 0; i < array.size() - 1 ; i++){
        int minIndex = i;
        for ( int j = i + 1; j < array.size() ; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
    return array;
}

// Bubble Sort
vector<int> BubbleSort(vector<int> &arr){
    int a = 0;
    while( a < arr.size() -1){
        for(int i = 0 , j = i + 1; i < arr.size() - 1 , j < arr.size(); i++ , j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        a++;
    }
    return arr;
}

//Insertion Sort
vector<int> InsertionSort(vector<int> &arr){
    for(int i = 1; i < arr.size() ; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if (arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                //ignore
                break;
            }
        }
        arr[j+1] = temp;
    }
    return arr;
}

int main(){
    // Selection Sort
    /*
    int n;
    cout<<"Enter size of array that is to be sorted: ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"The array before selection sorting: ";
    for (int x : arr){
        cout<< x <<" ";
    }
    cout<<endl;
    cout<<"The array after selection sorting: ";
    vector<int> sortedArray = SelectionSort(arr);
    for (int x : sortedArray){
        cout<< x <<" ";
    }
    cout<<endl;
    return 0;
    */

    // Bubble Sort
    /*
    int m;
    cout<<"Enter the size of array that is to be sorted by bubble sort: ";
    cin>>m;
    vector<int> array(m);
    for(int i = 0; i < m ; i++){
        cin>>array[i];
    }
    cout<<"Array before sorting through Bubble Sort is:";
    for(int i = 0; i < m ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    vector<int> SortedArray = BubbleSort(array);
    cout<<"Array after sorting through Bubble Sort is:";
    for(int i = 0; i < m ; i++){
        cout<<SortedArray[i]<<" ";
    }
    */

    // Insertion Sort
    int o;
    cout<<"Enter the size of array that is to be sorted by insertion sort: ";
    cin>>o;
    vector<int> array(o);
    for(int i = 0; i < o ; i++){
        cin>>array[i];
    }
    cout<<"Array before sorting through Insertion Sort is:";
    for(int i = 0; i < o ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    vector<int> SortedArray = InsertionSort(array);
    cout<<"Array after sorting through Insertion Sort is:";
    for(int i = 0; i < o ; i++){
        cout<<SortedArray[i]<<" ";
    }
}

