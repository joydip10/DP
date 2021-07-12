#include<bits/stdc++.h>

using namespace std;

int coin_change_dp(int s[],int m,int n)
{
    if(n==0) return 1;
    else if(n<0) return 0;
    else if(m<=0 && n>=1) return 0;
    else return coin_change_dp(s,m-1,n)+coin_change_dp(s,m,n-s[m-1]);
}


int coin(int s[],int m,int n)
{
    int x,y;
    int k[n+1][m];
    for(int i =0;i<m;i++)k[0][i]=1;

    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<m;j++)
        {
            x= (i-s[j] >= 0) ? k[i - s[j]][j] : 0;
            y= (j >= 1) ? k[i][j - 1] : 0;
            k[i][j] = x + y;
        }
    }

    return k[n][m-1];
}
int main()
{
    int i, j;
    int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    printf("%d ", coin(arr, m, 4));
    return 0;
}
