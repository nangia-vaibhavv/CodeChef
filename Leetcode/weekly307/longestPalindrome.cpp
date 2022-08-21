class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> cnt(10 , 0); //Bcz digit will be from 0 - 9
        
        
        for(auto ch : num) {
            cnt[ch - '0']++; // Count occurence of each number
        }
        
        string ans , ans2;
        
        for(int i=9;i>=0;i--) {
            if(i == 0 && ans.empty())  // Check to avoid trailing zero. 
                break;
            int t = cnt[i]/2; //Add even count occurences of each odd and even occuring number.
			//For eg if 9 comes 3 times , we will take 2 of those 9.
            for(int k=0;k<t;k++)
                ans += i+'0'; // Append in string the number found.
            cnt[i] -= 2*t; // Decrease counter
        }
        
        ans2 = ans;
        reverse(ans2.begin() , ans2.end()); // Reverse the original string formed
        
        
        
        for(int i=9;i>=0;i--) {
		if(cnt[i]) { // add any number which has odd currence left. (cnt[i] will be 0 for all even occurence , and cnt[i] will be 1 for odd occurences. )
                ans += i + '0';
                break;
            }
        }
        
        return ans + ans2; //Append and return the string formed.
    }
};