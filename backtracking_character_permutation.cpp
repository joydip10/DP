#include<bits/stdc++.h>
#define f(i,j) for(int k=i;k<j;k++)
using namespace std;

char arr[3]={'a','b','c'};
int chk[3]={false};
char vec[3];
int n=3;

void backtrack(int pos)
{
    if(pos==n)
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
                chk[arr[k]]=true;
                vec[pos]=arr[k];
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
