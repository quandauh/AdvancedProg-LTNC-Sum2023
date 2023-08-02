int pageCount(int n,int p) {
    double x=n/p;
    int soLat;
    if(n<=x) {
        soLat= (p-1)/2;
    }
    else {
        soLat=(n-p)/2;
    }
    return soLat;
}