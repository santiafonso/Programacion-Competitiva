#include<bits/stdc++.h>
#define fore(i,a,b) for(long long i=a;i<b;i++)
using namespace std;
 bool cont2(vector <long long>a, vector <long long>b)
 {
    return a[1]>b[1];
 }
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   long long n,w,p,v,aux=0,a,b,c,e;
    vector <vector<long long>> dp;
    vector<long long> itemsp,itemsv;
    cin >>n>>w;
    dp.push_back({0,0});
    fore(i,0,n)
    {
        cin >>a>>b;
         c=0;
         e=1;
         while(dp[c][0]!=dp[dp.size()-1][0])
         {
          if(dp[c][0]<=dp[e][0])
          {
          dp.erase(dp.begin()+e);
          }
          else
          {
          c++;
          e++;
          }
         }
        aux=dp.size()-1;
        while(aux>=0)
        {
        auto enc=false;
        int pos=0;
            p=a+dp[aux][0];
            v=b+dp[aux][1];
            if(p<=w)
            {
            fore(i,0,dp.size())
            {if(dp[i][0]==p)
            {enc =true;
            pos=i;
            break;
            }
            }
            if(enc)
            {
            if(dp[pos][1]<v)
            {
           dp.erase(dp.begin()+pos);
            dp.push_back({p,v});
            }
            }
            else
            {
            dp.push_back({p,v});
            }
            }
            aux--;
        }
       sort(dp.begin(),dp.end(),cont2); 
    }
    /*
    for(int i=0;i<dp.size();i++)
    {
        cout <<dp[i][0]<<","<<dp[i][1]<<"   ";
    }
    */
    cout<<dp[0][1];
}