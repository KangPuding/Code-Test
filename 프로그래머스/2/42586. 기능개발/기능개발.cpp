#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
std::vector<int> vResult{};

    int nCumulative = 0;
    int nBackUp = 0;

    for (int i = 0; i < progresses.size(); i++)
    {
        int nDay = 0;
        int nData = progresses[i];

        while (nData < 100)
        {
            nData += speeds[i];
            nDay++;
        }

        if (i == 0)
        {
            nBackUp = nDay;
            nCumulative++;
        }
        else if (nDay <= nBackUp)
            nCumulative++;
        else if (nDay > nBackUp)
        {
            vResult.push_back(nCumulative);
            nCumulative = 1;
            nBackUp = nDay;
        }
    }
    vResult.push_back(nCumulative);

    return vResult;
}