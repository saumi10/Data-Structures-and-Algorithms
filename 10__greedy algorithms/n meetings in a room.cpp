// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

/*#include <bits/stdc++.h>
using namespace std;

class data
{
public:
    int start;
    int end;
    int pos;
};
static bool comp(data a, data b)
{
    if (a.end < b.end)
        return true;
    return false;
}
int maxMeetings(vector<int> &start, vector<int> &end)
{
    int n = start.size();
    data arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].start = start[i];
        arr[i].end = end[i];
        arr[i].pos = i;
    }
    sort(arr, arr + n, comp);
    int cnt = 1;
    int freeTime = arr[0].end;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].start > freeTime)
        {
            cnt++;
            freeTime = arr[i].end;
            // ds.add(arr.pos); maybe take a vector or unord-map
        }
    }
    return cnt;
}
    */