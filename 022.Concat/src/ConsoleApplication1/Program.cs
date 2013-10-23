using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            String a = "hola";
            String b = "que";
            String c = "tal";

            string[] array = new string[2];
            array[0] = b;
            array[1] = c;
            a = String.Concat(array);
            Console.WriteLine(a);
        }
    }
}
