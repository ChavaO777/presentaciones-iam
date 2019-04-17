
#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <math.h>
#include <functional>
#include <sstream>
#include <cstring>
#include <set>
#include <stack>
#include <map>
#include <cstdio>
#include <algorithm>
#include <bitset>
using namespace std;

// Shortcuts for "common" data types in contests

#define rep(i, a, b) for (int i = a; i < b; i++)
#define S(x) scanf("%d", &x)
#define S2(x, y) scanf("%d %d", &x, &y)
#define P(x) printf("%d\n", x)
#define all(v) v.begin(), v.end()
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

#define INF 1000000000000LL

long long int fibo(long long int x){

    if(x <= 1)
        return x;

    return fibo(x - 1) + fibo(x - 2);
}

long long int auxFastFibo(long long int x, vector<long long int>& fiboVec){

    if(x <= 1)
        return fiboVec[x] = x;

    if(fiboVec[x] != -INF)
        return fiboVec[x];

    return fiboVec[x] = auxFastFibo(x - 1, fiboVec) + auxFastFibo(x - 2, fiboVec);
}

long long int fastFibo(long long int x){

    vector<long long int> fiboVec(x + 1, -INF);
    return auxFastFibo(x, fiboVec);
}

int main(){

    for(int i = 40; i <= 85; i += 5){

        clock_t tStart = clock();
        // cout<<"fibo("<<i<<") = "<<fibo(i)<<"\n";
        cout<<"fastFibo("<<i<<") = "<<fastFibo(i)<<"\n";
        printf("Time taken: %.10f seconds\n\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }

    return 0;
}