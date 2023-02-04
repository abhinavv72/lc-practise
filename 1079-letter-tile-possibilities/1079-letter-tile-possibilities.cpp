class Solution {
public:
   
        void solve(string tiles, string&output, set<string>&result, map<int,bool>&visited){
            for(int i=0; i<tiles.length(); i++){
                if(visited[i] == 0){
                    output.push_back(tiles[i]);
                    visited[i]=1;
                    result.insert(output);
                    solve(tiles, output, result, visited);
                    output.pop_back();
                    visited[i]=0;
                }
            }
        }
         int numTilePossibilities(string tiles) {
             string output ="";
             set<string>result;
             map<int,bool>flag;
             solve(tiles, output,result,flag);
             return result.size();
        
    }
    
};