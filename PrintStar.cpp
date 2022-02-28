#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class PrintStar
{
    int i, j;

public:
    void star(int b)
    {
        for (i = 0; i < b; i++)
        {
            for (j = 0; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int a;
    PrintStar ps;
    cout << "Enter the number of rows" << endl;
    cin >> a;
    ps.star(a);
    return 0;
}
