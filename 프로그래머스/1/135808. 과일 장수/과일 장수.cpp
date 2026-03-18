#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {


    sort(score.begin(), score.end(), std::greater<>());

    int nIndex = 0;
    int nSum = 0;
    while (nIndex < score.size())
    {
        if (nIndex + m <= score.size()) {
            if (score[nIndex + m - 1] > k)
                nSum += m * k;
            else
                nSum += m * score[nIndex + m - 1];
        }

        nIndex += m;
    }
    
    return nSum;
}