#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    
    std::vector<int> weight {781, 156, 31, 6, 1};
    int nData = 0;
    int nCount = 0;

    for (int i = 0; i < word.length(); i++)
    {
        switch (word[i]) {
            case 'A' :
                nData = 0;
                break;
            case 'E' :
                nData = 1;
                break;
            case 'I' :
                nData = 2;
                break;
            case 'O' :
                nData = 3;
                break;
            case 'U' :
                nData = 4;
                break;
        }

        nCount += nData * weight[i] + 1;
    }
    
    return nCount;
}