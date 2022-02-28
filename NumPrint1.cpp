#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NumPrint1
{

public:
    void num1(int b)
    {
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int a;
    NumPrint1 p1;
    cout << "Enter the number of rows" << endl;
    cin >> a;
    p1.num1(a);
    return 0;
}
