class Solution {
public:
    int lengthOfLastWord(string s) {
        int last_word_length = 0 ;
        int length = s.length()-1;

        while(length>=0 && s[length] == ' ') length--;

        while(length>=0 && s[length]!=' ')
        {
            last_word_length++;
            length--;
        }
        return last_word_length;
    }
};