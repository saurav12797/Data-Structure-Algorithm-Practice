#include <iostream>
using namespace std;

void reverse(int arr[],int n)
  {
    int temp=0;
    int last=n-1;
        for(int i=0;i<n/2;i++)
        {
          temp=arr[i];
          arr[i]=arr[last-i];
          arr[last-i]=temp;

        }
        
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

     
        
  }

 /* 
    Recursive Solution1
 void reverse(int arr[],int n)
  {
     
     int  end=n-1;
     if(n==0)
      return ;
    cout<<arr[end]<<" ";
    reverse(arr,n-1);

  }*/

int main()
{
  int n,t;
  cin>>t;

  while(t--)
  {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    reverse(arr,n);
    
  }
}