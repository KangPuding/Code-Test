#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int nIndex = 0;
    int nCount = 0;
    
    sort(d.begin(), d.end(), less<int>());

    while(nIndex < d.size() && answer + d[nIndex] <= budget)
    {
        answer += d[nIndex];
        nIndex++;
        nCount++;
    }
    
    return nCount;
}