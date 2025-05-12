#include <bits/stdc++.h>
using namespace std;

void solve(string s, int k){
    int maxCount = 0;
    int maxFreq = 0;
    unordered_map<char, int> charCount;
    int left = 0;

    for (int right = 0; right < s.length(); right++) {
        charCount[s[right]]++;
        maxFreq = max(maxFreq, charCount[s[right]]);

        while ((right - left + 1) - maxFreq > k) {
            charCount[s[left]]--;
            left++;
        }

        maxCount = max(maxCount, right - left + 1);
    }

    cout << maxCount << endl;
}



int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        cin.ignore();
        solve(str, k);
    }
}