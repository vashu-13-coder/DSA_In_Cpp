#include <iostream>
using namespace std;

//FUNCTIONS

//Function For Finding Power of Base
void pow(int a,int b){
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    cout<<"The answer is: "<<ans<<endl;
}

//Functon for checking given number is odd or even
void EvenOdd(){
    int n;
    cout<<"Enter The Number That Is To Be Check That It Is Even Or Odd: ";
    cin>>n;
    if ( n % 2 == 0){
        cout<<n<<" is Even Number"<<endl;
    }
    else{
        cout<<n<<" is Odd Number"<<endl;
    }
}

//Function for finding factorial
int factorial(int n){
    int factorial = 1;
    while( n > 0){
        factorial = factorial * n;
        n--;
    }
    
    return factorial;
}

//A P based question
int a_p(){
    int n;
    cout<<"Enter the term you want to find: ";
    cin>>n;
    int ans = 3 * n + 7;
    return ans;
}

//Total no. of set bits in a&b
int bits_teller(){
    int count = 0 , count1 = 0;
    int a , b;
    cout<<"Enter the two number whose bit is to be find: ";
    cin >>a >> b;
    while ( a!=0 ){
        if ( a&1 ){
            count++;
        }
        a = a>>1;
    }
    while ( b!=0 ){
        if ( b&1 ){
            count1++;
        }
        b = b>>1;
    }
    return (count + count1);

}

// Fibonnaci Series
void Fibonnaci_Series(){
    int n;
    cout<<"Enter the term till which you want the Fibonnaci Series: ";
    cin>>n;
    int n1 = 0, n2 = 1;
    cout<<"The Fibonnaci Series is: "<< n1 <<" "<< n2;
    while( n-2 > 0){
        int n3 = n1 + n2;
        cout<<" "<<n3;
        n1 = n2;
        n2 = n3;
        n--;
    }
}
/*
int main(){
    int base,power;
    cout<<"Enter The Value Of Base:";
    cin>>base;
    cout<<"Enter The Value Of Power:";
    cin>>power;
    //pow(base,power);
    //EvenOdd();
    int a , b;
    cout<<"Enter The Value Of n:";
    cin>>a;
    cout<<"Enter The Value Of r:";
    cin>>b;
    //cout<<"The Value Of nCr Is: "<<(factorial(a))/(factorial(b) * factorial( a - b ))<<endl;
    int a1 = a_p();
    //cout<<" The term of A P: " << a ;
    int b1= bits_teller();
    //cout<<"Total no. of set bits in inputed two number: "<< b1;
    Fibonnaci_Series();
    return 0;
}
*/

// Pass By Value

void dummy( int n ){
    n++;
    cout<< "n is "<< n << endl;
}

/*
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin >> n;
    dummy (n);
    cout<<"Number n is "<<n<< endl;

*/

// Arrays

//Function to print an array
void printarray(int array[] , int size ){
    for(int i = 0; i < size ; i++){
        cout<<array[i];
    }
}

// Function to find the sum of all elements of an array
int sum_of_array( int array[] , int size){
    int sum = 0;
    for ( int i =0; i < size; i++){
        sum += array[i];
    }
    return sum ;
}

// FUNCTION TO FIND THE ENTERED NUMBER IN THE INPUTED ARRAY
bool find_element(int array[] , int size, int key){
    for ( int i =0; i < size; i++){
        if (key == array[i]){
            return 1;
        }
    }
    return 0;

}

// Function for reversing an array
void reverse_array( int array[] , int size){
    int mid = size/2;
    for (int i = 0; i < mid ; i++){
        int temp = array[i];
        array[i] = array[(size-1) - i];
        array[(size-1) - i] = temp ;
    }
    cout<<"The reversed array is: ";
    for(int i = 0; i < size ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //Initializtion of array having value 1
    /*
    int size ;
    cout<<"Enter the size of 'number' array: ";
    cin>>size;
    int number[size];
    for(int i = 0; i < size; i++){
        number[i] = 1;
    }
    int numbersize = sizeof(number)/sizeof(int);
    cout<<"The size of inputed array is: "<< numbersize<<endl;
    printarray(number, size);
    */

    //Initialization of character array with different value
    /*
    int size_ ;
    cout<<"Enter the size of 'character' array: ";
    cin>>size_;
    char character[size_];
    for ( int i =0; i < size_ ; i++){
        char value;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value;
        character[i] = value;
    }
    cout<<character;
    */
    
    //Finding maximum and minimum element in an array
    /*
    int size__ ;
    cout<<"Enter the size of 'number_' array: ";
    cin>>size__;
    int number_[size__];
    for(int i = 0; i < size__; i++){
        int value;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value;
        number_[i] = value;
    }
    int max = number_[0];
    int min = number_[0];
    for(int i = 0; i < size__; i++){
        if (number_[i] > max){    // in place of this if block we can write
            max = number_[i];     // max_ = max(max_ , number_[i])
        }
        if ( number_[i] < min){    // in place of this if block we can write
            min = number_[i];      // min_ = min(min_ , number_[i])
        }
    }
    cout<<"The maximun value in Inputed array is: "<<max<<endl;
    cout<<"The minimum value in Inputed array is: "<<min<<endl;

    */

    //Print sum of all elements of a array
    /*
    int sizeee;
    cout<<"Enter the size of an array: ";
    cin>>sizeee;
    int arr[100];
    for(int i = 0; i<sizeee; i++){
        int value__;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value__;
        arr[i] = value__;
    }
    int b = sum_of_array(arr , sizeee);
    cout<<"The sum of the inputed array is: "<< b <<endl;
    */

    // LINEAR SEARCH
    /*
    int sizee;
    cout<<"Enter the size of an array: ";
    cin>>sizee;
    int arr1[100];
    for(int i = 0; i<sizee; i++){
        int value___;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value___;
        arr1[i] = value___;
    }
    int key;
    cout<<"ENTER THE NUMBER THAT IS NEED TO BE FIND: ";
    cin>>key;
    bool found = find_element( arr1 , sizee , key);
    if ( found ){
        cout<<"KEY IS PRESENT"<<endl;
    }
    else{
        cout<<"KEY IS ABSENT"<<endl;
    }
    */

    //Reverse of an array
    int sizeeee;
    cout<<"Enter the size of an array: ";
    cin>>sizeeee;
    int arr2[100];
    for(int i = 0; i<sizeeee; i++){
        int value____;
        cout<<"Enter the value of "<<i <<" index: ";
        cin>>value____;
        arr2[i] = value____;
    }
    cout<<"The array before reversing is: ";
    for(int i = 0; i < sizeeee ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    reverse_array(arr2 , sizeeee);
}
