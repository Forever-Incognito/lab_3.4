// Lab_03_4.cpp
// < ����������� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 18

#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double R;

    cout << "x = "; cin >> x;
    cout << "R = "; cin >> R;
    cout << "y = "; cin >> y;

    if (((y <= sqrt(R * R - pow((x - R), 2) + R) && y <= x) ||
        ((y <= sqrt(R * R - pow((x + R), 2) - R)) && y >= -x && y <= 0)))
        cout << "yes" << endl;
    else

        cout << "no" << endl;
    cin.get();
    return 0;
}