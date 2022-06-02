#include <iostream>
using namespace std;
int main()
{
    char arr[100] = "APPLE";
    int i = 0;

    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
    return 0;
}
