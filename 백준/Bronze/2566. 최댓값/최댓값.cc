#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int rows{9};
    const int cols{9};

    int matrix[rows][cols];
    
    for(int i{0}; i<rows; i++)
    {
        for(int j{0}; j<cols; j++)
        {
            cin >> matrix[i][j];
        } 
    }

    int maxValue = matrix[0][0];
    int maxRow{0};
    int maxCol{0};

    for(int i{0}; i<rows; i++)
    {
        for(int j{0}; j<cols; j++)
        {
            if(matrix[i][j] > maxValue)
            {
                maxValue = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    
    cout << maxValue << "\n";
    cout << maxRow + 1 << " " << maxCol + 1 << "\n";

    return 0;
}