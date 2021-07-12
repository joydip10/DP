#include<bits/stdc++.h>
#define f(i,j) for(int k=i;k<j;k++)
using namespace std;

char arr[4]= {'a','b','b','c'};
int chk[4]= {false};
char vec[4];
int n=4;
map <int,char> mp;

int find_rep(char arr[],int s)
{
    sort(arr,arr+s);
    int ct=0;
    f(0,s-1)
    {
        if(arr[k]==arr[k+1]) ct++;
    }
    return ct;
}
void backtrack(int pos)
{
    if(pos==n-(find_rep(arr,sizeof(arr))))
    {
        f(0,n) cout<<vec[k];
        cout<<endl;
        return;
    }
    else
    {
        f(0,n)
        {
            if(chk[arr[k]]==false)
            {
                if(mp[pos]!=arr[k])
                {
                    chk[arr[k]]=true;
                    vec[pos]=arr[k];
                    mp[pos]=arr[k];
                }
                else
                {
                    continue;
                }
                backtrack(pos+1);
                chk[arr[k]]=false;
            }

        }
    }
}

int main()
{
    backtrack(0);
}
