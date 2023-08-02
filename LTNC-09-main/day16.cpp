int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    int count = 0;
    for(int i=0;i<n;i++) {
        if(s[i]<=9&&s[i]>=0){
            count++;
        }
        
    }
    if(count==n-1) cout << s;
    else cout <<"Bad String";
    return 0;
}