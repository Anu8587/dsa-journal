#include <iostream>
#include <vector>

using namespace std;

int sum_of_range(vector<int> &nums, int sum, int id)
{
    if (id < 0)
    {
        return sum;
    }
    sum += nums[id];
    return sum_of_range(nums, sum, id - 1);
}
int main()
{
    int n, q;

    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int id;
        cin >> id;
        int r = sum_of_range(v, 0, id);
        cout << r << endl;
    }

    return 0;
}