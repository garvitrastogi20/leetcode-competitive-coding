// LEETCODE PROBLEM: 219
// DUPLICATE ELEMENTS II


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
                if(i- mp[nums[i]]<=k) return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};
int main() {
    Solution obj;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cout << "Enter k: ";
    cin >> k;

    bool result = obj.containsNearbyDuplicate(nums, k);
    if (result)
        cout << "true";
    else
        cout << "false";
    return 0;
}
