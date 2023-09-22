using System;
using System.Collections.Generic;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] names = { "Tony", "Peter", "Mary" };
            foreach (string name in names)
            {
                Console.WriteLine("Hello " + name + "!!");
            }

            for (int i=0; i < 3; i++)
            {
                Console.WriteLine("Hello " + names[i] + "!!");
            }
            Console.WriteLine("---------------------");
            // Integer Overflow and unsigned the integer
            Console.WriteLine("Signed Interger Over Flow");
            int x = 2147483647;
            Console.WriteLine("Max. value of signed integer: " + x);
            x++;
            Console.WriteLine("Return to -2147483648 when +1: " + x);
            Console.WriteLine("Unsigned Interger Over Flow");
            uint y = 4294967295;
            Console.WriteLine("Max. value of unsigned integer: " + y);
            y++;
            Console.WriteLine("Return to 0 when +1: " + y);

            Console.WriteLine("---------------------");
            // Splitting a string by Split()
            Console.WriteLine("Split with one character");
            string s = "Hello World, Lydia Chan";
            Console.WriteLine("Init. String: " + s);
            char divider = ',';
            
            string[] words = s.Split(divider);
            for (int i=0; i < words.Length; i++) {
                Console.WriteLine(String.Format("The {0} split word: {1}", i, words[i]));
            }

            // Splitting a string by Split() with an array of char
            Console.WriteLine("---------------------");
            Console.WriteLine("Split on with an array of characters");
            char[] dividerArr = {',', ' '};
            
            string[] wordsArrDiv = s.Split(dividerArr);
            for (int i = 0; i < wordsArrDiv.Length; i++) {
                Console.WriteLine(String.Format("The {0} split word: {1}", i, wordsArrDiv[i]));
            }
            Console.WriteLine("---------------------");

            // Type Conversion
            Console.WriteLine("To int");
            string str1 = "4";
            Console.WriteLine(string.Format("Type of str1: {0}", str1.GetType()));
            int int1 = Convert.ToInt32(str1);
            Console.WriteLine(string.Format("Type of int1: {0}", int1.GetType()));

            Console.WriteLine("To string");
            double d1 = 0.0141;
            Console.WriteLine(string.Format("Type of d1: {0}", d1.GetType()));
            string str2 = Convert.ToString(d1);
            Console.WriteLine(string.Format("Type of str2: {0}", str2.GetType()));

            Console.WriteLine("To double");
            string str3 = "3.141592654";
            Console.WriteLine(string.Format("Type of str3: {0}", str3.GetType()));
            double d2 = Convert.ToDouble(str3);
            Console.WriteLine(string.Format("Type of d2: {0}", d2.GetType()));

            Console.WriteLine("---------------------");

            Console.WriteLine("2D Array [,]");
            int[,] array = new int[3, 5]; // Dynamic Array
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 5; j++) {
                    array[i, j] = i + j;
                    Console.Write(array[i,j] + " ");
                }
                Console.WriteLine();
            }

            Console.WriteLine("2D Array [][]");
            int[][] arr = new int[2][]; // Dynamic Array
            arr[0] = new int[4];
            arr[1] = new int[8];
            for (int i = 0; i < arr.Length; i++) {
                for (int j = 0; j < arr[i].Length; j++) {
                    arr[i][j] = i + j;
                    Console.Write(arr[i][j] + " ");
                }
                Console.WriteLine();
            }

            Console.WriteLine("---------------------");
            // List
            Console.WriteLine("C# List");

            List<int> userAgeList = new List<int>();

            userAgeList.Add(51);
            userAgeList.Add(40);
            userAgeList.Insert(0, 50);
            Console.WriteLine(userAgeList);

            // Dictionary
            string studentName;
            int studentScore;
            Dictionary<string, int> scores = new Dictionary<string, int>();
            scores.Add("Patrick", 65);
            scores.Add("Go", 75);
            scores.Add("Fred", 95);
            Console.Write("Name: ");
            studentName = Console.ReadLine();
            if (scores.TryGetValue(studentName, out studentScore)) {
                Console.WriteLine(string.Format("The scores of {0} and {1}.", studentName, studentScore));
            }

        }
    }
}