#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int n = n1; n <= n2; n++)
    {

        switch (n)
        {
        case 1:
            cout << "one" << endl;
            break;

        case 2:
            cout << "two" << endl;
            break;

        case 3:
            cout << "three" << endl;
            break;

        case 4:
            cout << "four" << endl;
            break;

        case 5:
            cout << "five" << endl;
            break;

        case 6:
            cout << "six" << endl;
            break;

        case 7:
            cout << "seven" << endl;
            break;

        case 8:
            cout << "eight" << endl;
            break;

        case 9:
            cout << "nine" << endl;
            break;

        default:

            if (n % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
    }
}