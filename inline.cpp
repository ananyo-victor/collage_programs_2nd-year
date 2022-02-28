#include <iostream>
using namespace std;
class inline_function
{
    int pow=1;

public:
    inline void power(int a, int b)
    {
        for (int i = 0; i < b; i++)
        {
            pow *= a;
        }
            cout << "The answer is " << pow;
    }
};

int main()
{
    int x, y;
    inline_function in;
    cout << "Enter the number and its power" << endl;
    cin >> x >> y;
    in.power(x, y);
    return 0;
}
