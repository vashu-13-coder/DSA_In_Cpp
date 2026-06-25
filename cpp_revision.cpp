#include <iostream>
using namespace std;
int main(){
    cout<<"Hello World ;-)" <<endl;
    int a = 1;
    float b = 1.1234;
    double c = 1.765335;
    char s = 'a';
    cout<<"The value of a: "<<a<<"\nSize of variable a:"<<sizeof(a);
    cout<<"\nThe value of b: "<<b<<"\nSize of variable b:"<<sizeof(b);
    cout<<"\nThe value of c: "<<c<<"\nSize of variable c:"<<sizeof(c);
    cout<<"\nThe value of s: "<<s<<"\nSize of variable s:"<<sizeof(s);

    // TYPE CASTING
    int a1 = 'a';   //WILL TAKE ASCII VALUE
    cout<<'\n'<< a1;
    
    char ch =98;  // convert ASCII value into alphabet
    cout<<'\n'<<ch;

    // HOW TO STORE NEGATIVE NUMBER

    /*
    step1)First ignore the negative sign of the number
    step2) Convert the number into binary form
    step 3)Take the two's complement of the number
    step4)Now print the Two's complement
    */
   
}