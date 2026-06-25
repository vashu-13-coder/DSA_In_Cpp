// PATTERN QUESTIONS
#include <iostream>
using namespace std;
int main(){

// 1)  1 2 3 4
//     1 2 3 4
//     1 2 3 4
//     1 2 3 4

/*    
    int n;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<<j<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
*/

// 2)  4 3 2 1
//     4 3 2 1
//     4 3 2 1
//     4 3 2 1

/*
    int n1;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n1;
    int i1=1;
    while (i1<=n){
        int j1=1;
        while (j1<=n){
            cout<<n1-j1+1<<" ";
            j1=j1+1;
        }
        i1=i1+1;
        cout<<endl;
    }

*/

    //  3) 1 2 3
    //     4 5 6
    //     7 8 9....
    

    /*
    int n2;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n2;
    int i2=1;
    int count =1;
    while (i2 <= n2){
        int j2 = 1;
        while (j2 <= n2){
            cout<<count<<" ";
            count += 1;
            j2 += 1;
        }
        i2 += 1;
        cout << endl;
    }
    */
    
    // 4)*
    //   * *
    //   * * *
    //    .....

    
    /*
    int n3;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n3;
    int i3 = 1;
    while (i3 <= n3){
        int j3 = 1;
        while (j3 <= i3){
            cout<<"* ";
            j3 +=1;
        }
        cout<<endl;
        i3 += 1;
    }
    */


    // 5)1
    //   2 2
    //   3 3 3
    //    .....

    /*
    int n4;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n4;
    int i4 = 1;
    while (i4 <= n4){
        int j4 = 1;
        while (j4 <= i4){
            cout<<i4<<" ";
            j4 +=1;
        }
        cout<<endl;
        i4 += 1;
    }
    */


    // 6)1
    //   2 1
    //   3 2 1
    //    .....

    /*
    int n5;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n5;
    int i5 = 1;
    while (i5 <= n5){
        int j5 = 1;
        int val = i5;
        while (j5 <= i5){
            cout<<val<<" ";   //OR i-j+1
            j5 +=1;
            val -=1;
        }
        cout<<endl;
        i5 += 1;
    }
    */


    // 7)  A A A
    //     B B B
    //     C C C
    //     ....


    /*
    int n7;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n7;
    int i7=1;
    char ch= 65;
    while (i7<=n7){
        int j7=1;
        while (j7<=n7){
            cout<<ch<<" ";
            j7=j7+1;    
        }
        i7=i7+1;
        ch +=1;
        cout<<endl;
    }
    */

    // 8)  A B C
    //     D E F
    //     G H I
    //     ....


    
    /*
    int n8;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n8;
    int i8=1;
    char ch1= 65;
    while (i8<=n8){
        int j8=1;
        while (j8<=n8){
            cout<<ch1<<" ";
            j8=j8+1;
            ch1 +=1;    
        }
        i8=i8+1;
        ch1 +=1;
        cout<<endl;
    }
    */


    // 9) A B C 
    //    B C D
    //    C D E
    //    ....

    /*
    int n9;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n9;
    int i9=1;
    while (i9<=n9){
        char ch2=65;
        ch2 = ch2+i9-1;
        int j9=1;
        while (j9<=n9){
            cout<< ch2<<" ";
            j9 +=1;
            ch2 +=1;
        }
        i9 = i9+1;
        cout<<endl;
    }
    */

    // 10)A
    //    B C 
    //    D E F
    //    ....

    /*
    int n10;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n10;
    int i10 = 1;
    char ch3 = 65;
    while (i10 <= n10){
        int j10 = 1;
        while (j10 <= i10){
            cout<<ch3<<" ";  
            j10 +=1;
            ch3 +=1;
        }
        cout<<endl;
        i10 += 1;
    }
    */


    // 11)A
    //    B C 
    //    C D E
    //    ....

    /*
    int n11;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n11;
    int i11 = 1;
    while (i11 <= n11){
        char ch4 = 65;
        ch4 = ch4+i11-1;
        int j11 = 1;
        while (j11 <= i11){
            cout<<ch4<<" ";  
            j11 +=1;
            ch4 +=1;
        }
        cout<<endl;
        i11 += 1;
    }
    */

    //12) D
    //    C D
    //    B C D
    //    A B C D

    /*int n12;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n12;
    int i12=1;
    while (i12 <= n12){
        char ch= 65;
        int  j12=1;
        ch = ch + n12 - i12;
        while (j12 <= i12){
            cout<<ch<<" ";
            j12 +=1;
            ch +=1;
        }
        cout<<endl;
        i12 +=1;
        
    }
    */
    

    //13)   *
    //     **
    //    ***
    //   ****

    /*
    int n13;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n13;
    int i13=1;
    while (i13 <= n13){
        int space = n13 - i13;
        while(space!=0){
            cout<<" ";
            space -=1;
        }
        int j13 =1;
        while (j13<=i13){
            cout<<"*";
            j13 +=1;
        }
        cout<< endl;
        i13 +=1;
    }
    */


    //14) 1111
    //     222
    //      33
    //       4

    /*
    int n14;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n14;
    int i14=1;
    while (i14 <= n14){
        int space1 = i14-1;
        while(space1!=0){
            cout<<" ";
            space1 -=1;
        }
        int j14 =1;
        int star = n14-i14+1;
        while (star !=0){
            cout<<i14;
            star -=1;
        }
        cout<< endl;
        i14 +=1;
    }
    */


    // 15)       1
    //         1 2 1
    //       1 2 3 2 1
    //         .......
    
    /*int n15;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n15;
    int i15=1;
    while (i15<=n15){
        int space2= n15-i15;
        while (space2!=0){
            cout<<"  ";
            space2 -=1;
        }
        int j15 =1;
        while (j15<=i15){
            cout<<j15<<" ";
            j15 +=1;
        }
        int j15_2 = i15-1;
        while (j15_2 >= 1){
            cout<<j15_2<<" ";
            j15_2 -=1;
        }
        cout<<endl;
        i15 +=1;4
    }
    */


    //16) 1 2 3 4 5 5 4 3 2 1
    //    1 2 3 4 * * 4 3 2 1
    //    1 2 3 * * * * 3 2 1
    //    1 2 * * * * * * 2 1
    //    1 * * * * * * * * 1
    //    .....


    int n16;
    cout<<"Enter the length till which u want pattern: ";
    cin>>n16;
    int i16 = n16;
    int i16_2=1;
    while ( i16<=n16 && i16>=0 && i16_2<=n16){
        int j16_1=1;
        while (j16_1<=i16){
            cout<<j16_1<<" ";
            j16_1 += 1;
        }
        int j16_2=i16_2-1;
        while (j16_2>=1){
            cout<<"* * ";
            j16_2 -=1;
        }
        
        int j16_3=i16;
        while(j16_3<=i16 && j16_3>0){
            cout<<j16_3<<" ";
            j16_3 -=1;
        }
        cout<<endl;
        i16 -=1;
        i16_2 +=1;
    }





    return 0;
}

