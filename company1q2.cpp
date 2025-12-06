#include <bits/stdc++.h>
using namespace std;
int processScheduling(int n_intervals, int n_processes) {
    long modulo = 1000000007;
    long ans = n_processes;
    for(int i=1;i<n_intervals;i++){
      ans=(ans*(n_processes-1))%modulo;
    }
    return ans;
}
int main() {
    int m = 2;
    int n = 1;
    cout << processScheduling(m,n) << endl; // should print 0
    n=3;
    cout << processScheduling(m,n) << endl; // should print 6
    m=3;
    n=4;
    cout << processScheduling(m,n) << endl; // should print 36
    return 0;
}
