#include <bits/stdc++.h>
using namespace std;

//brute force method:By creating a set and storing in it (set by default stores in ascending order)
// T.C => O(NlogN + N) , S.C => O(N)
/*void removeDuplicate (int arr[], int n){
    set <int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    int index=0;
    for(auto it:st){
        arr[index]=it;
        index++;
    }
}*/ 

//OPTIMAL SOLUTION (2 POINTER APPROACH)
void removeDuplicate(int arr[], int n){
    int i=0;
    for (int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
      
    }
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    removeDuplicate(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}