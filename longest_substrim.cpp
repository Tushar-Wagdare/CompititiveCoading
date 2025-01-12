/// PROBLEM
/*

    Given a string s, find the length of the longest 
    substring
    without repeating characters.

*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char c;
        int current_longest_substring = 1;
        int longest_substring = 0;
        int helper = 0;
        if(s.length() == 0)
            return 0;

        if(s.length() == 1)
            return 1;

        for(int i = 1; i < s.length(); i++)
        {
            c = s.at(i);
            for(int j = i-1; j >= helper; j--)
            {
                if(c == s.at(j))
                {
                    if(longest_substring < current_longest_substring)   
                        longest_substring = current_longest_substring;

                    current_longest_substring = 0;
                    helper = j+1;
                    i = helper;
                    break;
                }
            }
            current_longest_substring++;
        }
        return longest_substring > current_longest_substring ? longest_substring : current_longest_substring;
    }
};