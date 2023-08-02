int bitwiseAnd(int N,int K)
{
    int max=0;
    for(int i=0;i<N-1;i++) {
        for(int j=i+1;i<N;i++) {
            int sum=i&j;
            if(sum>max&&sum<K) max=sum;
        }
    }
    return max;
}