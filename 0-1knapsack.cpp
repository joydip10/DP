#include<bits/stdc++.h>

using namespace std;

int knapsack(int W,int wt[],int v[],int n)
{
    if(n==0 || W==0) return 0;
    if(wt[n-1]>W) return knapsack(W,wt,v,n-1);
    else return max(v[n-1]+knapsack(W-wt[n-1],wt,v,n-1),knapsack(W,wt,v,n-1));
}
int knp(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}

int main()
{
   int wt[3]={4,3,2};
   int v[3]={10,12,8};
   cout<<knp(5,wt,v,3);
   return 0;
}
