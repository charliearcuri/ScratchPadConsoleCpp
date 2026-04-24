#include <iostream>
#include <vector>
#include <string>

using namespace std;

extern vector<string> armstrongNumber(vector<int> arr);

int main()
{
    std::cout << "Hello World" << std::endl;

    // Exercise: Write a function that takes a vector of integers and returns a vector of strings with "Yes" if the number is an Armstrong number and "No" if it is not.
    //An Armstrong number is an n-digit number that is equal to the sum of its own digits each raised to the power of n.
    vector<string> results = armstrongNumber({153, 370, 371, 407, 123}); // should return {"Yes", "Yes", "Yes", "Yes", "No"}
    
    std::cout << "Armstrong Number Results:" << std::endl;
    vector<int> testNumbers = {153, 370, 371, 407, 123};
    for (int i = 0; i < results.size(); i++) {
        std::cout << testNumbers[i] << ": " << results[i] << std::endl;
    }
    
    return 0;
}
