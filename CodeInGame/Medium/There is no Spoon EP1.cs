//https://www.codingame.com/ide/puzzle/there-is-no-spoon-episode-1
//100%
using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/
class Player
{

    class Node {
        int x;
        int y;

        public Node(int xx, int yy)
        {
            x = xx;
            y = yy;
        }

        public int[] GetNodeXY()
        {
            int[] a = {x,y};
            return a;
        }

        public string PrintNodeXY()
        {
            return x + " " + y;
        }
    }
    static void Main(string[] args)
    {
        int width = int.Parse(Console.ReadLine()); // the number of cells on the X axis
        int height = int.Parse(Console.ReadLine()); // the number of cells on the Y axis
        
        char[,] matrix = new char[width, height];

        for (int i = 0; i < height; i++)
        {
            string line = Console.ReadLine(); // width characters, each either 0 or .
            for(int j = 0; j < width; j++)
            {
                matrix[j,i] = line[j];
            }
        }

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                Console.Error.Write(matrix[j,i]);

                if(matrix[j,i] == '0')
                {
                    Node cur = new Node(j,i);
                    Node r;
                    Node d;

                    int xDir = j;
                    while(++xDir < width && matrix[xDir,i] == '.');
                    if(xDir < width)
                    {
                        r = new Node(xDir,i);
                    }
                    else
                    {
                        r = new Node(-1,-1);
                    }

                    int yDir = i;
                    while(++yDir < height && matrix[j,yDir]=='.');
                    if(yDir < height)
                    {
                        d = new Node(j,yDir);
                    }
                    else
                    {
                        d = new Node(-1,-1);
                    }

                    Console.WriteLine(cur.PrintNodeXY() + " " + r.PrintNodeXY() + " " + d.PrintNodeXY());
                }
            }
        }
    }
}