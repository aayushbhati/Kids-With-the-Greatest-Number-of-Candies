class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        set<int>mp;
        vector<bool>ans;
        for(int i=-0;i<candies.size();i++)mp.insert(candies[i]);
        for(int i=0;i<candies.size();i++){
            int n=candies[i]+extraCandies;
            if(n<*mp.rbegin()){
                ans.push_back(false);
                mp.insert(n);
            }
            else ans.push_back(true);
        }
        return ans;
    }
};
