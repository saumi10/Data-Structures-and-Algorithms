#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int>& bills, int n){
    int count5=0;
    int count10=0;
   
    int sold=0;
    for(int i = 0; i < n;i++){
        if(bills[i]==5){
            count5++;
        }
        else if(bills[i]==10){
            if(count5>0){
                count10++;
                count5--;
            }
            else{
                return false;
            }
            
        }
        else if(bills[i]==20){
            if(count5>0 && count10>0){
                count5--;
                count10--;
            }
            else if(count5>=3 && count10<0){
                count5-=3;
                
            }
            else{
                return false;
            }

        }
        sold++;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> bills(n);
    for(int i=0;i<n;i++){
        cin>>bills[i];
    }
    bool ans=solve(bills, n);
    if(ans==1){
        cout<<"true";

    }
    else{
        cout<<"false";
    }



}