#include <iostream>
using namespace std;

int main()
{
    // Check Palindrome
    int n;
    cout << "Enter total letters in word : ";
    cin >> n;

    char arr[n + 1];
    cout << "Enter the word : ";
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "Word is Palindrome";
    }
    else
    {
        cout << "Word is not palindrome";
    }

    return 0;
}
