#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq; // nums, freq
        for(auto num : nums)
        {
            freq[num]++;
        }
        for(auto f : freq)
        {
            if(f.second > 1) return f.first;
        }
        return -1;
    }
};
int main()
{
    vector<int> nums;
    return 0;
}