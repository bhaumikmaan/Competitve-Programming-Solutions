/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    bool DFS(vector<vector<char>>& board, string word, int i, int j, int n) 
    {
        if(n == word.size()) 
            return true ; 
        
        if(i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] != word[n]) 
                return false;
        board[i][j] = '0'; // Mark Visited
        bool status = DFS(board, word, i + 1, j, n + 1) ||DFS(board, word, i, j + 1, n + 1) || DFS(board, word, i - 1, j, n + 1) || DFS(board, word, i, j - 1, n + 1);
        board[i][j] = word[n] ;

        return status ;
    }
  
    bool exist(vector<vector<char>>& board, string word) 
    {
        if(word == "") 
        {
            return false ;
        }        
        for(int i = 0; i < board.size(); i++)
        { 
            for(int j = 0; j < board[i].size(); j++)
            { 
                if(board[i][j] == word[0] && DFS(board, word, i, j, 0))
                    return true ;
            }
        }
        return false ;
    }
};
