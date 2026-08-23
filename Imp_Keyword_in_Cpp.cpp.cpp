#include<iostream>
using namespace std;
#define ELE 1, \
            2, \
            3
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
#define PI 3.14

// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))

//Global Variables
int score = 5;    // But is a Bad Practice because everyone can access it and change it.

void aw(){
    cout<<score<<" in aw."<<endl;
}

//Inline Functions
inline int getMax(int &a , int &b){
    return (a > b) ? a : b;
}

int main(){
    //Macro
    
    int r = 5;
    double area = PI * r * r;
    cout<<"Area is: "<<area<<endl;
    
    //Chain Macro
    printf("Geeks for Geeks have %dK"
           " followers on Instagram",
           INSTAGRAM);
    cout<<endl;

    // Array arr[] with elements
    // defined in multi line macros
    int arr[] = { ELE };
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    cout<<endl;


    // Function-like Macro definition
    int aa = 18, bb = 76;

    printf("Minimum: %d", min(aa, bb));
    cout<<endl;
    
 
    //Global Variables
    
    aw();
    cout<<score<<" in main."<<endl;
    

    //Inline Functions call
    
    int a = 1 , b = 3;
    int ans = getMax(a , b);
    cout<<"Between "<<a << " and "<<b<<", "<<ans<<" is greater."<<endl;

    a += 9;
    b += 5;
    int ans1 = getMax(a , b);
    cout<<"Between "<<a << " and "<<b<<", "<<ans1<<" is greater."<<endl;
    
    
    return 0;
    
}