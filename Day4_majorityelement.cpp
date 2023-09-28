int size= nums.size(); //-3
        int mainsize= size/3;  //if size==3 ; mainsize= 3/3=1
        vector<int>ans;

        unordered_map<int, int>m; 

        for(int i=0;i<size;i++)
        {
            m[nums[i]]++;
        }
         // [3,2,3] 
        // 3apeear -2 time
        // 2appear -1 time

        for(auto x: m)
        {class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size= nums.size(); //-3
        int mainsize= size/3;  //if size==3 ; mainsize= 3/3=1
        vector<int>ans;

        unordered_map<int, int>m; 

        for(int i=0;i<size;i++)
        {
            m[nums[i]]++;
        }
         // [3,2,3] 
        // 3apeear -2 time
        // 2appear -1 time

        for(auto x: m)
        {
            if(x.second>mainsize) //mainsize = 1
            {
                ans.push_back(x.first);
            }
        }
        return ans;
        t.c-> O(N)
        S.C->O(N)+ O(N) =O(N)
      
        
    }
};
            if(x.second>mainsize) //mainsize = 1
            {
                ans.push_back(x.first);
            }
        }
        return ans;