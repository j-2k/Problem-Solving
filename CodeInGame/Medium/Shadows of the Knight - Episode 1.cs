//https://www.codingame.com/ide/puzzle/shadows-of-the-knight-episode-1
//https://www.geeksforgeeks.org/binary-search/
//100%
using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Player
{
    static void Main(string[] args)
    {
        string[] inputs;
        inputs = Console.ReadLine().Split(' ');
        int W = int.Parse(inputs[0]); // width of the building.
        int H = int.Parse(inputs[1]); // height of the building.
        int N = int.Parse(Console.ReadLine()); // maximum number of turns before game over.
        inputs = Console.ReadLine().Split(' ');
        int x = int.Parse(inputs[0]);   //batman x
        int y = int.Parse(inputs[1]);   //batman y

        int xMin = 0;   //L
        int xMax = W - 1;   //R
        int yMin = 0;   //U
        int yMax = H - 1;   //D

        // game loop
        while (true)
        {
            string bombdir = Console.ReadLine(); // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)

            // Write an action using Console.WriteLine()
            // To debug: Console.Error.WriteLine("Debug messages...");

            if(bombdir.Contains('U'))
            {
                //move bottom max bracket up to directly above batman
                yMax = y - 1;

            } else if(bombdir.Contains('D'))
            {
                //move top min bracket down to directly below batman
                yMin = y + 1;
            }

            if(bombdir.Contains('L'))
            {
                xMax = x - 1;
            } else if(bombdir.Contains('R'))
            {
                xMin = x + 1;
            }

            x = xMin + (xMax - xMin)/2;
            y = yMin + (yMax - yMin)/2;


            Console.WriteLine(x + " " + y);

        }
    }
}