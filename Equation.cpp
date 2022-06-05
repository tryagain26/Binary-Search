#include<bits/stdc++.h>
using namespace std;
typedef long double ld;

bool ok(ld x, ld c){
    ld res =  (x*x) +sqrt(x);
    return res >= c;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ld c;
    cin >> c;
    ld l = 0, r = c;
    for(int i = 0; i < 60; i++){
        ld mid = l + (r-l)/2;
        if(ok(mid, c)){
            r = mid;
        }else{
            l = mid;
        }
    }

    cout << setprecision(10) << r << endl;
    return 0;

}
