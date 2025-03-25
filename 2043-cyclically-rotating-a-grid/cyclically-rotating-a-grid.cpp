class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int top = 0;
        int left = 0;
        int right = m-1;
        int bottom = n-1;

        while(top < bottom && left < right){
            vector<int> temp;
            //right
            for(int i = left; i <= right; i++){
                temp.push_back(grid[top][i]);
            }
            //down
            for(int i = top + 1; i <= bottom; i++){
                temp.push_back(grid[i][right]);
            }
            //left
            for(int i = right - 1; i >= left; i--){
                temp.push_back(grid[bottom][i]);
            }
            //up
            for(int i = bottom - 1; i >= top+1; i--){
                temp.push_back(grid[i][left]);
            }
            //pushing rotated value of grid from k 
            int ind = 0;
            
            //right
            for(int i = left; i <= right; i++){
                grid[top][i] = temp[(ind + k) % temp.size()];
                ind++;
            }
            //down
            for(int i = top + 1; i <= bottom; i++){
                grid[i][right] = temp[(ind + k) % temp.size()];
                ind++;
            }
            //left
            for(int i = right - 1; i >= left; i--){
                grid[bottom][i] = temp[(ind + k) % temp.size()];
                ind++; 
            }
            //up
            for(int i = bottom - 1; i >= top+1; i--){
                grid[i][left] = temp[(ind + k) % temp.size()];
                ind++;
            }
            left++;
            right--;
            top++;
            bottom--;
        }
        return grid;
    }
};