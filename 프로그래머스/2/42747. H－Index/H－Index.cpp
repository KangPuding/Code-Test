#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {

    int nLen = citations.size();
    int h = 0;
    int nResult = 0;
    
    sort(citations.begin(), citations.end());
    
    while(h <= nLen)
    {
        int nHcount = 0;
        for(int i = 0 ; i < nLen; i++)
        {
            if(h <= citations[i])
                nHcount++;
        }
        
        if(h <= nHcount)
            nResult = h;
        
        h++;
    }

    
    return nResult;
}