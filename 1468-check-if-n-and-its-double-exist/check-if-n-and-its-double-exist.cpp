class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i = 0;i < arr.size();i++)
        {
            if(Search(arr[i]*2,arr,i))
                return true;
        }
        return false;
    }
    bool Search(int tar,const vector<int> &arr,int k)
    {
        int l = 0,r = arr.size()-1;
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid] == tar && mid != k)
                return true;
            else if(arr[mid] > tar)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};