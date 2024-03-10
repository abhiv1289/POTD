//Top K Frequent Elements
//link--> https://leetcode.com/problems/top-k-frequent-elements/description/



class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer;
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        while(k--){
        int max=INT_MIN;
        int index=0;
        for(const auto it:mpp){
            
                // cout<<it.first<<"-->"<<it.second<<endl;
            if((it.second)>max){
                max=it.second;
                index=it.first;
            }
          
        }
           mpp.erase(index);
        //  cout<<"----"<<endl;
           answer.push_back(index);
        }
        return answer;
    }
};