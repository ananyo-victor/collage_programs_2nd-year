#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class NumPrint2
{
int c=1;
public:
    void num2(int b)
    {
        for (int i = 1; i <= b; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << c++  << " ";
                
            }
            cout << endl;
        }
    }
};

int main()
{
    int a;
    NumPrint2 p2;
    cout << "Enter the number of rows" << endl;
    cin >> a;
    p2.num2(a);
    return 0;
}
