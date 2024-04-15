#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int S, H;
int sosege(int so, int hu){
    if(so > hu) swap(so, hu);
    while(so > 0){
        int temp = hu % so;
        hu = so;
        so = temp;
    }
    return hu;
}
int main(){
    cin >> S >> H;
    cout << H - sosege(S, H);
}