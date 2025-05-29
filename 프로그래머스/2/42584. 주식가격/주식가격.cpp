#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    
	vector<int> nResult(prices.size(), 0);
	vector<int> stack{};

	int nLength = prices.size();

	for (int i = 0; i < nLength; i++)
	{
		while (!stack.empty() && prices[i] < prices[stack.back()])
		{
			int nTopIndex = stack.back();
			stack.pop_back();
			nResult[nTopIndex] = i - nTopIndex;
		}
		stack.push_back(i);
	}

	for (int i = 0; i < nResult.size(); ++i)
	{
		if (nResult[i] == 0 && i != nLength - 1)
		{
			nResult[i] = nLength - i - 1;
		}
	}
    
    return nResult;
    }
