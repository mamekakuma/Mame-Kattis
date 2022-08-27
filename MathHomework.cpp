// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int leg1, leg2, leg3, totLeg , l1 , l2 , l3 , sum ;
    cin >> leg1 >> leg2 >> leg3 >> totLeg;
    vector< tuple< int , int , int > > res ;
    for (int i = 0; i <= totLeg; i++)
    {
        for (int j = 0; j <= totLeg; j++)
        {
                l1 = i*leg1 ; 
                l2 = j*leg2 ;
                 sum = (l1+l2) ;;
                 if(sum > totLeg)
                    continue ;   
                l3 =  totLeg - sum  ;
            if( l3 % leg3 == 0 )
                res.push_back( make_tuple( l1/leg1 , l2/leg2 , l3/leg3 ) ) ;
        }
    }
    sort( res.begin() , res.end() );
    if( res.empty() )
        cout << "impossible\n" ;
    else
    for(auto itr : res )
        cout << get<0>(itr) << " " << get<1>(itr) << " " << get<2>(itr) << "\n" ;
}