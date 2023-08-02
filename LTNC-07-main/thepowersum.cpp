#include<bits/stdc++.h>
using namespace std;

powerSum(int X, int N,int max)
{
	int count = 0;
    int ans = 0;
    if(X == 0) ans = 1;
    else{
        for(int i = max - 1; i >= 1; i--){
            ans += powerSum(X - pow(i, N), N, i);
            count ++;
        }
    }
    return count;
}

int main()
{
	int X;
	cin >> X;
	int N;
	cin >> N;
	cout << powerSum(X,N,X);
}
