#include <bits/stdc++.h>
using namespace std;

int main()
{
    float percentage;
    cout << "enter your percentge without percentage sign";
    cin >> percentage;
    int scale;
    cout << "enter the scale 10 or 4 or whatever";
    cin >> scale;
    float gpa = (percentage / 100) * scale;
    cout << "your gpa is :" << gpa << endl;
}
