#include<iostream>
#include<limits.h>
using namespace std;
int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i= 0; i<n; i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    return max;
}
int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i= 0; i<n; i++){
        if(min> num[i]){
            min  = num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cout<< "Enter size: ";
    cin>>size;
    int num[50];
    for(int i = 0; i<size; i++){
        cin>> num[i];
    }
    cout<< "Maximum value is -> " << getMax(num, size) << endl;
    cout<< "Minimum value is -> " << getMin(num, size) << endl;

}