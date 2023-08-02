#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100];
   
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            cin >> a[i][j];
        }
    }
    int max1=0;
    for(int i=1;i<=4;i++){
        
        for(int j=1;j<=4;j++){
            int sum=0;
            sum=a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i-1][j-1]+a[i+1][j]+a[i+1][j-1]+a[i+1][j+1];
            max1=max(max1,sum);
        }
    
    }
    cout << max1;
    return 0;
}