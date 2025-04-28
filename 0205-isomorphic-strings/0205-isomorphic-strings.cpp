class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for (int i = 0; i < s.length(); ++i) {
            char cs = s[i];
            char ct = t[i];

            if (mapS.count(cs)) {
                if (mapS[cs] != ct) return false;
            } else {
                mapS[cs] = ct;
            }

            if (mapT.count(ct)) {
                if (mapT[ct] != cs) return false;
            } else {
                mapT[ct] = cs;
            }
        }

        return true;
    }
};