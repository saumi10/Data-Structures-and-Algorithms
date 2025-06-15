#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        vector<vector<int>>newVec;
        int i=0;
        //left
        while(i<intervals.size() && intervals[i][1]<newIntervals[0]){
            newVec.push_back({intervals[i][0],intervals[i][1]});
            i++;
        }
        //midle
        while(i<intervals.size() && intervals[i][0]<=newIntervals[1]){
            newIntervals[0]=min(newIntervals[0],intervals[i][0]);
            newIntervals[1]=max(newIntervals[1],intervals[i][1]);
            i++;

        }
        newVec.push_back(newIntervals);
        while(i<intervals.size()){
            newVec.push_back(intervals[i]);
            i++;
        }

        return newVec;
    }