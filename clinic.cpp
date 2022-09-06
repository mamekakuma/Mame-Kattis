#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define int long long
class prior
{
public:
    bool operator()(const pair<int, string> &x, const pair<int, string> &y)
    {
        if (x.f == y.f)
            return x.s > y.s;
        return x.f < y.f;
    }
};
#undef int
int main()
{
#define int long long
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int queries, k, cmd, severity, arrTime, currenTime, temp;
    string name;
    unordered_map<string, int> left;
    cin >> queries >> k;
    priority_queue<pair<int, string>, vector<pair<int, string>>, prior> line;
    while (queries--)
    {
        cin >> cmd;
        if (cmd == 1)
        {
            cin >> arrTime >> name >> severity;
            if( left[ name ] > 0 )
                left[name] = 0 ;
            
            temp = (severity - arrTime * k);
            line.push({temp, name});
        }
        else if (cmd == 2)
        {
            cin >> currenTime;
            
            while( !line.empty() and left[line.top().second])
                line.pop();

            if (!line.empty())
            {
                cout << line.top().s << "\n";
                line.pop();
            }
            else
                cout << "doctor takes a break\n";
    
        }

        else
        {
            cin >> currenTime >> name;
            left[name]++;
        }
    }
}