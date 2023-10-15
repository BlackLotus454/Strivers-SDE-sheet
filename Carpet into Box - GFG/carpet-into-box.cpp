//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
       int  ans1=0;
        int ans2=0;
       int NA=A,NB=B,NC=C,ND=D;
        while(A>C || B>D){
            ans1++;
            if(A>C){
                A=A/2;
            }
            else{
                B=B/2;
            }
        }
          while(NA>ND || NB>NC){
            ans2++;
            if(NA>ND){
                NA=NA/2;
            }
            else{
                NB=NB/2;
            }
        }
        
        
        return min(ans1,ans2);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends