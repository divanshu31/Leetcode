// class Solution {
// public:
//     string mostCommonWord(string paragraph, vector<string>& banned) {
//         int n = banned.size();
//         unordered_map<string, int> bannedWords;
//         for(int i = 0; i < n; i++){
//             bannedWords.insert({banned[i], 1});
//         }
//     }
// };
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n=banned.size();
        unordered_map<string, int> bannedWords;
        for(int i=0;i<n;i++)
        {
            bannedWords.insert({banned[i], 1});
        }
        n=paragraph.length();
        string word="";
        unordered_map<string, int> wordFreq;
        for(int i=0;i<n;i++)
        {
            if((paragraph[i] >= 'A' && paragraph[i] <= 'Z') || (paragraph[i] >= 'a' && paragraph[i] <= 'z'))
            {
                word.push_back(tolower(paragraph[i]));
            }
            else
            {   
                if(!word.empty())
                {
                    if(bannedWords[word] == 0)
                    {
                        wordFreq[word]++;
                    }
                    word="";
                }
            }
        }
        if(!word.empty())
        {
            if(bannedWords[word] == 0)
            {
                wordFreq[word]++;
            }
        }
        int maxFreq=INT_MIN;
        string res;
        for(auto i:wordFreq)
        {
            if(maxFreq<i.second)
            {
                maxFreq=i.second;
                res=i.first;
            }
        }
        return res;
    }
};