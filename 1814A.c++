#include <bits/stdc++.h>

using namespace std;

void solve(int n, int k) {
  
  if (n % 2 == 0) {
        cout<<"YES"<<endl;
        return;
      }
      

   if((n+k)%2 == 0){
    cout<< "YES"<<endl;
  } 
  else {
    cout<< "NO"<<endl;   
  }
}

int main() {
  int t;
  cin >> t;  

  while (t--) {
    long long n, k;
    cin >> n >> k;  

    solve(n, k);
    
  }

  return 0;
}
