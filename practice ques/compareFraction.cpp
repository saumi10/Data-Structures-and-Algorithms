#include<bits/stdc++.h>
using namespace std;

string compareFraction(string str){
    int a=0,b=0;
    double first=0.0 , second=0.0;
    string temp1,temp2;
    bool denominator = false;

    for(int i=0; i<str.length();i++){
        char x = str[i];

        if(x=='/'){
            denominator = true;
            temp2+=x;
            continue;
        }
        else if(x==','){
            temp1=temp2;
            temp2="";
            first=(double) a/b;
            a=0;
            b=0;
            denominator=false;
            continue;
        }
        else if(x==' ') continue;

        if(!denominator){
            a=a*10+(x-'0');
            temp2+=x;
        }
        else{
            b=b*10+(x-'0');
            temp2+=x;
        }
        

    }
    second=(double)a/b;
    if(first>second){
        return temp1;
    }
    else if(first==second){
        return "equal";
    }
    else{
        return temp2;
    }
}

int main(){
    string str;
    getline(cin,str);

    string result=compareFraction(str);
    cout<<result;


}