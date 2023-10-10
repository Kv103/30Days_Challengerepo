class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!= t.size())
        {
            return false;
        }

        unordered_map<char, int>m1; // map character of  string s 
        unordered_map<char, int>m2; // map character of string t

        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            m2[t[i]]++;
        }

        for(int i=0;i<s.size();i++)
        {
            if(m1[s[i]]m!= m2[s[i]]) // take character from string s only 
                             // a ki value chck krega 
            {
                return false;
            }
        }
        return true;

        // T-C-> o(N)
        // SC-> O(N)
       
      

        
    }
};