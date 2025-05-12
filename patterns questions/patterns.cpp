#include <iostream>
using namespace std;

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){  
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){  
    for(int i=0; i<n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n){  
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){  
    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=n-i; j++){ //spaces
            cout<<" ";
        }
        for(int k=1; k<=(2*i)-1; k++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern8(int n){  
    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=i-1; j++){ //spaces
            cout<<" ";
        }
        for(int k=1; k<=(2*(n-i))+1; k++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern9(int n){  
    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=n-i; j++){ //spaces
            cout<<" ";
        }
        for(int k=1; k<=(2*i)-1; k++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){ //rows
        for(int j=1; j<=i-1; j++){ //spaces
            cout<<" ";
        }
        for(int k=1; k<=(2*(n-i))+1; k++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern10(int n){  
    for(int i=1; i<=(2*n)-1; i++){ //rows
        if (i<=n){
            for(int j=1; j<=i; j++){ //stars till i=n
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int k=1; k<=(2*n)-i;k++){ 
                cout<<"*";

            }
            cout<<endl; 
        }

    }
}

void pattern11(int n){ 
    int count=1;
    for (int i=1; i<=n; i++){ 
        for(int j=1; j<=i;j++){ 
            if(i%2==0 && j%2!=0){ 
                cout<<"0";
            }
             if(i%2==0 && j%2==0){ 
                cout<<"1";
            }

            else if(i%2!=0 && j%2==0){ 
                cout<<"0";
            }
            else if(i%2!=0 && j%2!=0){ 
                cout<<"1";
            } 
            
        }
        cout<<endl;

    }
    //another way
    //int start=1
    //for(int i=1;i<=n;i++){
    //   if(i%2==0){
    //      start=0;
    //   }
    //     else{
    //         start=1;
    //     }
    // for(int j=1;j<=i;j++){
    //  cout<<start;
    //  start=1-start;
    // }
    // cout<<endl;
    //}
    
    
    
}

void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*(n-i);k++){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0;i<2*n-1;i++) {
        for(int j=0;j<2*n-1;j++){
            int top=j;
            int left=i;
            int right=(2*n-1)-1-j;
            int bottom=(2*n-1)-1-i;
            cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern14(n);
    }
}