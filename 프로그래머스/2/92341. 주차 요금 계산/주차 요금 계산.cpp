#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string , vector<string>> parking;
    
    for (const auto& record : records) 
    {
        stringstream ss(record);
        string time = "";
        string carNum = "";
        string in_out = "";
        
        ss >> time;
        ss >> carNum;
        ss >> in_out;
        
        parking[carNum].push_back(time);    
    }
    
    for(auto & car : parking)
    {
        if(car.second.size() % 2 == 1)
            car.second.push_back("23:59");
        
        int nPtime = 0;
        int nIn_hour = 0;
        int nIn_min = 0;
        int nOut_hour = 0;
        int nOut_min = 0;
        
        for(int i = 0; i < car.second.size(); i++)
        {
            if(i % 2 == 0)
            {
                nIn_hour = stoi(car.second[i].substr(0,2));
                nIn_min = stoi(car.second[i].substr(3,2));
            }
            else
            {
                nOut_hour = stoi(car.second[i].substr(0,2));
                nOut_min = stoi(car.second[i].substr(3,2));
                
                if ((nOut_min - nIn_min) < 0)
                    nPtime += (nOut_hour - nIn_hour - 1) * 60 + (nOut_min - nIn_min + 60);
                else 
                    nPtime += (nOut_hour - nIn_hour) * 60 + (nOut_min - nIn_min);
                
            }
        }
        
        if (nPtime <= fees[0])
            answer.push_back(fees[1]);
        else 
        {
            int fee = fees[1] + ceil((double)(nPtime - fees[0]) / fees[2]) * fees[3];
            answer.push_back(fee);
        }

    }
    
    return answer;
}