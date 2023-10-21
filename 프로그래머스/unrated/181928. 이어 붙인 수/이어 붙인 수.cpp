#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd_str;  // 홀수를 저장할 문자열
    string even_str; // 짝수를 저장할 문자열

    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 1) {
            odd_str += to_string(num_list[i]);
        } else {
            even_str += to_string(num_list[i]);
        }
    }

    int odd_sum = (odd_str.empty() ? 0 : stoi(odd_str));
    int even_sum = (even_str.empty() ? 0 : stoi(even_str));

    return odd_sum + even_sum;
}
