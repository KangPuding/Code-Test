#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    std::vector<int> vResult(numbers.size(), -1);
    std::stack<int> st;

    for (int i = 0; i < numbers.size(); i++) {
        while (!st.empty() && numbers[st.top()] < numbers[i])
        {
            vResult[st.top()] = numbers[i];
            st.pop();
        }
        st.push(i);
    }
    
    return vResult;
}