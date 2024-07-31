class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        vector<vector<int>> memo(books.size(), vector<int>(shelfWidth + 1, 0));
        return dpHelper(books, shelfWidth, memo, 0, shelfWidth, 0);
    }
    
private:
    int dpHelper(const vector<vector<int>>& books, int shelfWidth, vector<vector<int>>& memo, int i, int remainingWidth, int currentHeight) {
        if (i == books.size()) return currentHeight;
        
        if (memo[i][remainingWidth] != 0) return memo[i][remainingWidth];
        
        int currentBookWidth = books[i][0], currentBookHeight = books[i][1];
        
        // Option 1: Put book on a new shelf
        int newShelfHeight = currentHeight + dpHelper(books, shelfWidth, memo, i + 1, shelfWidth - currentBookWidth, currentBookHeight);
        
        // Option 2: Put book on current shelf (if possible)
        int currentShelfHeight = INT_MAX;
        if (remainingWidth >= currentBookWidth) {
            int newHeight = max(currentHeight, currentBookHeight);
            currentShelfHeight = dpHelper(books, shelfWidth, memo, i + 1, remainingWidth - currentBookWidth, newHeight);
        }
        
        int result = min(newShelfHeight, currentShelfHeight);
        memo[i][remainingWidth] = result;
        return result;
    }
};