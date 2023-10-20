//https://www.codingame.com/ide/puzzle/defibrillators
//I did this twice and in both times i forgot to change the comma in the input ffs
//i was stuck on this for so long cuz i forgot about that... anyway 100%

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
        string LON = Console.ReadLine().Replace(',','.');
        string LAT = Console.ReadLine().Replace(',','.');

        double myLongRad = double.Parse(LON) * (Math.PI/180);
        double myLatRad = double.Parse(LAT) * (Math.PI/180);

        int N = int.Parse(Console.ReadLine());

        double curLowDist = double.MaxValue;
        int curLowInd = 0;

        string[] defibs = new string[N];
        
        for (int i = 0; i < N; i++)
        {
            int occ = 1;
            string d = Console.ReadLine();
            Console.Error.WriteLine(d);
            defibs[i] = d;
            
            //all for 1 string per line
            double dLong = 0;
            int lastIndexColon = 0;
            double dLat = 0;
            string stringFilter = "";
            //filter
            for(int j = d.Length-1; j>=0; j--)
            {
                if(d[j] == ';')
                {
                    if(occ==1)
                    {
                        lastIndexColon = j;
                        stringFilter = d.Substring(j+1).Replace(',','.');
                        dLat = double.Parse(stringFilter) * (Math.PI/180);
                    }
                    else
                    {
                        stringFilter = d.Substring(j+1,lastIndexColon - j - 1).Replace(',','.');
                        dLong = double.Parse(stringFilter) * (Math.PI/180);
                        break;
                    }
                    occ++;
                }
            }

            //math
            double x = (dLong - myLongRad) * Math.Cos((myLatRad+dLat)/2);
            double y = (dLat - myLatRad);
            double dist = Math.Sqrt((x*x) + (y*y)) * 6371 * (Math.PI/180);;

            if(dist < curLowDist)
            {
                curLowDist = dist;
                curLowInd = i;
            }

            Console.Error.WriteLine("dlong " + dLong);
            Console.Error.WriteLine("dlat " + dLat);
            Console.Error.WriteLine("dist " + dist);


            if(i == N - 1)
            {
                Console.Error.WriteLine(curLowInd);
                int substrColon = defibs[curLowInd].IndexOf(';')+1;


                string s = defibs[curLowInd].Substring(substrColon,defibs[curLowInd].Substring(substrColon).IndexOf(';'));
                Console.WriteLine(s);
            }
        }

        // Write an answer using Console.WriteLine()
        // To debug: Console.Error.WriteLine("Debug messages...");
    }
}