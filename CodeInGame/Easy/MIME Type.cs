//https://www.codingame.com/ide/puzzle/mime-type
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
        int N = int.Parse(Console.ReadLine()); // Number of elements which make up the association table.
        int Q = int.Parse(Console.ReadLine()); // Number Q of file names to be analyzed.
        Dictionary<string,string> table = new Dictionary<string,string>(StringComparer.InvariantCultureIgnoreCase);
        for (int i = 0; i < N; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            string EXT = inputs[0]; // file extension
            Console.Error.WriteLine("ext? " + EXT);
            string MT = inputs[1]; // MIME type.
            Console.Error.WriteLine("Mime? " + MT);
            table.Add(EXT,MT);
        }
        List<string> fileName = new List<string>();
        

        for (int i = 0; i < Q; i++)
        {
            string FNAME = Console.ReadLine(); // One file name per line.
            
                if (FNAME.Contains('.'))
                {
                     FNAME = FNAME.Substring(FNAME.LastIndexOf('.')+1);
                }
                else
                {
                    FNAME = "N/A";
                }
                fileName.Add(FNAME);
            
        }

        foreach(string extention in fileName)
            {
                if(extention == "N/A")
                {
                    Console.WriteLine("UNKNOWN");
                }
                else if (table.ContainsKey(extention))
                {
                    string MIMETypeToReturn = string.Empty;
                    table.TryGetValue(extention, out MIMETypeToReturn);
                    Console.WriteLine(MIMETypeToReturn);
                }
                else
                {
                    Console.WriteLine("UNKNOWN");
                }
            }  
    }
}