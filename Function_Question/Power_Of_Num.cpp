#include<iostream>
#include<math.h>
using namespace std;

// === approach 1
// int power(int n1, int n2){
//     return pow(n1,n2);
// }

// === approach 2
int power(int n1, int n2){
    int ans = 1;
    for(int i = 1; i<=n2; i++){
        ans = ans * n1;
    }
    return ans;
}


int main(){
    int n1,n2;
    cout<<"Enter first Number: ";
    cin>>n1>>n2;
    int result = power(n1, n2);
    cout<< "Answer is " << result << endl;
}