#include <iostream>
using namespace std;


int main(){
    
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    
    string str = num>=2000 ? "YES": "NO";
    cout << str;

    return 0;
}