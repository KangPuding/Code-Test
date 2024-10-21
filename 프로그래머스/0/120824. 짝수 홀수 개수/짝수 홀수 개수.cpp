#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int nRemainder{};
	int nOdd{};
	int nEven{};
    
    for (int i = 0; i < num_list.size(); i++)
    {
	    nRemainder = num_list[i] % 2;
	    if (nRemainder == 0)
		    nEven++;
	    else
		    nOdd++;
    }
    
    answer.push_back(nEven);
    answer.push_back(nOdd);
    
    return answer;
}