#include <bits/stdc++.h>
using namespace std;

int findSmallestMissingPositive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int smallest = 1;
    
    while (numSet.count(smallest)) {
        smallest++;
    }
    
    return smallest;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Smallest missing positive number: " << findSmallestMissingPositive(arr) << endl;
    return 0;
}