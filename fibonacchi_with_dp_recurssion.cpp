#include<bits/stdc++.h>

using namespace std;
int arr[1000]={0};
int fibo(int n)
{
    if(n==1) arr[1]=1;
    else if(n==0) arr[0]=0;
    else if(arr[n]==0) arr[n]=fibo(n-1)+fibo(n-2);
    return arr[n];
}

int main()
{
    cout<<fibo(9)<<endl;
}
