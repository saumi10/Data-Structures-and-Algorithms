#include <bits/stdc++.h>
using namespace std;

/*int numberOfSubstrings(string s) {
        int count=0;
        int lastSeen[3] = {-1,-1,-1};
        for(int i=0;i<s.length();i++){
            lastSeen[s[i]-'a']=i;
            count+=1+min({lastSeen[0],lastSeen[1],lastSeen[2]});

        }
        return count;

}
*/
int numberOfSubstrings(string s)
{
    int count = 0;
    unordered_map<int, int> lastSeen = {{0, -1}, {1, -1}, {2, -1}};
    for (int i = 0; i < s.length(); i++)
    {
        lastSeen[s[i] - 'a'] = i;
        if (lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1)
        {
            count += 1 + min({lastSeen[0], lastSeen[1], lastSeen[2]});
        }
    }
    return count;
}

int main()
{
    string s;
    cin >> s;

    int ans = numberOfSubstrings(s);
    cout << ans;
}