#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    unordered_map<int, int> count;
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    
    if(count.size() == 1)
        return 1111* a;
    
    if (count.size() == 2)
    {
        vector<int> keys;
        vector<int> freq;

        for (const auto& [num, cnt] : count) 
        {
            keys.push_back(num);
            freq.push_back(cnt);
        }
        
        if(freq[0] == 3 || freq[1] == 3)
        {
            int p = 0;
            int q = 0;
            
            if(freq[0] == 3)
            {
                p = keys[0];
                q = keys[1];
            }
            else
            {
                p = keys[1];
                q = keys[0];
            }
            return pow(10 * p + q, 2);
        }
        return (keys[0] + keys[1]) * abs(keys[0] - keys[1]);
    }
    
    
    if(count.size() == 3)
    {
        int q = 0;
        int r = 0;
        
        for(const auto& [num, cnt] : count)
        {
            if(cnt == 1)
            {
                if(q == 0)
                    q = num;
                else
                    r = num;
            }
        }
        return q * r;
    }
        
    return min({a,b,c,d});
}