#include <iostream>
//�� �� ������ ��������, ����� ������� �����, ������ �� �� ������ 0, � �� ������� ���-�������� �� ���������� �����.
using namespace std;

int main()
{
    int n, maxNumber;

    cin >> n;
    maxNumber = n;

    while(n != 0)
    {
        cin >> n;
        if ( n > maxNumber )
          maxNumber = n;

    }
    cout << "max = " << maxNumber << endl;

    return 0;
}
