#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int largest_prime_in_range(int l, int r)
{
    int largest_prime = -1;
    for (int num = r; num >= l; --num)
    {
        if (is_prime(num))
        {
            largest_prime = num;
            break;
        }
    }
    return largest_prime;
}

int main()
{
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i)
    {
        int l, r;
        cin >> l >> r;

        int largest_prime = largest_prime_in_range(l, r);

        cout << largest_prime << endl;
    }

    return 0;
}
