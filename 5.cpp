// To get the average of a series of values, you add the values up and then divide the sum by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen.
#include <iostream>
using namespace std;

int main () {
    int value1 = 28;
    int value2 = 32;
    int value3 = 37;
    int value4 = 24;
    int value5 = 33;
    
    int sumOfValues = value1 + value2 + value3 + value4 + value5;
    int average = sumOfValues / 5;
    
    cout << "The sum is " << sumOfValues << endl;
    cout << "The average is " << average << endl;
    
    return 0;
    
}
