using System;

namespace tofind {
    class Program {
        static void Main(string[] args) {
            if (args.Length < 2) {
                Console.WriteLine("Please at least input 2 or more arguments.");
                Console.WriteLine("Example: max 1 4 5");
                return;
            }

            string command = args[0].ToLower();
            double[] numList = new double[args.Length-1];
            for (int i = 1; i < args.Length; i++) {
                try {
                    numList[i-1] = Convert.ToDouble(args[i]);
                } catch (Exception e) {
                    Console.WriteLine("Please ensure the input 2nd onward are valid numbers. {0}", e);
                    Console.WriteLine("{0} is not a valid number.", args[i]);
                    return;
                }
            }

            double temp = numList[0];
            if (command == "max") {
                for (int i = 1; i < numList.Length; i++) {
                    if (numList[i] > temp) temp=numList[i];
                }
                Console.WriteLine("max = {0}", temp);
            } else if (command == "min") {
                for (int i = 1; i < numList.Length; i++) {
                    if (numList[i] < temp) temp=numList[i];
                }
                Console.WriteLine("min = {0}", temp);
            } else if (command == "sum") {
                for (int i = 1; i < numList.Length; i++) {
                    temp += numList[i];
                }
                Console.WriteLine("sum = {0}", temp);
            } else {
                Console.WriteLine("Please ensure the first argument is max, min or sum.");
            }
        }
    }
}