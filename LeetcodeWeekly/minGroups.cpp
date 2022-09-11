class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        priority_queue<int,vector<int>,greater<int>>pq;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        for(int i=0;i<n;i++)
        {
             if(pq.empty())pq.push(intervals[i][1]);
            else{
                if(intervals[i][0]>pq.top()){pq.pop();
                 pq.push(intervals[i][1]);}
                else pq.push(intervals[i][1]);
            }
        }
       return pq.size();
    }
};