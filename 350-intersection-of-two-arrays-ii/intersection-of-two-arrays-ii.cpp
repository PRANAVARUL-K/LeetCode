class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        unordered_map<int,int> um1;
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++)
            um[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++)
            um1[nums2[i]]++;
        for(int i = 0;i < nums2.size(); i++)
        {
            if(um.find(nums2[i]) != um.end())
            {
                for(int j = 0;j < um[nums2[i]] && j < um1[nums2[i]]; j++)
                    res.push_back(nums2[i]);
                um.erase(nums2[i]);
            }
        }
        
        for(auto x:um)
            cout<<x.first<<" "<<x.second<<endl;
        cout<<endl;
        for(auto x:um1)
            cout<<x.first<<" "<<x.second<<endl;
        return res;
    }
};