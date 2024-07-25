#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
public:
    Matrix(int rows, int cols) : rows_(rows), cols_(cols)
    {
        data_.resize(rows_, vector<int>(cols_, 0));
    }
    
    vector<int>& operator[](int row)
    {
        return data_[row];
    }
    
    const vector<int>& operator[](int row) const
    {
        return data_[row];
    }
    
    int getRows() const { return rows_; }
    
    int getCols() const { return cols_; }
    
    void print() const
    {
        for(const auto& row : data_)
        {
            for(int val : row)
            {
                cout << val << " ";
            }
            cout << "\n";
        }
    }
    
    Matrix operator+(const Matrix& other) const
    {
        int rows = min(rows_, other.rows_);
        int cols = min(cols_, other.cols_);
        Matrix result(rows, cols);
        
        for(int i{0}; i<rows; i++)
        {
            for(int j{0}; j<cols; j++)
            {
                result[i][j] = data_[i][j] + other[i][j];
            }
        }
        return result;
    }
    
private:
    int rows_, cols_;
    vector<vector<int>> data_;
};

int main()
{
    int n{}, m{};
    cin >> n >> m;
    
    Matrix mat1(n, m);
    Matrix mat2(n, m);
    
    for(int i{0}; i<n; i++)
    {
        for(int j{0}; j<m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    
    for(int i{0}; i<n; i++)
    {
        for(int j{0}; j<m; j++)
        {
            cin >> mat2[i][j];
        }
    }
    
    Matrix result = mat1 + mat2;
    
    result.print();
    
    return 0;
}