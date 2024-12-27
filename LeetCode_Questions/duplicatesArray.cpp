#include<iostream>
using namespace std;
int duplicateArray(int arr[], int n){
    int ans = 0;
   
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int array [5], i;
    cout<<"Enter Number: ";

      for (i = 0; i < 5; i++) {
        cin >> array[i];
    }
    int result = duplicateArray(array, 5);
    cout<< "Result" << result << endl;
    return 0;
}