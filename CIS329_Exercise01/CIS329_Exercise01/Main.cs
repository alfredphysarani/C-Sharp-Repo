using System;

/*
    Money Change Program
    In H.K., there are four kinds of coins: 10-dollars ($10), 5-dollars ($5), 2-dollars ($2) and 1-dollar ($1)
    Write a program that user can input any number of dollars. Then should then compute the number of 10-dollars, 5-dollars, 2-dollars and 1-dollar to be returned,
    returning as many 10- dollars as possible, then 5-dollars, 2-dollars and 1-dollar in that order.
    Input:
        Change in dollars.
    Output:
        Equivalent change in 10-dollars, 5-dollars, 2-dollars and 1-dollar.
*/
namespace Program
{
    class Program
    {
        static void Main()
        {
            int changeIn, n_10, n_5, n_2, n_1;
            Console.WriteLine("Please enter the total amount of dollars: ");
            string input = Console.ReadLine();
            changeIn = Int32.Parse(input);
            n_10 = changeIn / 10;
            n_5 = changeIn % 10 / 5;
            n_2 = changeIn % 10 % 5 / 2;
            n_1 = changeIn % 10 % 5 % 2;

            Console.WriteLine($"The change you entered is {input}.");
            Console.WriteLine($"The number of 10-dollars to be returned is {n_10}.");
            Console.WriteLine($"The number of 5-dollars to be returned is {n_5}.");
            Console.WriteLine($"The number of 2-dollars to be returned is {n_2}.");
            Console.WriteLine($"The number of 1-dollars to be returned is {n_1}.");
            Console.WriteLine("Press any key to exit...");
            Console.ReadKey(true);

        }
    }
}
