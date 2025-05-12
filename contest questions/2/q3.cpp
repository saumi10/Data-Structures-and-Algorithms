#include <bits/stdc++.h>
using namespace std;
int solve(int n, string  a,string b,int l,int r){
    int count =0;
    sort( a.begin()+l-1, a.begin()+r );
    sort( b.begin()+l-1, b.begin()+r);
    
   unordered_map<char, int> freq;
   for (int i = l - 1; i < r; i++) {
        freq[a[i]]+=1;
        freq[b[i]]+=1;
    }
    for (const auto& it : freq) {
        if((it.second)%2==1){
            count++;
        }
    }    

    return count/2;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,q;
        cin >> n>>q;
        string a;
        string b;
        

        cin>>a;
        cin>>b;
        int l;
        int r;
        for(int j=0;j< q;j++){
            cin>>l>>r;
            
            int sol = solve(n,a,b,l,r);
            cout << sol << endl;
        }

        
        
    }
}