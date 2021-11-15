
#include<bits/stdc++.h>
using namespace std;

    

  void swap(vector<int> & v1,int low,int high)
  {

        int temp;
        temp= v1[low];
        v1[low]=v1[high];
        v1[high]=temp;
    }

void reverse(vector<int>& v1,int low,int high)
{
    
         while(low<high)
         {
            swap(v1,low,high);
            low++;
            high--;
         }
}


    void saurav(vector<int> &v1,int k)
    {
       int size= v1.size();
       k=k%size;
       reverse(v1,0,size-k-1);
       reverse(v1,size-k,size-1);
       reverse(v1,0,size-1);

        for(int i=0;i<v1.size();i++)
    {
        
        cout<<v1[i];
    }
        
    }



int main()
{
    vector<int> v;
    int n,k;
    cin>>n;
    cin>>k;
     int elements;
    for(int i=0;i<n;i++)
    {
        cin>>elements;
        v.push_back(elements);
    }

     saurav(v,k);
    

}