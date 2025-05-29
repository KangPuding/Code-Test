#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> prices) {
    
	vector<int> vResult(prices.size(), 0);
	vector<int> stack{};

	int nLength = prices.size();

	for (int i = 0; i < nLength; i++)
	{
		while (!stack.empty() && prices[i] < prices[stack.back()])
		{
			int nTopIndex = stack.back();
			stack.pop_back();
			vResult[nTopIndex] = i - nTopIndex;
		}
		stack.push_back(i);
	}

	for (int i = 0; i < vResult.size(); ++i)
	{
		if (vResult[i] == 0 && i != nLength - 1)
		{
			vResult[i] = nLength - i - 1;
		}
	}
    
    return vResult;
    }

// 실패한 코드 (o(n^2))
// 이유 : queue를 매번 복사를 진행함 그렇기에 효율성이 떨어짐
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//
//
//int main()
//{
//	std::vector<int> prices{ 1, 2, 1, 2, 1 };
//	std::vector<int> nResult{};
//	int nIndex{};
//
//	while (nIndex < prices.size())
//	{
//		std::queue<int> Que{};
//		for (int i = nIndex + 1; i < prices.size(); i++)
//		{
//			Que.push(prices[i]);
//		}
//
//		int nCount{};
//		int nFirst = prices[nIndex];
//
//		while (!Que.empty())
//		{
//			int nCurrent = Que.front();
//			Que.pop();
//			nCount++;
//
//			if (nCurrent < nFirst)
//			{
//				while (!Que.empty())
//					Que.pop();
//			}
//		}
//		nResult.push_back(nCount);
//		printf("%d ", nCount);
//		nIndex++;
//	}
//}