#include <iostream>
using namespace std;
int main() {

    // Bitwise Operators
    /*
    int a = 4;
    int b = 6;
    cout<<" a&b = "<<(a&b)<<endl;
    cout<<" a|b = "<<(a|b)<<endl;
    cout<<" a^b = "<<(a^b)<<endl;
    cout<<" ~a = "<<(~a)<<endl;
    */
   
    // Left Shift and Right Shift Operators
    /*
    cout<<" 17 left_shift = "<<(17<<1)<<endl;
    cout<<" 17 right_shift = "<<(17>>1)<<endl;
    cout<<" 19<<2 = "<<(17<<2)<<endl;
    cout<<" 19>>2 = "<<(17>>2)<<endl;
    */


    // Increment and Decrement Operators
    /*
    int c = 5;
    //post-increment
    cout<<" c++ = "<<(c++)<<endl;
    cout<<" c = "<<c<<endl;
    //pre-increment
    cout<<" ++c = "<<(++c)<<endl;
    cout<<" c = "<<c<<endl;

    //post-decrement
    cout<<" c-- = "<<(c--)<<endl;
    cout<<" c = "<<c<<endl;
    //pre-decrement
    cout<<" --c = "<<(--c)<<endl;
    cout<<" c = "<<c<<endl;
    */


    //for loop

    // printing till n integers
    
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    /*
    cout<<"Printing till n integers: "<<endl;
    for(int i=1; i<=n; i++){  //for( ; ; ){
        cout<<i<<" ";         //    if (i<=n){ 
    }                         //         cout<< i <<endl;
    cout<<endl;               //    }
                              //    else{
                              //         break;
                              //    }
                              //   i++;
                              // }
    */


    // inserting two condition in for loop
    /*
    for( int a=0, b=1; a<=n && b<=n; a++, b++){
        cout<<a<<" "<<b<<endl;
    }
    */

    // sum of n integers using for loop
    /*
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<"Sum of first "<<n<<" integers is: "<<sum<<endl;
    */

    // fibbonacci series using for loop
    /*
    cout<<"Fibbonacci series till "<<n<<" terms is: "<<endl;
    int a1=0,a2=1,a3;
    cout<< a1<<" "<<a2<<" ";
    for(int i =1; i<=n-2; i++){
        a3=a1+a2;
        cout<<a3<<" ";
        a1=a2;
        a2=a3;
    }
    */

    // checking the entered nmuber is prime or not
    /* 
    if (n<=1){
        cout<<n<<" is not prime number."<<endl;
    }
    else{
        int prime=1;
        for( int i =2; i<=n-1 ; i++){
            if (n%i==0){
            prime=0;
            break;
            }
        }
        if (prime==1){
            cout<<n<<" is prime number."<<endl;
        }
        else{
            cout<<n<<" is not prime number."<<endl;
        }
    }
    */
    
    // number of 1 bits
    uint32_t a = n;
    int count = 0;
        while( a!=0 ){
            if (a&1){
                count++;
            }
            a= a>>1;
        }
    cout<<"THE NUMBER OF 1 bits are in "<<n<<" is "<<count<<endl;
    
    

    return 0;
}