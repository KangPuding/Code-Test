#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    
    for(int i = 0; i < order.size(); i++){
        if(order[i].find("cafelatte") != string::npos)
            answer += 5000;
        else
            answer += 4500;
        
        // if(order[i] == "cafelatte" || order[i] == "cafelattehot" || order[i] == "hotcafelatte" 
        //    || order[i] == "icecafelatte" || order[i] == "cafelatteice")
        //     answer += 5000;
        // else 
        // answer += 4500;
    }
    return answer;
}