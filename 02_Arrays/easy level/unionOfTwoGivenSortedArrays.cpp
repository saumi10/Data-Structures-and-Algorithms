#include <bits/stdc++.h>
using namespace std;
// brute force approach is to put the elements of array1 and array2 in a set and then back to the union array
// tc of brute force: O(n1log n)+O(n2 log n) +O(n1 + n2) //n is size of set
// sc of brute force: O(n1+n2) [+ O(n1 + n2)]
//                    set^        ^union array but only used to return ans , not used to solve

// optimal solution using two pointer approach
// tc= O(n1+n2)
// sc= O(n1+n2) in case all elements are unique and also only creating this union array for returning our answer , not for solving

vector<int> unionArray(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {

        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> uni = unionArray(arr1, arr2, n1, n2);
    for (auto it : uni)
    {
        cout << it << " ";
    }
}