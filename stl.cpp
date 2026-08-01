#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(){

    //ALL ABOUT ARRAY
    /*
    //Initialization of basic array
    int basic[4] = {3, 23, 43, 13};
    // STL Array  : It is static
    //Synatx: array<type,size> variable = {value};
    array<int,4> a = {1,2,3 ,4};
    //Way of directly accessing it 
    int size = a.size();
    for (int i = 0 ; i < size ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //Another way of accessing an array
    cout<<"Element at index 2 of given array: "<<a.at(2)<<endl;

    //Checking giver array is Empty or not
    cout<<"Empty or not "<<a.empty()<<endl;

    //Accessing First and Last element of array
    cout<<"First element: "<<a.front()<<endl;
    cout<<"ZLast element: "<<a.back()<<endl;
    */

    
    //ALL ABOUT VECTOR
    /*
    // Initialization of the vector
    //1st way
    vector<int> a(5,1);
    //Accessing element of vector
    cout<<"Printing Vector a:";
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // Copying Vector
    vector<int> last(a);
    cout<<"Copy of Vector a in new variable last:";
    for(int i:last){
        cout<<i<<" ";
    }

    
    //2nd way
    //Accessing element of vector
    vector<int> v ;
    cout<<endl<<"Printing Vector v:";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Checking the size of vector
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    //Adding elements to vector
    v.push_back(1);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;   

    v.push_back(3);
    cout<<"Capacity of vector: "<<v.capacity()<<endl;
    cout<<"Size of vector: "<<v.size()<<endl;
    
    //In vector the size of vector is doubled when it reaches its capacity

    //Another way of accessing an element of an array
    cout<<"Element present at index 2 in vector: "<<v.at(2)<<endl;

    //Way  of accessing first and last element of vector
    cout<<"The First element of vector is: "<<v.front()<<endl;
    cout<<"The last element of vector is: "<<v.back()<<endl;
    
    //Pop function in vector
    cout<<"Before Pop the vector is: ";
    for (int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After Pop the vector is: ";
    for (int i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Clear function in vector
    cout<<"Capacity of vector before using clear function: "<<v.capacity()<<endl;
    cout<<"Size of vector before clear function: "<<v.size()<<endl;
    v.clear();
    cout<<"Capacity of vector after using clear function: "<<v.capacity()<<endl;
    cout<<"Size of vector after clear function: "<<v.size()<<endl;
    */


    //ALL ABOUT DEQUE
    /*
    // DEQUE is Dynamic
    // Initialization of Deque
    deque<int> d;

    //Adding elements to Deque at last
    d.push_back(1);
    //Adding elements to Deque at front
    d.push_front(4);
    d.push_back(3);
    d.push_back(2);
    d.push_back(5);

    //Accessing element of Deque
    cout<<"Printing the Deque d: ";
    for( int i : d){
        cout<<i<<" ";
    }
    cout<<endl;

    //Pop function in Deque
    cout<<"Before Pop_Back the Deque is: ";
    for (int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    cout<<"After Pop_Back the Deque is: ";
    for (int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    cout<<"After Pop_Front the Deque is: ";
    for (int i : d){
        cout<<i<<" ";
    }
    cout<<endl;

    //Another way of accessing an element of Deque
    cout<<"Element present at index 2 in Deque: "<<d.at(2)<<endl;

    //Way  of accessing first and last element of Deque
    cout<<"The First element of deque is: "<<d.front()<<endl;
    cout<<"The last element of deque is: "<<d.back()<<endl;

    //Checking given deque is Empty or not
    cout<<"Empty or not "<<d.empty()<<endl;

    //Erasing elements in a deque
    cout<<"Before Erasing the size of deque is: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erasing the size of deque is: "<<d.size()<<endl;
    cout<<"After Erasing elements in a deque, the Deque is: ";
    for (int i : d){
        cout<<i<<" ";
    }
    cout<<endl;
    */

    
    //ALL ABOUT LIST
    /*

    // Initialization of the list
    //1st way
    list<int> l;

    //Adding elements to Deque at last
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    //Adding elements to Deque at front
    l.push_front(0);

    //2nd way
    list<int> l2(4,100);
    cout<<"Printing the List l2: ";
    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<endl;

    //Accessing element of list
    cout<<"Printing the List l: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    // Size of list
    cout<<"Size of list is: "<<l.size()<<endl;

    //Erasing elements in a list
    cout<<"Before Erasing the size of list is: "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"After Erasing the size of list is: "<<l.size()<<endl;
    for (int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    //Copying list
    list<int> n(l);
    cout<<"Printing the Copied List n: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    */


    //ALL ABOUT STACK
    /*
    //Stack work on LIFO (last in first out) principle
    //Initialization of stack
    stack<string> s;
    s.push("Vashu");
    s.push("Gupta");
    s.push("is");
    s.push("a");
    s.push("good");
    s.push("boy");

    //Accessing the top element of stack
    cout<<"Top element of stack is: "<<s.top()<<endl;

    //Removing the top element of stack
    s.pop();
    cout<<"Top element of stack after pop is: "<<s.top()<<endl;

    //Checking the size of stack
    cout<<"Size of stack is: "<<s.size()<<endl;

    //Checking the stack is empty or not
    cout<<"Is stack empty or not: "<<s.empty()<<endl;
    */


    //ALL ABOUT QUEUE
    /*
    //Queue work on FIFO (first in first out) principle
    
    //Initialization of queue
    queue<string> q;
    q.push("Vashu");
    q.push("Gupta");
    q.push("is");
    q.push("a");
    q.push("good");
    q.push("boy");

    //Accessing the front and back element of queue
    cout<<"Front element of queue is: "<<q.front()<<endl;
    cout<<"Back element of queue is: "<<q.back()<<endl;

    cout<<"Size of queue before pop is: "<<q.size()<<endl;

    //Removing the front element of queue
    q.pop();
    cout<<"Front element of queue after pop is: "<<q.front()<<endl;

    //Size of Queue
    cout<<"Size of queue after pop is: "<<q.size()<<endl;
    */


    // ALL ABOUT PRIORITY QUEUE
    /*
    //Inirialization of priority queue
    // Max Heap
    priority_queue<int> maxheap;

    // Min Heap
    priority_queue<int,vector<int>,greater<int>> minheap;

    maxheap.push(1);
    maxheap.push(3);
    maxheap.push(2);
    maxheap.push(0);

    //Checking the size of priority queue
    cout<<"Size of priority queue: "<<maxheap.size()<<endl;
    
    //Accessing the element of priority_queue
    cout<<"The elements of priority queue (Max Heap) is: ";
    int n = maxheap.size();
    for (int i = 0; i < n; i++ ){
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    cout<<endl;


    minheap.push(5);
    minheap.push(1);
    minheap.push(0);
    minheap.push(4);
    minheap.push(3);
    
    cout<<"The elements of priority queue (Min Heap) is: ";
    int m = minheap.size();
    for( int i = 0 ; i < m ; i++){
        cout<<minheap.top()<<" ";
        minheap.pop();
    }
    cout<<endl;

    //Checking the priority queue is empty or not
    cout<<"Is priority queue (Max Heap) empty or not: "<<maxheap.empty()<<endl;
    cout<<"Is priority queue (Min Heap) empty or not: "<<minheap.empty()<<endl;
    */


    //ALL ABOUT SET
    /*
    //All elements of set are unique and no modification of element also only adding and deleting of an element can be done.
    // The element will always come in sorted order.

    //Initialization of set
    set<int> st;

    //Adding elements to set
    st.insert(1);
    st.insert(1);  // This will not add a new element as sets only store unique elements
    st.insert(2);
    st.insert(2);  // This will not add a new element as sets only store unique elements
    st.insert(2);  // This will not add a new element as sets only store unique elements
    st.insert(8);
    st.insert(5);
    st.insert(3);

    //Accessing the elements of set
    cout<<"The elements of set are: ";
    for (int i : st){
        cout<<i<<" ";
    }
    cout<<endl;

    //Erasing an element from set
    st.erase(st.begin()); // This will erase the first element (smallest element) from the set
    cout<<"The elements of set after erasing the first element are: ";
    for (int i : st){
        cout<<i<<" ";
    }
   
    st.erase(5); // This will erase the element '5' from the set
    cout<<endl<<"The elements of set after erasing the element '5' are: ";
    for (int i : st){
        cout<<i<<" ";
    }

    set<int>::iterator it = st.begin();
    it++;

    st.erase(it);
    cout<<endl<<"The elements of set after erasing the second element are: ";
    for (int i : st){
        cout<<i<<" ";
    }

    //Counting the number of elements in set
    cout<<endl<<"The number of elements in set are: "<<st.size()<<endl;
    cout<<"2 is present in set or not: "<<st.count(2)<<endl;
    cout<<"-2 is present in set or not: "<<st.count(-2)<<endl;

    //Finding an element in set
    set<int>::iterator itr = st.find(2);
    cout<<"Value present at itr -> "<<*itr<<endl;

    for(auto it = itr; it != st.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    */


    //ALL ABOUT MAP
    /*
    // Map is a collection of key-value pairs where each key is unique and maps to a specific value. The elements in a map are always sorted by the keys.
    // Initialization of map
    map<int,string> mp;

    //1st way of adding elements to map
    mp[1] = "Vashu";
    mp[13] = "is";
    mp[2] = "Gupta";

    //2nd way of adding elements to map
    mp.insert({15,"a"});
    mp.insert({50,"boy"});
    mp.insert({30,"good"});

    // Accessing the elements of map
    cout<<"The elements of map are: "<<endl;
    for(auto i : mp){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    //Finding an element in map
    cout<<"Finding an element '13' in map: "<<mp.count(13)<<endl; // Returns 1 if found, 0 otherwise
    cout<<"Finding an element '-13' in map: "<<mp.count(-13)<<endl;

    // Erasing an element from map
    cout<<"Before erasing: "<<endl;
    for(auto i : mp){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    mp.erase(13);
    cout<<"After erasing element '13': "<<endl;
    for(auto i : mp){
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    //Finding an element in map using find() function
    auto it = mp.find(2);
    for(auto i = it; i != mp.end(); i++){
        cout<<i->first<<endl;
    }
    */


    //Stl Algorithms
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(7);

    cout<<"Checking if 6 is present: "<<binary_search(vec.begin(),vec.end(),6)<<endl; // Returns 1 if found, 0 otherwise
    cout<<"Checking if 3 is present: "<<binary_search(vec.begin(),vec.end(),3)<<endl;

    cout<<"Lower bound of 6 is at index: "<<lower_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl; // Returns the index of the first element that is not less than 6

    cout<<"Upper bound of 6 is at index: "<<upper_bound(vec.begin(),vec.end(),6)-vec.begin()<<endl; // Returns the index of the first element that is greater than 6

    cout<<"Rotating the vector by 1 position: ";
    rotate(vec.begin(),vec.begin()+1,vec.end());
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Sorting the vector: ";   // Based on intro sort algorithm which is a combination of quicksort, heapsort and insertion sort.
    sort(vec.begin(),vec.end());    // This is working behind the scenes and we don't have to worry about it.
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    int a = 5 , b = 7;
    cout<<"Max of 5 and 7 is: "<<max(a,b)<<endl;

    cout<<"Min of 5 and 7 is: "<<min(a,b)<<endl;

    cout<<"Before Swapping : a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping : a = "<<a<<" b = "<<b<<endl;

    string str = "Vashu";
    cout<<"Original string is: "<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<"Reversed string is: "<<str<<endl;

}