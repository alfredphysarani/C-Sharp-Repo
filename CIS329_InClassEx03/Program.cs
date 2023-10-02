using System;
// class dispenserType
// This class specifies the members to implement a dispenser.
namespace vendingmachine
{
    public class dispenserType
    {
        private int numberOfItems;
        //variable to store the number of items in the dispenser
        private double cost;
        //variable to store the cost of an item

        private string itemName;

        public string getItemName {
            get {return itemName; }
            set {itemName = value; }
        }
        public int getNoOfItems
        {
            get { return numberOfItems; }
            set { numberOfItems = value; }
        }
        //Function to show the number of items in the machine.
        //Postcondition: The value of numberOfItems is returned.

        public double getCost
        {
            get { return cost; }
            set { cost = value; }
        }
        //Function to show the cost of the item.
        //Postcondition: The value of cost is returned.          

        public void makeSale()
        {
            numberOfItems--;
        }
        //Function to reduce the number of items by 1.
        //Postcondition: numberOfItems--;      

        public dispenserType(string setName, int setNoOfItems = 50, double setCost = 50.0)
        {
            itemName = setName;

            if (setNoOfItems >= 0)
                numberOfItems = setNoOfItems;
            else
                numberOfItems = 50;

            if (setCost >= 0)
                cost = setCost;
            else
                cost = 50.0;
        }
        //Constructor 
        //Sets the cost and number of items in the dispenser
        //to the values specified by the user.
        //Postcondition: numberOfItems = setNoOfItems;
        //               cost = setCost;
        //               If no value is specified for a 
        //               parameter, then its default value is 
        //               assigned to the corresponding member 
        //               variable.
    }

    // class cashRegister
    // This class specifies the members to implement a cash 
    // register.

    class cashRegister
    {
        private double cashOnHand;
        //variable to store the cash in the register

        public double getCashOnHand {
            get { return cashOnHand; }
        }
        public void acceptAmount(double amountIn)
        {
            cashOnHand = cashOnHand + amountIn;
        }
        //Function to receive the amount deposited by 
        //the customer and update the amount in the register.
        //Postcondition: cashOnHand = cashOnHand + amountIn;


    };
    class Mainclass
    {
        static void Main()
        {
            //Step 1
            cashRegister counter = new cashRegister();
            //Step 2
            dispenserType coke = new dispenserType("coke" ,5 , 15.0);
            dispenserType greenTea = new dispenserType("Green Tea", 10, 10.0);
            dispenserType coffee = new dispenserType("Coffee", 20, 20.0);
            dispenserType mineralWater = new dispenserType("Mineral Water", 5, 8.0);

            //Step 3
            showseletion();
            
            //Step 4
            Console.WriteLine("Please input the item you want to buy: ");
            string choice = Console.ReadLine();
                        
            //Step 5
            //  Change ### to the dispenserType defined in step 2
	        //  Change ??? to a suitable variable or value
            while (choice != "9")
            {
                //Step 5a
                if (choice == "1")
                {
                    sellProduct(ref coke, ref counter);
                }
                else if (choice == "2")
                {
                    sellProduct(ref greenTea, ref counter);
                }
                else if (choice == "3")
                {
                    sellProduct(ref coffee, ref counter);
                }
                else if (choice == "4")
                {
                    sellProduct(ref mineralWater, ref counter);
                }
                else
                {
                    Console.WriteLine("Invalid selection.");
                }
            
                //Step 5b
                showseletion();
                
                //Step 5c
                Console.WriteLine("Please input the item you want to buy: ");
                choice = Console.ReadLine();
            }//end while
        }
        //Step 3 and Step 5b
        static void showseletion()
        {
            //Change ??? to the dispenserType defined in step 2
            Console.WriteLine("*** Cold Drinks Vending Machines ***");
            Console.WriteLine("To select an item, enter");
            Console.WriteLine("1 for Coke");
            Console.WriteLine("2 for Green Tea");
            Console.WriteLine("3 for Coffee");
            Console.WriteLine("4 for Mineral Water");
            Console.WriteLine("9 to exit");

        }// end showelection
        
        //Step 5a
        static void sellProduct(ref dispenserType product, ref cashRegister pCounter)
        {
            // Debug
            Console.WriteLine(String.Format("Cash received: {0:C}", pCounter.getCashOnHand));
            double amount; //variable for storing amount deposited by the user
            //Step 5ai
            if (product.getNoOfItems > 0)  
            {   
                Console.WriteLine(String.Format("Number of {0} left: {1}", product.getItemName, product.getNoOfItems));
                Console.WriteLine(String.Format("The price of the {0}: {1:C}", product.getItemName, product.getCost));
                Console.WriteLine(String.Format("Please deposit {0:C}", product.getCost));
                amount = Convert.ToDouble(Console.ReadLine());
            //Step 5aiI
                if (amount >= product.getCost)
                {
                    product.makeSale();
                    pCounter.acceptAmount(product.getCost);
                    Console.WriteLine("Thank for purchasing and please collect your item at the bottom.");
                    if (amount - product.getCost > 0) {
                        Console.WriteLine(String.Format("Please remember to get the change: {0:C}", amount - product.getCost));
                    }
                }
                //Step 5aiII
                else
                {
                    Console.WriteLine(String.Format("The deposited amount {0:C} is not enough. {1:C} more is needed.", amount, product.getCost-amount));
                    Console.WriteLine("Please collect what you deposited.");
                }
            }
            //Step 5aii
            else
            {
                Console.WriteLine(String.Format("Sorry, {0} is sold out.", product.getItemName));
            }
            Console.WriteLine("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
        }// end sell product
    }
}