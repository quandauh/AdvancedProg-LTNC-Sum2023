#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
    
            if(a[i][0]<0 ||a[i][1]<0){
                cout << "n and p should be positive." << endl;
            } else {
                cout << pow(a[i][0],a[i][1])<<endl;
            }
        }
        return 0;

}
