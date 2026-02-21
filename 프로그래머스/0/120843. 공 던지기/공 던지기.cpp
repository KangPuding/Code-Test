#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    int nIndex = 0;
    int nSize = numbers.size();
    
    for(int i = 0; i < k - 1; i++)
    {
        nIndex += 2;
        if(nSize < nIndex)
            nIndex = nIndex - nSize ;
    }
    
    return numbers[nIndex];
}