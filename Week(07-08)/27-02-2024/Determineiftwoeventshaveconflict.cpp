// Determine if two events have conflicts 
//link--> https://leetcode.com/problems/determine-if-two-events-have-conflict/description/



class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
       int T1a=stoi(event1[0].substr(0,2)+event1[0].substr(3,2));
       int T1b=stoi(event1[1].substr(0,2)+event1[1].substr(3,2));
       int T2a=stoi(event2[0].substr(0,2)+event2[0].substr(3,2));
       int T2b=stoi(event2[1].substr(0,2)+event2[1].substr(3,2));
       if(T1a <= T1b && T1b < T2a && T2a <= T2b)
       {
           return false;
       }
       else if(T2a <= T2b && T2b < T1a && T1a <= T1b)
       {
           return false;
       }
       return true;


     
     
    
    }
};