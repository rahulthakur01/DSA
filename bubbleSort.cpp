#include <iostream>
using namespace std;

int main()
{
    //  int arr[] = {15,16,6,8,5};
    //  int size = sizeof(arr)/sizeof(arr[0]);
    int arr[10];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Num: ";
        cin >> arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}