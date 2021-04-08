
#include<bits/stdc++.h>
using namespace std;

#define MAX 100

bool res_arr[MAX];

void sieve()
{
    memset(res_arr,true,sizeof(res_arr));
    
    for (int i = 2; i*i <=MAX; i++)
    {
        if(res_arr[i]==true)
        {
            for(int j=i*2;j<=MAX;j=j+i)
            {
                res_arr[j]=false;
            }
        }
    }
    
}

int main()
{

    sieve();
    for(int i=2;i<MAX;i++)
    {
        if(res_arr[i]==true)
        cout<<i<<" ";
    }

    return 0;
}