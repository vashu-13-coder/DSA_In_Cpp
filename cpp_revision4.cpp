#include <iostream>
#include <math.h>
using namespace std;





int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    //Decimal to binary(FOR POSITIVE NUMBER)
    /*
    int binary=0;
    int place =1;
    while ( n!=0 ){
        int bit = n & 1;
        binary = binary + bit*place;
        n = n >> 1;
        place *=10;
    }
    cout<<binary<<endl;
    */


    //Decimal to binary(FOR NEGATIVE NUMBER)
    /*
    int a =abs(n),binary=0,i=0,place=1;
    while ( a!=0 ){
        int bit = a & 1;
        binary = binary + bit*place;
        a = a >> 1;
        i++;
        place *=10;
    }
    cout<<binary<<endl;
    */


    // Binary to Decimal
    /*
    int m;
    cout<<"Enter Binary Number:";
    cin>>m;
    int decimal_no = 0, multiple=1;
    while ( m != 0){
        int a = m & 1;
        m /= 10;
        decimal_no += (a*multiple);
        multiple = multiple * 2;
    }
    cout<<decimal_no<<endl;
    */


    // complement of number
    /*
    int complement_number = 0;
    if (n<=0){
        complement_number = 1;
    }
    int binary=0;
    int place =1;
    while ( n!=0 ){
        int bit = n & 1;
        binary = binary + bit*place;
        n = n >> 1;
        place *=10;
    }
    int complement = 0, place1 = 1;
    while ( binary != 0){
        int bit = binary % 10;
        if (bit == 0) {
            complement = complement + place1;
        }
        binary /= 10;
        place1 *= 10;
    }
    int place2 = 1;
    while (complement != 0){
        int bit= complement % 10;
        complement_number= complement_number + bit*place2;
        place2 *= 2;
        complement /= 10;
    }
    cout<<complement_number<<endl;

    */


    // Switch Case Questions

    //Calculator
    /*
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the operation that is to be performed: ";
    char op;
    cin>>op;
    switch (op){
        case '+':
        cout<<"The sum of given two number is : "<< a + b <<endl;
        break;
        case '-':
        cout<<"The difference of given two number is : "<< a - b <<endl;
        break;
        case '*':
        cout<<"The product of given two number is : "<< a * b <<endl;
        break;
        case '/':
        cout<<"The quotient of given two number is : "<< a / b <<endl;
        break;
        case '%':
        cout<<"The remainder of given two number is : "<< a % b <<endl;
        default:
            cout<<"Invalid Operation"<<endl;
    }
    */

    //Number of notes
    /*
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    int Rs100 , Rs50 , Rs20 , Rs1;

    switch(1){
        case 1: Rs100=amount/100;
        amount=amount%100;
        cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
        case 2: Rs50=amount/50;
        amount=amount%50;
        cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              
        case 3: Rs20=amount/20;
        amount=amount%20;
        cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               
        case 4: Rs1=amount/1;
        amount=amount%1;
        cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
    }
    */

    
}

  

