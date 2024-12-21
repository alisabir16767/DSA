#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int t;
    cin >> t;
    vector<int> vect;
    while (t--)
    {
        vector<int> vect;
        int n = 0, num = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            vect.push_back(num);
        }
        int m;
        cin >> m;
        while (m--)
        {
            int x = 0, y = 0, s = 0, g = 0, sum = 0;
            cin >> x >> y;
            if (x < y)
            {
                for (int l = (x - 1); l < (y - 1); l++)
                {
                    if ((l == 0) || (l == (vect.size() - 1)))
                        sum = sum + 1;
 
                    else
                    {
                        if ((vect[l + 1] - vect[l]) < (vect[l] - vect[l - 1]))
                            sum = sum + 1;
                        else
                        {
                            sum = sum + (vect[l + 1] - vect[l]);
                        }
                    }
                }
                cout << sum << endl;
            }
            else
            {
                for (int l = (x - 1); l > (y - 1); l--)
                {
                    if ((l == 0) || (l == (vect.size() - 1)))
                        sum = sum + 1;
 
                    else
                    {
                        if ((vect[l] - vect[l - 1]) > (vect[l + 1] - vect[l]))
                            sum = sum + vect[l] - vect[l - 1];
                        else
                        {
                            sum = sum + 1;
                        }
                    }
                }
                cout << sum << endl;
            }
        }
    }
    vect.clear();
    return (0);
}