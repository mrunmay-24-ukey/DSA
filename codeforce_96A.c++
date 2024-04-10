#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    bool dang = 0;
    

    for(int i = 0; i< s.length ; i++){
        if(s[i] == s[i+1]) count++;
        else count = 1;
        if(count >= 7) dang = 1;

    }
}