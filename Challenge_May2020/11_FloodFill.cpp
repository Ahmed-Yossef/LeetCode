class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int currentColor = image[sr][sc];
        helper(image, sr, sc, currentColor, newColor);
        return move(image);
    }
    
    void helper(vector<vector<int>>& image, int sr, int sc, int currentColor, int newColor) {
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size())
            return;
        
        if(image[sr][sc] != currentColor || image[sr][sc] == newColor) {
            return;
        }
        
        image[sr][sc] = newColor;
        
        helper(image, sr + 1, sc, currentColor, newColor);
        helper(image, sr - 1, sc, currentColor, newColor);
        helper(image, sr, sc + 1, currentColor, newColor);
        helper(image, sr, sc - 1, currentColor, newColor);
    }
};
