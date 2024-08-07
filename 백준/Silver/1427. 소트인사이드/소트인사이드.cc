#include <iostream>
#include <vector>
#include <string>

using namespace std;

void merge(vector<long long>& arr, long long left, long long mid, long long right)
{
    long long n1 = mid - left + 1;
    long long n2 = right - mid;

    vector<long long> L(n1);
    vector<long long> R(n2);

    for (long long i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (long long i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    long long i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j]) 
        {
            arr[k] = L[i];
            i++;
        } 
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<long long>& arr, long long left, long long right)
{
    if (left < right) 
    {
        long long mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() 
{
    string n;
    cin >> n;

    vector<long long> digits;

    for (char c : n)
    {
        digits.push_back(c - '0');
    }

    mergeSort(digits, 0, digits.size() - 1);

    for (long long digit : digits)
    {
        cout << digit;
    }
    cout << endl;

    return 0;
}