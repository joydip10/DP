#include<bits/stdc++.h>
#define f(i,j) for(int k=i;k<j;k++)
using namespace std;

char arr[4]={'a','b','b','c'};
int chk[4]={false};
char vec[4];
int n=4;
map<int,char>mp;
int find_rep(char arr[],int s)
{
    sort(arr,arr+s);
    //f(0,s) cout<<arr[k];
    int ct=0;
    f(0,s-1)
    {
        if(arr[k]==arr[k+1]) ct++;
    }
    return ct;
}
int fact(int n)
{
    if(n<=1) return 1;
    else return fact(n-1)*n;
}
void backtrack(int pos)
{
    static int c=0;
    if(pos==3)
    {
        f(0,n) cout<<vec[k];
        cout<<endl;
        c++;
        return;
    }
    else
    {
        f(0,n)
        {
            if(chk[arr[k]-'a']==false)
            {
                chk[arr[k]-'a']=true;
                vec[pos]=arr[k];
                backtrack(pos+1);
                chk[arr[k]-'a']=false;
            }
        }
    }
}

int main()
{
    backtrack(0);
}
