#include <iostream>
#include <vector>
using namespace std;

// Problem of swapping alternate elements in an array
void swap_alternate(int array[] , int size){
    if (size % 2 == 0){
        for (int i = 0; i < size ; i=i+2){
            int temp = array[i];            // in place of these 3 line we can write
            array[i] = array[ i+1 ];        // swap (arr[i],arr[i+1]);
            array[ i+1 ] = temp;
        }
        cout<<"The alternate swapped array is: ";
        for (int i = 0; i < size ; i++){
            cout<<array[i]<<" ";
        }
    }
    else{
        for (int i = 0; i < (size - 1) ; i=i+2){
            int temp = array[i];
            array[i] = array[ i+1 ];
            array[ i+1 ] = temp;
        }
        cout<<"The alternate swapped array is: ";
        for (int i = 0; i < size ; i++){
            cout<<array[i]<<" ";
        }
    }
}

// Binary Search Function
int binarysearch( int arr[] , int size , int key){
    int low = 0;
    int high = size - 1;
    int mid =  low + ((high - low)/2);
    while( low <= high ){
        if (arr[mid] == key){
            return mid;
        }
        if (arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
        mid =  low + ((high - low)/2);
    }
    return -1;
}

//Find Pivot in an Sorted & Rotated Array using Binary Search
int getpivot(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    int mid =  start + ((end - start)/2);
    while (start < end){
        if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid =  start + ((end - start)/2);
    }
    return arr[start];
}

//Find the sqrt of a number using Binary Search
int mySqrt(int x) {
    int s = 1 ;
    int e = x-1;
    long long mid = s + (e - s)/2 ;
    long long result;
    if ( x < 2){
        result = x;
    }
    while (s <= e){
        long long b = mid * mid;
        if( b == x){
            result =mid;
            break;
        }
        else if (mid * mid > x){
            e = mid - 1;
        }
        else{
            result =mid;
            s = mid + 1;
        }
        mid = s + (e - s)/2 ;
    }
    return result;
}
// For more precision
double moreprecision(int n , int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision ; i++){
        factor = factor / 10;
        for (double j = ans ; j * j < n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}   

//Book Allocation Problems

// 1st question to assign minimum pages to read to students
bool IsPossible(vector<int> &arr , int students , int books , int mid){
    int StudentCount = 1;
    int PageSum = 0;
    for (int i = 0; i < students ; i++){
        if (PageSum + arr[i] <= mid){
            PageSum += arr[i];
        }
        else{
            StudentCount++;
            if (StudentCount > books || arr[i] > mid){
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;
}
int findPages(vector<int> &arr, int n, int m) {
    if (m > n) return -1;

    int sum = 0;
    for( int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    int s = 0 , e = sum , mid = s + (e-s)/2 , ans = -1;
    while ( s <= e){
        if (IsPossible(arr , n , m , mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;

}



int main(){
    
    // Problem of swapping alternate elements in an array
    /*
    int sizee;
    cout<<"Enter the size of an array: ";
    cin>>sizee;
    int arr[100];
    for(int i = 0; i<sizee; i++){
        int value;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value;
        arr[i] = value;
    }
    cout<<"The array before swapping alternately is: ";
    for(int i = 0; i < sizee ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swap_alternate(arr , sizee);
    */

   // Binary Search
   /*
   int even[6] = {2,4,7,34,40,60};
   cout<<"Enter the key that is to be searched in even array: ";
   int n;
   cin>> n;
   int a = binarysearch(even , 6 , n);
   if ( a != -1){
    cout<<n <<" is present in even array at position 89"<< a << endl;
   }
   else{
    cout<<n <<" is not present in even array."<< endl;
   }

   int odd[5] = {12,32,38,67,87};
   cout<<"Enter the key that is to be searched in odd array: ";
   int m;
   cin >> m;
   
   int b = binarysearch(odd , 5 , m);
   if ( b != -1){
    cout<<m <<" is present in odd array at position "<< b<<endl;
   }
   else{
    cout<<m <<" is not present in odd array."<< endl;
   }
    */
   
    //Find Pivot in an Sorted & Rotated Array using Binary Search
    /*

    int sorted_array[100]={7 , 9 , 1 , 2 , 3};
    int a = getpivot(sorted_array , 5);
    cout<<" The Pivoted element: "<< a <<endl;
    int sorted_array1[100]={7 , 9 , 134 , 2 , 3 , 43};
    int b = getpivot(sorted_array1 , 6);
    cout<<" The Pivoted element: "<< b <<endl;
    */

    //Find the sqrt of a number using Binary Search
    /*
    int q;
    cout<<"Enter the number whose sqrt is to be found: ";   
    cin>>q;
    int ans = mySqrt(q);
    cout<<"The sqrt of "<<q<<" is: "<<ans<<endl;
    cout<<"The more precise sqrt of "<<q<<" is: "<<moreprecision(q , 3 , ans)<<endl;
    */


    //Book Allocation Problems
    /*
    int n , m;
    cout<<"Enter the number of books: ";
    cin>>n;
    cout<<"Enter the number of students: ";
    cin>>m;
    vector<int> arr(n);
    cout<<"Enter the number of pages in each book: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"The minimum number of pages that can be allocated to each student is: "<<findPages(arr , n , m)<<endl;
    */
}
    