#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = (n * n);
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*
4
16 15 14 13
12 11 10 9
8 7 6 5
4 3 2 1
*/