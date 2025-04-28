class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        vector<string> words;
        string word;
        
        while (iss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];

            if (p2w.count(c)) {
                if (p2w[c] != w) return false;
            } else {
                p2w[c] = w;
            }

            if (w2p.count(w)) {
                if (w2p[w] != c) return false;
            } else {
                w2p[w] = c;
            }
        }

        return true;
    }
};