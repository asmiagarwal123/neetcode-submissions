class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded = "";

        for (string word : strs) {

            encoded += to_string(word.length());
            encoded += "#";
            encoded += word;
        }

        return encoded;
    }

    vector<string> decode(string s) {

        vector<string> result;

        int i = 0;

        while (i < s.length()) {

            // Read the length
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int length = stoi(s.substr(i, j - i));

            // Move past '#'
            j++;

            // Extract the actual word
            string word = s.substr(j, length);

            result.push_back(word);

            // Move to the beginning of the next encoded word
            i = j + length;
        }

        return result;
    }
};