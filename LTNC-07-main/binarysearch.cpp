#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int A[100];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    cout << binary(A,n,x);
    return 0;
}


int binary(int A[],int n,int x){
    int left, right, mid; 
    left=0; right=n-1;
    do{
        mid=(left+right)/2;
        if(A[mid] == x){
            return mid; 
        }
        else if(A[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }while(left<=right);
    return -1;
}