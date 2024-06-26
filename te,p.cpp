#include <iostream>
#include <vector>
using namespace std;
template <typename T>
T multiply(const std::vector<T>& collection) {
    T result = 1; 

    for (const auto& num : collection) {
        result *= num; 
    }

    return result; 
}

int main() {
    vector<int> nums = { 1, 2, 3, 4, 5 };
    cout << "Result 1: " << multiply(nums) << endl;

    vector<double> doubles = { 1.1, 2.2, 3.3, 4.4 };
    cout << "Result 2:  " << multiply(doubles) << endl;

    return 0;
}