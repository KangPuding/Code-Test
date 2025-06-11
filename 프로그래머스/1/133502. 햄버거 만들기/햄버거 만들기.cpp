#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> Hamburger;
    
    for(int i = 0; i < ingredient.size(); i++)
    {
        Hamburger.push_back(ingredient[i]);
        
        if(Hamburger.size() >= 4)
        {
            int nHsize = Hamburger.size();
            
            if(Hamburger[nHsize - 4] == 1 && Hamburger[nHsize - 3] == 2 && Hamburger[nHsize - 2] == 3 && Hamburger[nHsize - 1] == 1)
            {
                for(int i = 0; i < 4; i++)
                    Hamburger.pop_back();
                
                answer++;
            }
        }

    }
    return answer;
}


// 되기는 하는데 시간 초과뜸 ㅇㅇ 
//int solution(vector<int> ingredient) {
//    int answer = 0;
//    int nIndex = 0;
//    
//    while(nIndex < ingredient.size())
//   {
//        int i = nIndex;
//        if(nIndex + 3 <= ingredient.size() && ingredient[i] == 1 && ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1)
//        {
//            ingredient.erase(ingredient.begin() + nIndex, ingredient.begin() + nIndex + 4);
//            nIndex = 0;
//            answer++;
//        }
//        else
//            nIndex ++;
//    }
//    return answer;
//}