#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    
    std::stringstream ss(my_string);
    
    int nReuslt{};
    int nSecond{};
    char nCommand{};

    ss >> nReuslt;

    while (ss)
    {
        if (nCommand == '+')
            nReuslt += nSecond;
        else if (nCommand == '-')
            nReuslt -= nSecond;
    
        ss >> nCommand >> nSecond;
     }

    return nReuslt;
    
}