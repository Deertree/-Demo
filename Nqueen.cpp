#include<iostream>
#include<math.h>
using namespace std;

int abs(int n){
    if(n>=0)
        return n;
    int n1=0-n;
    return n1;
}
int a[100];
int Check(int k){
    int i,j;
    for(i=0;i<k;i++)
    if(a[i]==a[k]||abs(i-k)==abs(a[i]-a[k])){
        return 1;
    }
    return 0;
}

void NQueen(int n){

    int i;
    for(i=0;i<n;i++)
        a[i]=0;
    int k=0;
    while(k>=0){
        a[k]++;
        while(a[k]<=n&&Check(k)==1)
            a[k]++;
        if(a[k]<=n&&k==n-1){
            for(i=0;i<n;i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
        if(a[k]<=n&&k<n-1){
            k++;
        }
        else
            a[k--]=0;
    }

}

int main(){
    int N;
    cin>>N;
    NQueen(N);
    return 0;
}
