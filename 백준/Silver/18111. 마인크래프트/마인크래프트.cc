#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() 
{
    int N, M, B;
    cin >> N >> M >> B;

    vector<vector<int>> ground(N, vector<int>(M));
    int min_height = 256, max_height = 0;

    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < M; ++j) 
        {
            cin >> ground[i][j];
            min_height = min(min_height, ground[i][j]);
            max_height = max(max_height, ground[i][j]);
        }
    }

    int min_time = INT_MAX;
    int optimal_height = 0;

    for (int h = min_height; h <= max_height; ++h)
    {
        int blocks_to_remove = 0;
        int blocks_to_add = 0;

        for (int i = 0; i < N; ++i) 
        {
            for (int j = 0; j < M; ++j) 
            {
                if (ground[i][j] > h) 
                {
                    blocks_to_remove += ground[i][j] - h;
                } 
                else
                {
                    blocks_to_add += h - ground[i][j];
                }
            }
        }

        if (blocks_to_remove + B >= blocks_to_add) 
        {
            int time = blocks_to_remove * 2 + blocks_to_add;

            if (time < min_time || (time == min_time && h > optimal_height)) 
            {
                min_time = time;
                optimal_height = h;
            }
        }
    }

    cout << min_time << " " << optimal_height << "\n";

    return 0;
}
