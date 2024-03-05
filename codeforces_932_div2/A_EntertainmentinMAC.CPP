#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string rev = s;
        reverse(rev.begin(), rev.end());

        if (n % 2 == 0)
        {
            if (s <= rev)
            {
                cout << s << endl;
            }
            else
            {
                cout << rev << s << endl;
            }
        }
        else
        {
            if (s >= rev)
            {
                cout << rev << endl;
            }
            else
            {
                cout << s << rev << endl;
            }
        }
    }
    return 0;
}