#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
	int nCount = -1000;
	int nResult{};

	while (answer.empty())
	{
		nResult = 0;
		int nTmp = nCount;
		for (int i = 0; i < num; i++)
		{
			nResult += nTmp;
			nTmp++;
		}

		if (nResult == total)
		{
			for (int i = 0; i < num; i++)
			{
				answer.push_back(nCount);
				nCount++;
			}
		}
		else
			nCount++;
	}

    
    return answer;
}