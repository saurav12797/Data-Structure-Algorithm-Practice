#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        for(int i=0;i<n;i++)
            cin>>a[i];

         for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                    a++;
                else if(a[i]==1)
                    a++;
            }


    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
      
         }
        cout << endl;
        
        
    }
    return 0;
}