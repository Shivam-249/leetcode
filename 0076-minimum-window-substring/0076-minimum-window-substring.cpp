class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128, 0);

        for(char ch : t) {
            freq[ch]++;
        }

        int left = 0;
        int count = t.length();

        int minLen = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.length(); right++) {

            // Include s[right]
            if(freq[s[right]] > 0) {
                count--;
            }

            freq[s[right]]--;

            // Window is valid
            while(count == 0) {

                // Update answer
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove s[left]
                freq[s[left]]++;

                if(freq[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};