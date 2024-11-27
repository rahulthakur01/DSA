#include<iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
        
    }
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
}
int main(){
    int array [6] = {2,5,-6,8,9,0};
    printArray(array, 6);
    reverseArray(array, 6);
    printArray(array, 6);

}