#include <iostream>
#include <cmath> // ������������, �� ����� �� �������, �� �� ���������� ��������� abs()

using namespace std;

int main()
{
    int a, b;

    // ��������� ������������
    cin >> a >> b;

    int minNumber = (a + b - abs(a - b) ) / 2;

    int maxNumber = (a + b + abs(a - b) ) / 2;
    //�� �� �������� ���� ������� ������ ��������� ������.

    // ��������� ���������
    cout << "the bigger is " << maxNumber << endl;
    cout << "the smaller is " << minNumber << endl;

    return 0;
}
