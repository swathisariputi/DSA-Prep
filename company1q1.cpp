#include <bits/stdc++.h>
using namespace std;
int getMaximumTeamSize(vector<int> startTime, vector<int> endTime) {
    int n = startTime.size();
    sort(startTime.begin(), startTime.end());
    sort(endTime.begin(), endTime.end());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int processStartBeforeEnd = upper_bound(startTime.begin(), startTime.end(), endTime[i]) - startTime.begin();
        int processEndAfterStart = lower_bound(endTime.begin(), endTime.end(), startTime[i]) - endTime.begin();
        if (ans < (processStartBeforeEnd - processEndAfterStart)){
            ans = processStartBeforeEnd - processEndAfterStart;
        }
    }

    return ans;
}

int main() {
    vector<int> s = {2, 5, 6, 8};
    vector<int> e = {5, 6, 10, 9};
    cout << getMaximumTeamSize(s, e) << endl; // should print 3
    vector<int> s1 = {1,6,4,3,1};
    vector<int> e1 = {2,7,5,8,2};
    cout << getMaximumTeamSize(s1, e1) << endl; // should print 3
     vector<int> s2 = {1,2,8,8,10};
    vector<int> e2 = {4,8,12,9,11};
    cout << getMaximumTeamSize(s2, e2) << endl; // should print 4
    return 0;
}
