// Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent and the county sales tax is 2 percent.


#include <iostream>
using namespace std;

int main ()
{
    int purchase= 95;
    int stateSalesTax= 0.04 * purchase;
    int countySalesTax= 0.02 * purchase;
    int totalTax= stateSalesTax + countySalesTax;
    
    cout << "The total sales tax is: $ " << totalTax << endl;
    
    return 0;
    
}
