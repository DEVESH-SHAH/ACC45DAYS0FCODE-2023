#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n], astreak[n] = {0}, bstreak[n] = {0}, acount = 0, bcount = 0, amax, bmax;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        amax = astreak[0];
        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                acount++;
                astreak[i] = acount;
            }
            else
            {
                astreak[i] = 0;
                acount = 0;
            }
            if (astreak[i] > amax)
            {
                amax = astreak[i];
            }
        }
        bmax = bstreak[0];
        for (i = 0; i < n; i++)
        {
            if (b[i] > 0)
            {
                bcount++;
                bstreak[i] = bcount;
            }
            else
            {
                bstreak[i] = 0;
                bcount = 0;
            }
            if (bstreak[i] > bmax)
            {
                bmax = bstreak[i];
            }
        }

        if (amax == bmax)
        {
            cout << "Draw" << endl;
        }
        else if (amax > bmax)
        {
            cout << "Om" << endl;
        }
        else if (bmax > amax)
        {
            cout << "Addy" << endl;
        }
    }
    return 0;
}
