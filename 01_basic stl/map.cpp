#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "dfd";
    m[3] = "jdh";
    m.insert({4, "djgsg"});
    // printMap(m);
    int x;
    cin >> x;
    auto it = m.find(x); // O(log(n))
    if (it == m.end())
    {
        cout << "No value";
    }
    else
    {
        cout << (*it).second << endl;
    }
    m.erase(it); // log(n)
    printMap(m);
}