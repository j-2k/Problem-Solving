//In hindsight it's easy, but damn my brain exploded trying to figure out where I am in the loop lmao, had to cheat a lil on this one

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;

        map<pair<int,int>, unordered_set<char>> squares;

        for (int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.') { continue; }

                pair<int,int> squareKey = {i/3,j/3};

                if(rows[i].count(board[i][j]) || cols[j].count(board[i][j]) || squares[squareKey].count(board[i][j])){
                    return false;
                }

                rows[i].insert(board[i][j]);
                cols[j].insert(board[i][j]);
                squares[squareKey].insert(board[i][j]);
            }
        }

        return true;
    }
};
