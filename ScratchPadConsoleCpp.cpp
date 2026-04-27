#include <iostream>
#include <vector>
#include <string>

using namespace std;

extern vector<string> armstrongNumber(vector<int> arr);

string ltrim(const string& str);
string rtrim(const string& str);


int main()
{
    std::cout << "Hello World" << std::endl;

    // Exercise: Write a function that takes a vector of integers and returns a vector of strings with "Yes" if the number is an Armstrong number and "No" if it is not.
    //An Armstrong number is an n-digit number that is equal to the sum of its own digits each raised to the power of n.
#ifdef COMMENTED_OUT
    string arr_count_temp;
    getline(cin, arr_count_temp);

    printf("arr_count_temp: %s\n", arr_count_temp.c_str());

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    // vector<int> arr{arr_count};
    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        // arr.push_back(arr_item);
        arr[i] = arr_item;
    }

    vector<string> result = armstrongNumber(arr);
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }
#else
    vector<string> results = armstrongNumber({153, 370, 371, 407, 123}); // should return {"Yes", "Yes", "Yes", "Yes", "No"}
    
    std::cout << "Armstrong Number Results:" << std::endl;
    vector<int> testNumbers = {153, 370, 371, 407, 123};
    for (int i = 0; i < results.size(); i++) {
        std::cout << testNumbers[i] << ": " << results[i] << std::endl;
    }
#endif
    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) { return !isspace(ch); }));

    return s;
}
string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !isspace(ch); }).base(),
        s.end());

    return s;
}

