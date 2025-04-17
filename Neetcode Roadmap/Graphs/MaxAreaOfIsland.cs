//Max Area of Island
//https://neetcode.io/problems/max-area-of-island

public class Solution {

	static readonly int [][]dir = new int[][]
	{
	  new int[] {1,0},
	  new int[] {0,1},
	  new int[] {-1,0},
	  new int[] {0,-1}
	};
    
    public int MaxAreaOfIsland(int[][] grid) {
        int maxAreaIsland = 0;
        for (int i = 0; i < grid.Length; i++) {
            for (int j = 0; j < grid[i].Length; j++) {
              //Console.Write(grid[i][j] + " "); Print grid before changing vals
              if(grid[i][j] == 1){
                int steps = DFS(grid,i,j);
                maxAreaIsland = maxAreaIsland < steps ? steps : maxAreaIsland;
                //maxAreaIsland = Math.Max(maxAreaIsland, DFS(grid,i,j)); Can just use Max instead!
              }
              //Console.Write(grid[i][j] + " "); Print grid after changing vals
            }
            //Console.WriteLine(); empty line space
        }
        return maxAreaIsland;
    }

    public int DFS(int[][] G, int x, int y){
        //Preliminary Checks
        if(x < 0 || y < 0 || x >= G.Length || y >= G[x].Length || G[x][y] == 0){return 0;}
        //if(G[x][y] == 0 || x < 0 || y < 0 || x >= G.Length || y >= G[x].Length {return 0;} I was stuck here for a while because of the first check being in the front and not the end!
      
        //Set coord to visited!
        G[x][y] = 0;
      
        //Since its not 0 we start with 1 step
        int steps = 1;
      
        //The essential core of DFS
        //Foreach through the adjacent nodes
        foreach(var d in dir){
            //recursively DFS/Step into each neighbour possible and count them backwards (callstack/LIFO)
            steps += DFS(G, x + d[0], y + d[1]);
        }
      
      return steps;
    }
}
