#include <iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return; // Base case
    }

    towerofHanoi(n - 1, src, helper, dest);
    cout << "Move From " << src << " to " << dest << endl;
    towerofHanoi(n - 1, helper, dest, src);
}

int main()
{
    towerofHanoi(3, 'A', 'C', 'B');

    return 0;
}
