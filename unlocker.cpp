#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
vector<int> rotateleft(vector<int> a, int d) {
  int n=a.size();
d=d%n;;
vector<int> res;
for(int i=d;i<n;i++)
{
  res.push_back(a[i]);
  if((int)res.size()==n)
  return res;
  if(i==(int)a.size()-1)
  i=-1;
}
return res;
}
vector<int> rotateright(vector<int> &A,int k)
{
  int n=(int)A.size();
  k%=n;
  int aux[k];
  for (int i = 0; i < k; i++)
    aux[i] = A[n-k+i];
  for (int i = n-k-1; i >= 0; i--)
    A[i+k] = A[i];
  for (int i = 0; i < k; i++)
    A[i] = aux[i];
  return A;
}
int main(){
  int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0;i<n;++i){
    for(int j=0;j<m;++j)cin>>a[i][j];
   }
 
   for(int i=0;i<n/2;++i){
    vector<int> arr;
    int j=i;
    int ind=0;
    while(j<m-i){
      arr.push_back(a[i][j]);
      j++;
    }
    j=i+1;
    while(j<n-i){
      arr.push_back(a[j][m-1-i]);
      j++;
    }
    j=m-i-2;
    while(j>=i){
      arr.push_back(a[n-1-i][j]);
      j--;
    }
    j=n-2-i;
    while(j>i){
      arr.push_back(a[j][i]);
      j--;
    }
    int xx; cin>>xx;
    vector<int> res;
    if(i%2==0){
      res=rotateleft(arr,xx);
    }
    else res=rotateright(arr,xx);
    j=i;
    ind=0;
    while(j<m-i){
      a[i][j]=res[ind++];
      j++;
    }
    j=i+1;
    while(j<n-i){
      a[j][m-1-i]=res[ind++];
      j++;
    }
    j=m-i-2;
    while(j>=i){
      a[n-1-i][j]=res[ind++];
      j--;
    }
    j=n-2-i;
    while(j>i){
      a[j][i]=res[ind++];
      j--;
    }
   }
   for(int i=0;i<n;++i){
    for(int j=0;j<m;++j)cout<<a[i][j]<<" ";
    cout<<endl;
   }
}