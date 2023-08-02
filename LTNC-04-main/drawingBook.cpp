void update(int *a,int *b) {
        (*a)=a+b;
        (*b)=sqrt((a-b)*(a-b));
}
