#include <iostream>
#include <string>
using namespace std;

// reversing a  string
string reverseString(string str){
    string reversed = "";
    for(int i = str.length()-1 ; i>= 0 ; i--){
        reversed += str[i];
    }
    return reversed;
}


//check palindrome
bool checkPalindrome(string str){
    int left = 0 ,right = str.length() - 1;
    
    while(left < right){
        if(str[left++] != str[right--]){
        
        return false;
        }
    }

    return true;
}
 //lowercase to uppercase
string uppercase(string str){
    for(int i = 0; i< str.length() ; i++){
        str[i] = toupper(str[i]);
    }
    return str;
}

string lowercase(string str){
    for(int i = 0; i< str.length() ; i++){
        str[i] = tolower(str[i]);
    }
    return str;
}


bool validPalindrome(string str){
    int left = 0, right = str.length() - 1;
    while(left < right){
        while(left < right && !isalnum(str[left])){
            left++;
        }
        while(left < right && !isalnum(str[right])){
            right--;
        }
        if(tolower(str[left++]) != tolower(str[right--])){
            return false;
        }
    }
    return true;
}

// reverse a string
string reverString(string str){
    string reverseWord;
    int start = str.length() - 1;
    
    for(int i = str.length() - 1 ; i >= 0 ; i--){
        
        if(str[i] == ' ' || i ==0 ){

            reverseWord += str.substr(i + 1 , start -i );

            if(i != 0){
                reverseWord += ' ';


            }
            start=i;
        }
    }
    return reverseWord;
}


// remove all occurances 
string removeOccurances(string str , string subStr ){
    int pos = str.find(subStr);
    while(pos != string::npos){
        str.erase(pos,subStr.length());
        pos = str.find(subStr);
    }

    return str;

}

// permutation in string
void permute(string str , int l , int r){
        if(l == r){
            cout << str << endl;
        }
        else {
            for(int i=l; i<= r ; i++){
                swap(str[l] , str[i]);
                permute(str , l+1 , r);
            }
    }
}

int main(){

    /* .size() for getting the length of string */
    string str = "nayan";
    int length = str.size();
    cout << length <<endl;

    string reversedString = reverseString(str);
    cout << reversedString <<endl;

    if(checkPalindrome(str)){
        cout << "palindrome" ; 
    }
    else{
        cout << "not a palindrome";
    }
    cout<< endl;

    cout << uppercase(str) <<endl;
    string str1 = "MAYUR";
    cout << lowercase(str1);

    string str2 = "I am a man";
    if(validPalindrome(str2)){
        cout << "The string is palidrome";
    }
    else{
        cout << "The string is not palindrome";
    }

    cout << endl;
    cout << "Reversed String is : " ;
    cout << reverString(str2);

    cout << endl;
    /* string str3 = "This is a test string";
    string subStr = "test";
    string newStr = removeOccurances(str , subStr);
    cout << newStr;
    cout << subStr; */

    cout << endl;

    string str4 = "RAM";
    cout << "Permutations of string " << str << "is:" <<endl;
    permute(str4 , 0 , str4.length() - 1);

    return 0;
}