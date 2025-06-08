#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    set<int> lostSet(lost.begin(), lost.end());
    set<int> reserveSet(reserve.begin(), reserve.end());
    
    vector<int> both;
    for(int i : lost)
    {
        if(reserveSet.find(i) != reserveSet.end())
            both.push_back(i);
    }
    
    for (int i : both) {
        lostSet.erase(i);
        reserveSet.erase(i);
    }
    
    vector<int> sortedLost(lostSet.begin(), lostSet.end());
    sort(sortedLost.begin(), sortedLost.end());
    
    for (int l : sortedLost) 
    {
        if (lostSet.find(l) != lostSet.end()) 
        {
            int prev = l - 1;
            int next = l + 1;

            if (reserveSet.find(prev) != reserveSet.end()) 
            {
                reserveSet.erase(prev);
                lostSet.erase(l);
            } 
            else if (reserveSet.find(next) != reserveSet.end()) 
            {
                reserveSet.erase(next);
                lostSet.erase(l);
            }
        }
    }
    
    return n - lostSet.size();
}