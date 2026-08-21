#include <iostream>
using namespace std;

//Function to print value through pointer
void print(int *p){
    cout<< *p <<endl;
}


//Function to update the pointer
void update(int **p){
    // p = p + 1;   ---> No Changes on updating p
    //*p = *p + 1;   ---> Value of t is changed
    **p = **p + 1;   ---> Value of y is changed
}


int main(){
    //Basic Pointer
    /*
    int num = 5;
    cout<<"The value stored in 'num' variable is: "<<num<<endl;


    //Address of Operator -->  &
    cout<<"The address of 'num' variable is: "<<&num<<endl;


    //Initialization of pointer
    int *ptr = &num;
    cout<<"The Value at address pointed by 'ptr': "<<*ptr<<endl;
    cout<<"The Value stored in 'ptr' variable is: "<<ptr<<endl;

    double d = 4.589;
    double *q = &d;
    cout<<"The Value at address pointed by 'q': "<<*q<<endl;
    cout<<"The Value stored in 'q' variable is: "<<q<<endl;


    //Size of pointer
    cout<<"The size of 'num' variable is:"<<sizeof(num)<<endl;
    cout<<"The size of pointer 'ptr' variable is:"<<sizeof(ptr)<<endl;
    cout<<"The size of 'd' variable is:"<<sizeof(d)<<endl;
    cout<<"The size of pointer 'q' variable is:"<<sizeof(q)<<endl;


    //Pointer to int is created and pointing to some garbage address
    int *a = nullptr;
    if (a) {
        cout << "The value stored in '*a' variable is: " << *a << endl;
    } else {
        cout << "'a' is null, not dereferencing." << endl;
    }

    //So we should always initialize it with 0 if required
    int *b = 0;
    if (b) {
        cout << "The updated value stored in '*b' variable is: " << *b << endl;
    } else {
        cout << "'b' is null, not dereferencing." << endl;
    }

    int *x = &num;
    cout<<"Before updating 'num' variable is:"<<num<<endl;
    (*x)++;
    cout<<"After updating 'num' variable by using pointer x is:"<<num<<endl;


    //Copying a pointer
    int n = 10;
    int *u = &n;
    int *v = u;
    cout<< u <<" - "<< v <<endl;
    cout<< *u <<" - "<< *v <<endl;
    */


    //Pointer in Array
    /*
    int arr[10] = {2,5,6,7};
    cout<<"The address of Array arr Is: "<<arr<< endl;
    cout<<"The address of Array arr Is: "<<&arr[0]<< endl;
    cout<<"The value of Array's First element arr[0] is: "<<*arr<<endl;
    cout<<"The value of Array's Second element arr[1] is: "<<*(arr+1)<<endl;

    cout<<"The value of Array's First element arr[0] and adding 1 to it then answer is: "<<*(arr) + 1 <<endl;

    int i = 3;
    cout<<i[arr]<<endl;
    */

    
    //Sizeof for array and pointer
    /* 
    int temp[10] = {1,2};
    cout<<"The Size of Array variable 'temp' is: "<<sizeof(temp)<<endl;
    cout<<"The Size of element of temp is: "<<sizeof(*temp)<<endl;
    cout<<"The Size of address of  is: "<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<"The Size of pointer ptr is: "<<sizeof(ptr)<<endl;
    */
    /*
    int array[10];
    //array = array + 1;        ---> Error
    int *ptr = &array[0];
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;
    */

    
    //Character Array
    /*
    char ch[6] = "abcde";
    cout<<ch<<endl;

    char *c = &ch[0];
    //print entire string
    cout<<c<< endl;

    char temp = 'z';
    char *cd = &temp;
    cout<<cd<<endl;

    char *b = "adxg";  // Bad Practice
    cout<< b <<endl;
    */


    //Pointer in Functions
    /*
    int value = 54;
    int *j = &value;
    print(j);
    */


    //Double Pointer
    int y = 5;
    int* t = &y;
    int** t2 = &t;
    /*
    cout<<"Printing t"<<t<<endl;
    cout<<"Address of pointer t is:"<<&t<<endl;
    cout<<"Address of pointer t is:"<<t2<<endl;
    cout<<"Printing value of t by using double pointer is:"<<*t2<<endl;

    cout<<"Printing value of variable y is:"<<y<<endl;
    cout<<"Printing value of variable y using pointer variable:"<<*t<<endl;
    cout<<"Printing value of variable y using Double Pointer:"<<**t2<<endl;
    */

    //Changes in pointer After updation
    cout<<"Before updation value of y: "<<y<<endl;
    cout<<"Before updation value of t: "<<t<<endl;
    cout<<"Before updation value of t2: "<<t2<<endl;
    update(t2);
    cout<<"After updation value of y: "<<y<<endl;
    cout<<"After updation value of t: "<<t<<endl;
    cout<<"After updation value of t2: "<<t2<<endl;

}