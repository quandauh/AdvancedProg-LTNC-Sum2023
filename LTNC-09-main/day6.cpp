#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
     
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        int N=s.length();
       string evenC;
       string oddC;
        
        for(int j=0;j<N;j++) {
            if(j%2==0)
            {evenC+=s[j];}
        
        
            if(j%2!=0)
          {oddC+= s[j];}
        
    }
    cout << evenC << " " << oddC<< endl;
    }
    
    return 0;
}
