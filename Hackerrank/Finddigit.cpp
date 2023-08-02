int findDigits(int n)
{
    int arr[100];
    int i=0;
    while(n>=10)
    {
        int a= n%10;
        arr[i]=a;
        i++;
        n=n/10;
    }
    arr[i]=n;
    int count =0;
    for(int j=0;j<i+1;j++)
    {
        if(n%arr[i]==0)
        {
            count ++;
        }
    }
    return count;
}
