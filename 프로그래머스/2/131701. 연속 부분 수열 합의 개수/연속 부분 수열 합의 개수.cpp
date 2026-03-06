#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    std::vector<int> copy_elements = elements;
    copy_elements.insert(copy_elements.end(), elements.begin(), elements.end());

    int n = 1;
    std::set<int> set;

    while (n - 1< elements.size())
    {
        int nFront = 0;
        int nRear = n;

        while (nRear < copy_elements.size())
        {
            int nSum = 0;
            for (int i = nFront; i < nRear; i++)
            {
                nSum += copy_elements[i];
            }
            auto it = set.insert(nSum);

            nFront++;
            nRear++;
        }
        n++;
    }
        
        return set.size();
}