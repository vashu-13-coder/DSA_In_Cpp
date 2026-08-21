#include <iostream>
#include <vector>
using namespace std;

//Sieve of Eratosthenes -> For counting prime numbers
int countPrimes(int n){
    int count = 0;
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for (int i = 2; i < n; i++){
        if (prime[i]){
            count++;
            for(int j = 2 * i ; j < n; j += i){
                prime[j] = false;
            }
        }
    }
    return count;
}


//Function to find gcd of two number
int gcd (int n , int m){
    if (n == 0){
        return m;
    }
    if (m == 0){
        return n;
    }

    while( n != m){
        if(n > m){
            n = n- m;
        }
        else{
            m = m - n;
        }
    }
    return n;
}


int main(){
    //Inputing for counting prime numbers by concept of Sieve of Eratosthenes
    /*
    int n;
    cout<<"Enter a number under which we have to count prime numbers: ";
    cin>>n;
    int ans = countPrimes(n);
    cout<<"Total number of prime values under "<<n<<" is: "<<ans<<endl;
    */

    
    //Inputing numbers to find gcd
    
    int a , b;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;

    int ans = gcd(a , b);
    cout<<"The gcd of two number "<<a<<" and "<<b<<" is: "<<ans<<endl;
    
}