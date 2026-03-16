#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    std::vector<int> student1 {1, 2, 3, 4, 5};
    std::vector<int> student2 {2, 1, 2, 3, 2, 4, 2, 5};
    std::vector<int> student3 {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int nStudent1 = 0;
    int nStudent2 = 0;
    int nStudent3 = 0;

    for (int i = 0; i < answers.size(); i++)
    {
        if (student1[i % student1.size()] == answers[i])
            nStudent1++;
        if (student2[i % student2.size()] == answers[i])
            nStudent2++;
        if (student3[i % student3.size()] == answers[i])
            nStudent3++;
    }

    std::vector<int> vResult{};
    int nMax =std::max(std::max(nStudent1, nStudent2), nStudent3);

    if (nMax == nStudent1)
        vResult.push_back(1);
    
    if (nMax == nStudent2)
        vResult.push_back(2);
    
    if (nMax == nStudent3)
        vResult.push_back(3);
    
    return vResult;
}