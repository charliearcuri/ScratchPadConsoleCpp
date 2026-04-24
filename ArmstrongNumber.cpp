#include <vector>
#include <string>
#include <cmath>

using namespace std;

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
            result.push_back("Yes");
        } else {
            result.push_back("No");
        }
    }
    
    return result;
}


