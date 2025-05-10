#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    int nA = common[0];
    int nB = common[1];
    int nC = common[2];
    
    if(nB - nA == nC - nB)
    {
        int nD = nB - nA;
        answer = common.back() + nD;
    }
    else 
    {
        int nR = nB / nA;
        answer = common.back() * nR;
    }
    
    return answer;
}