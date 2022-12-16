// This program calculates the total cost of building a flower garden in a nature center.
//Yasim Cruz
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
   double soil,         
    flowerSeeds,          
    fence,
    totalCost;
          
   cout << "Answers the following question to calculate total cost of your garden."<< endl;
   cout << "Enter soil cost: ";
   cin  >> soil;
   
   cout << "Enter flower seeds cost: ";
   cin  >> flowerSeeds; 

   cout << "Enter fence cost: ";
   cin  >> fence; 
   
   totalCost = flowerSeeds + fence + totalCost; 
   
   cout << "The total cost of your garden is: " << "$" << fixed << setprecision(2) << totalCost << endl;
  
   return 0;
}