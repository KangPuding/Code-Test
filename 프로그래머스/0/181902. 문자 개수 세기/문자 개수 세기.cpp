#include <string>
#include <vector>


std::vector<int> solution(std::string my_string) {

    std::vector<int> answer;
    char cAlpha = 'A';

    while (cAlpha < 123) {
        int nCheck = 0;
        if (cAlpha == 91)
            cAlpha = 97;

        for (char c : my_string) {
            if (c == cAlpha)
                nCheck++;
        }
        answer.push_back(nCheck);
        cAlpha++;
    }
    
        return answer;
}