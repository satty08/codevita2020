#include <bits/stdc++.h>
using namespace std;

int getint(int a)
{
     for(int i=2;i*i<=a;i++)
     {
         if(a%i==0)return a/i;
     }
     return 1;
}



void sol()
{
     int a,b;
     cin>>a>>b;
     if(a<b)swap(a,b);
     if(a==b){cout<<0;return;}
     map<int,int> m;

     int c=0;
     while(a!=1)
     {
         c++;
         a=getint(a);
         m[a]=c;
     }

     c=0;
     while(!m.count(b))
     {
         c++;
         b=getint(b);
     }
     cout<<c+m[b];
}





int32_t main()
{
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     sol();
     return 0;
}