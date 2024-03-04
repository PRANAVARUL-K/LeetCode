class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l = 0,r = s.size()-1;
        while(l < r)
        {
            while(!((s[l] >= 'a' && s[l] <= 'z') || (s[l] <= 'Z' && s[l] >= 'A')) && l < r)
                l++;
            while(!((s[r] >= 'a' && s[r] <= 'z') || (s[r] <= 'Z' && s[r] >= 'A') ) && l < r)
                r--;
            cout<<s[l]<<" "<<s[r]<<"\n";
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }
        return s;
    }
};