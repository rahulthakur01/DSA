#include<iostream>
using namespace std;
bool search(int num[], int size, int key){
    for(int i =0; i<size; i++){
        if(num[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num[10] = {1,2,3,4,-9,8,11,15,-3,5};
    int key;
    cout<< "Enter Number to be searched ";
    cin>>key;

    bool found = search(num, 10, key);

    if(found){
        cout<< "Number is present "<< endl;

    }else{
        cout<<"Number is not present "<< endl;
    }
}