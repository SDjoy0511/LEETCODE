class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>have;
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
            have[s[i]]++;
        unordered_map<char,int>need;
        int j = target.size();
        for(i=0;i<j;i++)
            need[target[i]]++;
        int res = INT_MAX;
        for( auto i : need)
        {
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];
            int times = fhave/fneed;
            res = min(res,times);
        }
        return res;
    }
};