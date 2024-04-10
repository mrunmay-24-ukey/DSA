#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter number of elements to be inserted in array:";
    cin >> n;
    int arr[n];
 
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int maximum = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maximum){
            maximum = arr[i];

        }


    }

    // print the index of maximum element in array
    for(int i = 0 ; i< n ; i++){
        if (maximum == arr[i]){
            cout << "\nThe index of maximum element is : " << i;
            
            }
        

    }




    return 0;
}