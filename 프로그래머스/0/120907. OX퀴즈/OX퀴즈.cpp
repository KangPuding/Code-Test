#include <string>
#include <vector>
#include<sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
        vector<string> answer;
    
    for(int i = 0; i < quiz.size(); i++)
    {
        stringstream ss(quiz[i]);
        int nFirst = 0;
        int nSecond = 0;
        int nThird = 0;
        char cOperator;
        char cEqual;
        
        ss >> nFirst >> cOperator >> nSecond >> cEqual >> nThird;
        
        int nResult = 0;
        if(cOperator == '+')
            nResult = nFirst + nSecond;
        else
            nResult = nFirst - nSecond;
        
        if(nResult == nThird)
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}