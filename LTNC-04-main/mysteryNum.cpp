#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n],b[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for( long long int i=0;i<n+1;i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+n+1);
    for( long long int i=0;i<n+1;i++){
        if(a[i]!=b[i]) {
            cout<<b[i];
            break;
        }
    }
}