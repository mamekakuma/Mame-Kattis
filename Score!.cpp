// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cases, homePt = 0, awayPt = 0, lastSec = 0, point;
    int homeWinTime = 0, awayWinTime = 0, duration, idx;
    bool homeLeads = 0, awayLeads = 0;
    char scorer;
    string time;
    cin >> cases;
    while (cases--)
    {
        cin >> scorer >> point >> time;
        idx = time.find(':');
        // cout << "idx = " << idx << "\n"  << time.substr( 0, idx ) <<" " <<time.substr(idx + 1) << "\n" ;
        duration = stoi(time.substr(0, idx)) * 60 + stoi(time.substr(idx + 1));

        (scorer == 'H') ? homePt += point : awayPt += point;
        if (homeLeads)
            homeWinTime += (duration - lastSec);

        else if (awayLeads)
            awayWinTime += (duration - lastSec);

        if (homePt > awayPt)
        {
            homeLeads = true;
            awayLeads = false;
        }
        else if (homePt < awayPt)
        {
            homeLeads = false;
            awayLeads = true;
        }
        else
        {
            homeLeads = false;
            awayLeads = false;
        }
        lastSec = duration;
    }
    // cout << homePt << " pts " << awayPt << "\n";
    (homeLeads) ? homeWinTime += (1920 - lastSec) : awayWinTime += (1920 - lastSec);
    cout << ((homeLeads) ? "H " : "A ");
    int homeSec = homeWinTime % 60, awaySec = awayWinTime % 60;
    cout << homeWinTime / 60 << ":";
    if (homeSec > 9)
        cout << homeSec;
    else
        cout << "0" + to_string(homeSec);
    cout << " " << awayWinTime/60 << ":" ;
    if (awaySec > 9)
        cout << awaySec;
    else
        cout << "0" + to_string(awaySec);
}