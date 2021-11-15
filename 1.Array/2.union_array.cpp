#include<iostream>
using namespace std;

void unionfun(int a[],int b[],int n,int m)
{ 

  int count=0;

  for(int i=0;i<n;i++)
  count++;

 
for(int j=0;j<m;j++)
   {
      for(int i=0;i<n;i++)
      {
        if(b[j]==a[i])
          break;
      }
      count++;


    }
     cout<<count;
    
   }
   
   

  

int main()
{
  int n,m;
  cin>>n>>m;

   int a[n],b[m];

   for(int i=0;i<n;i++)
    cin>>a[i];
   for(int i=0;i<m;i++)
    cin>>b[i];

    unionfun(a,b,n,m);


}