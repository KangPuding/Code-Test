#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    
    std::vector<std::string> vResult{};

    for (int i = 0; i < quiz.size(); i++) {
        std::stringstream ss(quiz[i]);
        std::string sFirst{};
        std::string sSecond{};
        std::string sResult{};
        std::string sSign{};
        std::string sSign2{};

        ss >> sFirst >> sSign >> sSecond >> sSign2 >>sResult;
        
        if (sSign == "+") 
        {
           if (stoi(sResult) == stoi(sFirst) + stoi(sSecond))
               vResult.push_back("O");
            else
                vResult.push_back("X");
        }
        else if (sSign == "-") 
        {
            if (stoi(sResult) == stoi(sFirst) - stoi(sSecond))
                vResult.push_back("O");
            else
                vResult.push_back("X");
        }
    }
    
    return vResult;
}