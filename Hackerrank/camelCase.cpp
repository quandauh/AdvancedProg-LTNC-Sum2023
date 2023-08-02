int camelcase(string s)
{
    int count = 1;
    int n= s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            count ++;
        }
    }
    return count;
}