#include<iostream>
using namespace std;

int main()
{
    int n;
    double d;
    string s;
    cin >> n >> d >> s;
    int tong1 = n+d;
    double tong2 =d+d;
    cout <<tong1 << setprecision(1) << fixed << tong2 << s;
    return 0;
}
