#include<bits/stdc++.h>

using namespace std;

int d_n(char* chr, int s)
{
    int cnt=0;
    for(int i=0; i<s-1; i++)
    {
        if(chr[i]==chr[i+1])
            cnt++;
    }
    return cnt;
}

char arr[6]= {'a','b','b','c','d','d'};
int s=6;
bool chk[6]= {false};
int start=6;
int mid=6;
char flag[200][4];
char vec[4];

void backtrack(int pos)
{

    if(pos==s-d_n(arr,s))
    {
        for(int i=0; i<s; i++)
            cout<<vec[i];
        cout<<endl;
        return;
    }
    else
    {
        for(int i =0; i<s; i++)
        {
            if(pos==0)
                start=arr[i]-'a';
            if(flag[start][pos]!=arr[i])
            {
                flag[start][pos]=arr[i];
                if(chk[arr[i]]==false)
                {
                    chk[arr[i]]=true;
                    vec[pos]=arr[i];
                    backtrack(pos+1);
                    chk[arr[i]]=false;
                }
            }
            else
                continue;
        }
    }
}

int main()
{
    backtrack(0);
}
