class Solution {
public:
    string removeOuterParentheses(string s) {
        int size= s.size();
        bool flag=true;
        string ans="";

        int count=0;
        for(int i=0;i<size;i++)
        {
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;

            if(flag==true && count==1) {
                flag=false;
                continue;
            }
            if(count==0 && flag==false)
            {
                flag=true;
                continue;
            }
            ans+=s[i];
            
        }
        return ans;
        // t-c-> O(N)
        // s-c-> O(N)
    }
};