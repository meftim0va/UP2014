#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int x, n;

    cin >> n >> x;

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    bool b = false;

    for(int i = n-1; i >= 1 && !b; --i)
    {
        if(arr[i] == arr[i-1])
            b = true;
    }

    cout << boolalpha << b << endl;

    return 0;
}
