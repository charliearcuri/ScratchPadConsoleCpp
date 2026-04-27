#include <vector>
#include <string>
#include <cmath>

using namespace std;

/*
A number is called an Armstrong number if the sum of the cube of its digits is equal to the number itself.  An example would be 153 because 1^3 + 5^3 + 3^3 = 153 153.
This method implements the given logic for an array of integers and checks whether each input number is an Armstrong number or not.
If it is, print "It is an ARMSTRONG number", else print "It is NOT an ARMSTRONG number".

Input Format
	• The first line is an integer N, which denotes the number of elements in the array.
	• Each of the next N lines is an integer - it is an input - check whether it is an Armstrong number or not.

Constraints
	• 1 <= N <= 10
	• 1 <= number <= 1000

Output
	• If the number taken as input is an Armstrong number, print "It is an ARMSTRONG number", else print "It is NOT an ARMSTRONG number".

Evaluation Parameters
Sample Input 
3
153
123
367
Sample Output
It is an ARMSTRONG number
It is NOT an ARMSTRONG number
It is NOT an ARMSTRONG number

Execution time limit
4 seconds
*/
vector<string> armstrongNumber(vector<int> arr) {
    vector<string> result;
    
    for (int num : arr) {
        // Get number of digits
        int n = to_string(num).length();
        
        // Calculate sum of digits raised to power n
        int sum = 0;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, n);
            temp /= 10;
        }
        
        // Check if it's an Armstrong number
        if (sum == num) {
            result.push_back("It is an ARMSTRONG number");
        } else {
            result.push_back("It is NOT an ARMSTRONG number");
        }
    }
    
    return result;
}


