#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
             cout<< n -j +1 << " ";
            // // cout << n - i + 1 << " ";

            j++;
        }
        cout << endl;
        i++;
    }
}
/*
// // cout << n - i + 1 << " ";
4 4 4 4 
3 3 3 3 
2 2 2 2 
1 1 1 1
*/

/*
cout<< n -j +1 << " ";
5
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
5 4 3 2 1 
*/