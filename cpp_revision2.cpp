// Conditionals statements
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"Value of n is: "<<n<<endl;

    // TO CHECK INPUTED NUMBER IS POSITIVE OR NEGATIVE OR ZERO
    if (n>0){
        cout<<"THE INPUTED NUMBER IS POSITIVE"<<endl;
    }
    else if (n<0){
        cout<<"THE INPUTED NUMBER IS NEGATIVE"<<endl;
    }
    else{
        cout<<"THE INPUTED NUMBER IS ZERO"<<endl;
    }


    //TO ADD THE TWO NUMBER INPUTED BY THE USER
    int a,b;
    cin>>a>>b;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of b is: "<<b<<endl;
    cout<<"THE SUM OF TWO NUMBER IS : "<< a+b <<endl;

    // TO CHECK WHICH NUMBER IS GREATER WHEN TWO NUMBER IS INPUTED BY USER
    int a1,b1;
    cin>>a1>>b1;
    cout<<"Value of a1 is: "<<a1<<endl;
    cout<<"Value of b1 is: "<<b1<<endl;
    if (a1 > b1){
        cout<<"a1 IS GREATER"<<endl;
    }
    else if (a1 < b1){
        cout<<"b1 IS GREATER"<<endl;
    }
    else{
        cout<<"BOTH ARE EQUAL"<<endl;
    }

    // TO CHECK INPUTED CHARACTER IS UPPERCASE,LOWERCASE,NUMERIC OR SPECIAL CHARACTER
    char ch;
    cin>>ch;
    if ('a'<=ch && 'z'>=ch){
        cout<<"THE INPUTED CHARACTER IS IN LOWERCASE"<<endl;
    }
    else if ('A'<=ch && 'Z'>=ch){
        cout<<"THE INPUTED CHARACTER IS IN UPPERCASE"<<endl;
    }
    else if ('0'<=ch && '9'>=ch){
        cout<<"THE INPUTED CHARACTER IS NUMERIC"<<endl;
    }
    else{
        cout<<"THE INPUTED CHARACTER IS SPECIAL CHARACTER"<<endl;
    }

    // LOOPING 

    //WHILE LOOP 
    //TO PRINT ALL NUMBER UPTO NUMBER INPUTED BY THE USER
    int s;
    cin>>s;
    int i =1;
    while (i<=s){
        cout<<i<<endl;
        i+=1;
    }

    //TO PRINT SUM OF ALL NUMBER UPTO g INPUTED BY THE USER
    
    int g;
    cin>>g;
    int sum = 0;
    while (g!=0){
        sum= sum+g;
        g= g-1;
    }
    cout<<"THE SUM ALL NUMBER UPTO"<<g<<"is :"<<sum<<endl;
    

    //TO CHECK THE ENTERED NUMBER IS PRIME OR NOT
    
    cout<<"ENTER THE NUMBER THAT IS CHECKED ";
    int v;
    cin>> v;
    int m=2;
    int prime=0;
    while (m<v){
        if (v%m==0){
            prime=1;
        }
        m+=1;
    }
    if (prime==0){
        cout<<"THE ENTERED NUMBER "<<v<<" IS PRIME";
    }
    else{
        cout<<"THE ENTERED NUMBER "<<v<<" IS NOT PRIME";
    }
    
}