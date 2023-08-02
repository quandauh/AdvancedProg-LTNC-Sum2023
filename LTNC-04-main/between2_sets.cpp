int betweenTwo_sets(int n, int m,int* a,int* b)
{
    sort(a,a+n);
    sort(b,b+m);
    int maxA =a[0];
    int minB =b[0];
    int count2=0;
    for(int i=maxA;i<=minB;i++) {
        int count =0;
        for(int j=0;j<n;j++) {
            for(int k=0;k<m;k++) {
                if(i%a[j]==0&&b[k]%i==0){ count++;}
            }
        }
        if(count==n*m) {count2++;}
    }
    return count2;
}