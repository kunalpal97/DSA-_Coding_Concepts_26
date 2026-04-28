#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5] = {99, 45, -3, 12, 6};

    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
        if (arr[i] < min_num)
        {
            min_num = arr[i];
        }
    }
    cout << "Maximum value in array is : " << max_num << endl;
    cout << "Minimum value in array is : " << min_num << endl;
    return 0;
}