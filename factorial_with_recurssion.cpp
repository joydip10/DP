#include<bits/stdc++.h>

using namespace std;
long long int arr[100001]={0};
long long int fact(long long int n)
{
    if(n==1) return 1;
    else if(arr[n]==0) arr[n]=fact(n-1)*n;
    return arr[n];
}

int main()
{
    cout<<fact(20)<<endl;
    return 0;
}
