#include<iostream>
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

int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
   cin>>n;
   int arr[n];

   //inputing
   for(int i=0;i<n;i++)
      cin>>arr[i];
    

     reverse(arr,n);
     cout << endl;
 


   //printing
  
   }



}
