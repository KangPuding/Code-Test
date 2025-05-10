#include <string>
#include <vector>

using namespace std;

bool allZero(const vector<int>& vec) {
    for (int x : vec) {
        if (x != 0)
            return false;
    }
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    
    int nCount = 0;
    
    for (int nStart = 0; nStart <= discount.size() - 10; nStart++) 
    {
        vector<int> temp = number;
        for(int n = nStart; n < nStart + 10; n++)
        {
            for(int i = 0; i < want.size(); i++)
            {
                if(discount[n] == want[i])
                {
                    temp[i]--;
                }
            }
        }
        
        if(allZero(temp))
            nCount++;
    }
    return nCount;
}