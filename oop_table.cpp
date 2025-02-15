#include <iostream>
using namespace std;
class factorian
{
    int n = 4;
    int fac = 1;

public:
    void getdate()
    {
        for (int i = 1; i <= n; i++)
        {
            fac = fac * i;
            cout << fac;
        }
    }
};
int main()
{
    factorian f1;
    f1.getdate();
    return 0;
}