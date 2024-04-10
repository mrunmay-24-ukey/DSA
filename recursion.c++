// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printname(string name , int n ){
    if(n> 0){
        cout << name << " ";
        printname(name , n-1);
    }
}

int main() {
        
    string name;
    int n;
    cout << "enter name"  << endl;
    cin >> name;
    
    cout << "Enter n : " << endl;
    cin >> n;
    
    
    printname(name , n);
    
    

    return 0;
}