int equalizeArray(int n, int* a)
{
    int k=0;
    int b[100];
    for(int i=0;i<n;i++) {
        int count = -1;
        for(int j=0;j<n;j++) {
            if(a[i]==a[j]){
                count++;
            }
        }
        b[0]=count;
        k++;
    }
    int min = b[0];
    for(int i=0;i<k;i++) {
        if(b[i]<min) {min=b[i];}
    }
    return min-1;
}