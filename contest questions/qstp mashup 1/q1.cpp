#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    int rows=2*n;
    int columns=2*n;
    int setRow=0;
    for(int i=1;i<=rows;i++){
        int setColumnHash=0;
        
        if(setRow<2){
            for(int j=1;j<=columns;j++){
                if(setColumnHash<2){
                    cout<<"#";
                    setColumnHash++;
                }
                else{
                    cout<<".";
                    
                    setColumnHash++;

                }
                if(setColumnHash==4){
                    setColumnHash=0;
                }
            }
            cout<<endl;
            setRow++;
            
        }
        else{
            for(int j=1;j<=columns;j++){
                if(setColumnHash<2){
                    cout<<".";
                    setColumnHash++;
                }
                else{
                    cout<<"#";
                    
                    setColumnHash++;

                }
                if(setColumnHash==4){
                    setColumnHash=0;
                }
            }
            cout<<endl;
            setRow++;
            if(setRow==4){
                setRow=0;
            }
            
        
        }
        
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern(n);
    }
}