//https://www.codingame.com/ide/puzzle/ascii-art
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
class Solution
{
    static void Main(string[] args)
    {
        int L = int.Parse(Console.ReadLine());
        int H = int.Parse(Console.ReadLine());
        string T = Console.ReadLine();
        string line = "";
        int ind = 0;
        char cChar = 'c';
        for (int i = 0; i < H; i++)
        {
            string ROW = Console.ReadLine();
            foreach(char c in T)
            {
                if(Char.IsLetter(c))
                {
                    cChar = Char.ToUpper(c);
                    ind = Convert.ToInt32(cChar) - 65;
                    line += ROW.Substring(ind*L,L);
                }
                else
                {
                    ind = Convert.ToInt32('Z') - 65;
                    line += ROW.Substring(ind*L+4,L);
                }

            }
            Console.WriteLine(line);
            line = "";
        }


        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");


    }
}