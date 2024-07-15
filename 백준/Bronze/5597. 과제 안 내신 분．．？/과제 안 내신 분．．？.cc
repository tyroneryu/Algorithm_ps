#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void findMissingNumbers(const std::vector<int>& numbers) 
{
    int n = 30;
    int totalSum = n * (n + 1) / 2;
    int givenSum = accumulate(numbers.begin(), numbers.end(), 0);

    int sumOfMissingNumbers = totalSum - givenSum;

    int mid = sumOfMissingNumbers / 2;
    int sumFirstHalf = mid * (mid + 1) / 2;

    int sumOfGivenFirstHalf = 0;
    for (int num : numbers) {
        if (num <= mid) {
            sumOfGivenFirstHalf += num;
        }
    }

    int firstMissingNumber = sumFirstHalf - sumOfGivenFirstHalf;
    int secondMissingNumber = sumOfMissingNumbers - firstMissingNumber;

    cout << firstMissingNumber << "\n" << secondMissingNumber << endl;
}


int main()
{
    int arr_size{28};
    vector<int> numbers(arr_size);
    
    for(int i{0}; i<arr_size; i++)
    {
        cin >> numbers[i];
    }
    
    findMissingNumbers(numbers);
    
    return 0;
}
