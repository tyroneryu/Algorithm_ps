#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
};

bool comparePoints(const Point &a, const Point &b) 
{
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

void merge(std::vector<Point> &points, int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<Point> leftPoints(n1);
    vector<Point> rightPoints(n2);

    for (int i{0}; i < n1; ++i)
    {
        leftPoints[i] = points[left + i];
    }
    
    for (int j{0}; j < n2; ++j)
    {
        rightPoints[j] = points[mid + 1 + j];
    }

    int i{0}, j{0}, k = left;

    while (i < n1 && j < n2) 
    {
        if (comparePoints(leftPoints[i], rightPoints[j])) 
        {
            points[k] = leftPoints[i];
            ++i;
        } 
        else
        {
            points[k] = rightPoints[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) 
    {
        points[k] = leftPoints[i];
        ++i;
        ++k;
    }

    while (j < n2) 
    {
        points[k] = rightPoints[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<Point> &points, int left, int right)
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;

        mergeSort(points, left, mid);
        mergeSort(points, mid + 1, right);
        merge(points, left, mid, right);
    }
}

int main() 
{
    int n;
    cin >> n;

    vector<Point> points(n);

    for (int i{0}; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    mergeSort(points, 0, n - 1);

    for (const auto &point : points) 
    {
        cout << point.x << " " << point.y << "\n";
    }

    return 0;
}