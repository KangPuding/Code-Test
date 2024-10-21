#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {

	double nResult{};

	for (int i = 0; i < numbers.size(); i++)
	{
		nResult += numbers[i];
	}

    nResult /= numbers.size();
        
	return nResult;
}