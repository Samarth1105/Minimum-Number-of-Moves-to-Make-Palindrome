class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                int temp=j;
                while(temp>i && s[i]!= s[temp]){
                    temp--;
                }
                if(i==temp){
                    swap(s[i], s[i + 1]);
                    ans++;
                }
                else{
                    while(temp<j){
                        swap(s[temp],s[temp+1]);
                        ans++;
                        temp++;
                    }
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};
