#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int nIndex = 0;
    int nCount = 0;
    int nSum = 0;
    sort(d.begin(), d.end());

    while (nIndex < d.size())
    {
        int n{};
        for (int i = nIndex; i < d.size(); i++)
        {
            if (nSum + d[i] <= budget)
            {
                nSum += d[i];
                n++;
            }
        }

        if (nCount < n)
            nCount = n;
        nIndex++;
    }
    
    return nCount;
}