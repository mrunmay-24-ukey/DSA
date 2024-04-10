#include <iostream>
using namespace std;

int main(){

    string str , newStr;
    char replaceChar;

    cout << "Enter a string" ;
    getline(cin,str);

    cout << "Enter the cahracter to replace spaces with:";
    cin >> replaceChar;

    for(char c : str){
        if(c ==' '){
            newStr +=replaceChar;
        }
        else{
            newStr+=c;
        }
    }

    cout << "The string with spaces replaced:" << newStr <<endl;

    return 0;
}