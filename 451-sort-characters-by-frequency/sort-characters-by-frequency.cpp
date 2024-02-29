class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;

        for(char c : s){
            freqMap[c]++;
        }
        sort(s.begin(), s.end(), [&](char a, char b){
            if(freqMap[a] == freqMap[b]){
                return a < b;
            }
            return freqMap[a] > freqMap[b];
        });
        string sortedString;
        for(char c : s) {
            sortedString += c;
        }
        return sortedString;
    }
};