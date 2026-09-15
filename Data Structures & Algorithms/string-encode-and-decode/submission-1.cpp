class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string s : strs) {
            int len = s.length();
            encoded += to_string(len);
            encoded += "#";
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>decoded;

        int i = 0;
        while(i < s.length()) {
            int j = i;
            while(j<s.length() && s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            j++;
            string part = "";
            while(len--) {
                part += s[j];
                j++;
            }
            decoded.push_back(part);
            i = j;
        }
        return decoded;
    }
};
