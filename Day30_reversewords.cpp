class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=0;

        for(int i=0;i<s.size();i++)
        {
            string temp="";
            while(s[i]==' ' && i<=s.size()) i++;
            while(s[i]!=' ' && i<s.size())
            {
                temp+=s[i];
                i++;

            }
            if(temp.size()>0)
            {
                if(ans.size()==0)
                {
                    ans=temp;
                }
                else{
                    ans= temp+" "+ans;

                }
            }
        }
        return ans;
        // t-c->O(N)
        // S-C->O(N)
        
    }
};