#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {

	std::queue<char> q;

	for (int i = 0; i < priorities.size(); i++) 
	{
		q.push(i);
	}
	
	int nOrder = 0;

	while (!q.empty())
	{
		int nCurrent = q.front();
		q.pop();

		bool bHigh = false;
		for (int i = 0; i < priorities.size(); i++)
		{
			if (priorities[i] > priorities[nCurrent])
			{
				bHigh = true;
			}
		}

		if (bHigh)
			q.push(nCurrent);
		else
		{
			nOrder++;
			priorities[nCurrent] = -1;

			if (nCurrent == location)
				return nOrder;
		}
	}

	return -1;
}