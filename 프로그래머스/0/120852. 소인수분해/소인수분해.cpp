#include <string>
#include <vector>
#include <unordered_set>


std::vector<int> solution(int n) {
    int nQ = 2;
    std::vector<int> answer;
    std::unordered_set<int> answerSet;

    while (n >= nQ) {
        if (n % nQ == 0) {
            n = n / nQ;
            if (answerSet.find(nQ) == answerSet.end()) {
                answerSet.insert(nQ);
                answer.push_back(nQ);
            }
        }
        else if (n % nQ != 0)
            nQ++;
    }

    for (int i = 0; i < answer.size(); i++) {
        printf("%d", answer[i]);
    }
    
    return answer;
}