//463. Island Perimeter.cpp
class Solution {
public:
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int row,col;
         col = grid[0].size();
         row = grid.size();
        int count = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == 1){
                    count += 4;

                    if(i > 0 && grid[i - 1][j] == 1){
                        count -= 2;
                    }
                    if(j > 0 && grid[i][j - 1] == 1){
                        count -= 2;
                    }
                }
            }

        }
        return count;
     }
    
};
