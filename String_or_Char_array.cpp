#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

// Function to calculate the length of a character array (C-style string)
int getLength(char name[]){
    int length = 0;
    for(int i = 0 ; name[i] != '\0' ; i++){
        length++;
    }
    return length;
}

// Function to reverse a character array (C-style string) in place
void reverseString(char name[], int size) {
    for(int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }
}

// Function to convert a character array (C-style string) to lowercase
void toLowerCase(char name[]) {
    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] >= 'A' && name[i] <= 'Z') {
            name[i] = name[i] + ('a' - 'A'); // Convert uppercase to lowercase
        }
    }
}

// Function to check string is palindrome or not
bool checkPalindrome(char name[]) {
    int size = getLength(name);
    toLowerCase(name); // Convert the string to lowercase for case-insensitive comparison
    for(int i = 0, j = size - 1; i < j; i++, j--) {
        if(name[i] != name[j]) {
            return false; // Not a palindrome
        }
    }
    return true; // Is a palindrome
}

// Maximum frequent Character
char MaximumFrequency(vector<char> &t){
    int maxCount = 0;
    char maxChar = '\0';
    for(int i = 0; i < t.size(); i++){
        int count = 1;
        for(int j = i + 1; j < t.size(); j++){
            if(t[i] == t[j]){
                count++;
            }
        }
        if(count >= maxCount){
            maxCount = count;
            maxChar = t[i];
        }
    }
    return maxChar;
}

//ReplaceSpaces
string replaceSpaces(string &str){
	// Write your code here.
	string result;
	for(int i = 0; i < str.length() ; i++){
		if (str[i] != ' '){
			result += str[i];
		}
		else{
			result += '@';
			result += '4';
			result += '0';
		}
	}
	return result;
}

//Remove All Adjacent Duplicates In String
string removeDuplicates(string s) {
    string ans;
    int n = s.length();
    int i = 0;
    while ( i < n){
        if (s[i] == s[i+1]){
            s.erase(i , 2);
            n = s.length();
            i = 0;
        }
        else{
            i++;
        }
    }
    return s;
}

int main(){
    // Initializing a character array (C-style string) to store the name
    /*
    char name[20];
    cout<<"Enter your name: "; 
    cin>>name;                      // cin stops reading input at the first whitespace character, so it will only capture the first word of the name.
    */


    
    // Displaying the entered name
    /*
    cout<<"Your name is: "<<name<<endl;
    */

   
    /*
    name[2] = '\0';  // Null-terminate the string at index 2
    cout<<"Modified name is: "<<name<<endl;
    */

    
    // Displaying length of the entered name
    /*
    cout<<"Length of your name is: "<<getLength(name)<<endl;
    */

    
    // Reversing the entered name
    /*
    reverseString(name, getLength(name));
    cout<<"Reversed name is: "<<name<<endl;
    */

    
    // Checking if the entered name is a palindrome
    /*
    cout<<"Enter the string to check palindrome: ";
    char str[20];
    cin>>str;


    cout<<"The entered string is: "<<str<<endl;
    toLowerCase(str); // Convert the string to lowercase for case-insensitive comparison
    cout<<"Lowercase version of the string is: "<<str<<endl;


    if(checkPalindrome(str)) {
        cout<<"The string is a palindrome."<<endl;
    }
    else {
        cout<<"The string is not a palindrome."<<endl;
    }
    */
    
    
    //Maximum Frequent Character input
    /*
    vector<char> t = {'t','e','s','t','s','a','m','p','l','e'};
    cout<<"Maximum Frequency Character is:"<<MaximumFrequency(t);
    */


    //Inputing a string using getline to capture the entire line including spaces
    /*
    string str1 , str2;
    cout<<"Enter a line: ";
    getline(cin , str1); // Read a line of input into str1
    cout<<"The entered line is: "<<str1<<endl;

    cout<<"Enter email: ";
    getline(cin,str2,'@'); // Read a line until a delimeter is found
    cout<<"The entered email is: "<<str2<<"@gmail.com"<<endl;
    */


    //In-Built Function in Character Array
    /*
    char ch[10] , ch2[10] , ch3[10] = {};
    int n = 1 , i = 0;
    while(n != 0){
        cout<<"Enter Character in ch Array:";
        cin>>ch[i];
        cout<<"Enter Character in ch2 Array:";
        cin>>ch2[i];
        i++;
        cout<<"Do you want to enter more element(If yes enter 1 else enter 0)";
        cin>>n;
    }
    ch[i] = '\0'; // Null-terminate the ch array
    ch2[i] = '\0'; // Null-terminate the ch2 array

    int len = strlen(ch);
    cout<<"The length of Character Array is:"<<len<<endl;

    cout<<"Compare character array ch and ch2:"<<strcmp(ch , ch2)<<endl; 

    strcpy(ch3 , ch);
    cout<<"Elements of ch3 after copied from ch:";
    for( char x : ch3){
        cout<<x<<" ";
    }

    */

    
    //Replace Spaces in a String
    /*
    string str;
    cout<<"Enter a string with spaces: ";
    getline(cin, str); // Read a line of input into str
    cout<<"The string after ' ' replaced by '@40':"<<replaceSpaces(str)<<endl;
    */

    // Learning Functions of String
    /*
    string word , line1;
    cout<<"Enter the word: ";
    cin>>word;
    cin.ignore();      // Discard the left over newline
    cout<<"Enter the line: ";
    getline(cin , line1);
    cout<<"The word entered is: "<<word<<" and the length of entered word is: "<<word.length()<<endl;
    cout<<"The line entered is: "<<line1<<" and the length of entered line is: "<<line1.length()<<endl;

    // Find Function
    cout<<"The index at which the word '"<<word<<"' is present in the entered line: "<<line1.find(word)<<endl;

    //Erase function
    line1.erase(line1.find(word), word.length());
    cout<<"The entered line after erasing the word '"<<word<<"' is: "<<line1<<endl;

    */


    //Remove All Adjacent Duplicates In String
    string str , ans ;
    str = "abbaca";
    ans = removeDuplicates(str);
    cout<< ans;
    
    



}