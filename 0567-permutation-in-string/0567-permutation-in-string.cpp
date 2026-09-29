class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size())
            return false;

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for (char c : s1)
            a[c - 'a']++;

        int window = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            b[s2[i] - 'a']++;

            // Keep window size equal to s1
            if (i >= window)
                b[s2[i - window] - 'a']--;

            // Compare frequencies
            if (a == b)
                return true;
        }

        return false;
    }
};