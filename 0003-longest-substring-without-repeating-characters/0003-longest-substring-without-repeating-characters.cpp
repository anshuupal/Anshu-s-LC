class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> m;
        
        int left = 0;
        int current = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {

            while (m.count(s[right])) {
                m.erase(s[left]);
                left++;
            }

            m.insert(s[right]);

            current = right - left + 1;
            ans = max(ans, current);
        }

        return ans;
    }
};