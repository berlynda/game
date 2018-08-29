#include <iostream>

using namespace std;

int main()
{
    int num, p;
    bool prime = true;

    cout << "Please enter a number :";
    cin >> num;

    for(p = 2; p <= num / 2; ++p)
    {
        if(num % p == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << "The number you entered is prime";
    else
        cout << "The number you entered is not prime";

    return 0;
}
