#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b) for (long long i = a; i < b; i++)
#define rf(i, a, b) for (long long i = a; i >= b; i--)
#define ll long long
#define mp make_pair
#define pb push_back
#define vll vector<long long>
#define vvl vector<vll>
#define pll pair<ll, ll>
#define vc vector
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define IOS ios_base::sync_with_stdio(0)
#define tie cin.tie(NULL), cout.tie(NULL)
vll tony_stark;
void pokemon_wala(ll n)
{
    for (long long i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            if (n / i == i)
                tony_stark.pb(i);
            else
                tony_stark.pb(i), tony_stark.pb(n / i);
        }
    sort(tony_stark.begin(), tony_stark.end());
}
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        tony_stark.clear();
        pokemon_wala(y);
        bool can = false;
        pll one, two;
        for (auto &i : tony_stark)
        {
            if (i <= y / i)
            {
                two = {i, y / i};
                one = {x - (i - 1), i - 1};
                if (one.fi <= one.se)
                {
                    can = true;
                    break;
                }
                one = {y / i + 1, x - (y / i + 1)};
                if (one.fi <= one.se)
                {
                    can = true;
                    break;
                }
            }
            else
                break;
        }
        if (can)
            cout << one.fi << " " << one.se << endl
                 << two.fi << " " << two.se << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
