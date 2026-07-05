#include <iostream>
using namespace std;

int main()
{
    int a, count = 0;
    cin >> a;

    while (1)
    {
        if (a >= 100)
        {
            count++;
            a -= 100;
        }
        else
            break;
    }
    while (1)
    {
        if (a >= 20)
        {
            count++;
            a -= 20;
        }
        else
            break;
    }
    while (1)
    {
        if (a >= 10)
        {
            count++;
            a -= 10;
        }
        else
            break;
    }
    while (1)
    {
        if (a >= 5)
        {
            count++;
            a -= 5;
        }
        else
            break;
    }
    while (1)
    {
        if (a >= 1)
        {
            count++;
            a -= 1;
        }
        else
            break;
    }
    cout << count;
    return 0;
}