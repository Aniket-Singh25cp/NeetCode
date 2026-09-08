class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int x : nums){
            m[x]++;
        }
        vector<int> arr;
        for(auto &pair:m){
            arr.push_back(pair.first);
        }
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            return m[a] < m[b];
        });
        vector<int> ans;
        int n = arr.size();
        while(k > 0){
            ans.push_back(arr[n-1]);
            n--;
            k--;
        }
        return ans;
    }
};