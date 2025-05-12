#include<bits/stdc++.h>
using namespace std;

long long extractNumber(string sentence) {

        // code here
        //tc and sc = O(N) and O(1)
        long long a=0;
        long long b=0;
        long long temp=0;
        int count=0;
        bool nineFound=false;
        
        for(int i=0;i<sentence.length();i++){
            
            char x=sentence[i];
            
            if(x>='0' && x<='8'){
                b=b*10+(x-'0');
                
            }
            else if(x=='9'){
                nineFound=true;
                
                
            }
            if(!nineFound && (x==' ' || x==sentence[sentence.length()-1])){
                temp=b;
                if(temp>a){//update a if a larger (not including digit 9) number is found 
                    a=temp;
                    count+=1;
                    b=0; //renew b
                    
                }
                else{
                    b=0; //renew b
                    
                }
                
            }
            else if(nineFound && (x==' ' || x==sentence[sentence.length()-1])){
                b=0; //renew b
                nineFound=false;
                continue;
            }
            
            
            
        }
        if(count>0){
            return a;
        }
        
        else{
            return -1;
        } 
    }


int main(){
    string str;
    getline(cin,str);

    long long result=extractNumber(str);
    cout<<result;


}