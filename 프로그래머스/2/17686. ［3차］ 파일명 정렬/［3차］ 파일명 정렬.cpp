#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> files) 
{
    vector<tuple<string, int, int>> bundle;
    
    for(int i = 0; i < files.size(); i++)
    {
        int nSize = files[i].size();
        int nIndex = 0;
        string sHead = "";
        int nNumber = 0;
        
        while(nIndex < nSize && !isdigit(files[i][nIndex]))
        {
            nIndex++;    
        }
        sHead = files[i].substr(0, nIndex);
        
        int nStartNum = nIndex; 
        while (nIndex < nSize && isdigit(files[i][nIndex]) && nIndex - nStartNum < 5) 
            nIndex++;
        
        nNumber = stoi(files[i].substr(nStartNum, nIndex - nStartNum));
        
        bundle.push_back({sHead, nNumber, i});
    }
    
    stable_sort(bundle.begin(), bundle.end(), [&](const auto& a, const auto& b) {
        string headA = get<0>(a);
        string headB = get<0>(b);
        int numA = get<1>(a);
        int numB = get<1>(b);

        transform(headA.begin(), headA.end(), headA.begin(), ::tolower);
        transform(headB.begin(), headB.end(), headB.begin(), ::tolower);

        if (headA != headB)
            return headA < headB;
        return numA < numB;
    });
    
    vector<string> answer;
    
   for (const auto& t : bundle)
   {
    int index = get<2>(t);
    answer.push_back(files[index]);
   }
    return answer;
}