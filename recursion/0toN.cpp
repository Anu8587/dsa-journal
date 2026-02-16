#include <iostream>

using namespace std;

int sum_of_n_nums(int n, int sum)
{
    if (n < 0)
    {
        return sum;
    }
    sum += n;
    return sum_of_n_nums(n - 1, sum);
}
int main()
{

    cout << sum_of_n_nums(5, 0) << endl;
    return 0;
}