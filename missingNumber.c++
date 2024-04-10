#include <bits/stdc++.h>
using namespace std;

int main(){

    int n  , sum = 0;
    cin >> n;
    int arr[n];

    // input in array
    for(int i = 0;  i < n ; i++){
        int temp = 0;
        cin >> temp;
        sum =+ temp;
        
    }
    int missingNumber = n*(n+1) / 2;
    cout << missingNumber - sum ;

    return 0;
}