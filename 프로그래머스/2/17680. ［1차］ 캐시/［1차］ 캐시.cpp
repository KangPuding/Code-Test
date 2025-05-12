#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    list<string> CityCache;
    
    for(int i = 0; i < cities.size(); i++)
    {
        string city = cities[i];
        transform(city.begin(), city.end(), city.begin(), ::tolower);
        
        int bFind = false;
        list<string>::iterator findIt = CityCache.end(); 
        
        for(auto it = CityCache.begin(); it != CityCache.end(); it++)
        {
            if(*it == city)
            {
                bFind = true;
                findIt = it;
            }
        }
        
        if(bFind)
        {
            CityCache.erase(findIt);
            CityCache.push_front(city);
            answer += 1;
        }
        else
        {
            if (cacheSize > 0 && CityCache.size() >= cacheSize)
            {
                CityCache.pop_back();        
            }

            if (cacheSize > 0)
            {
                CityCache.push_front(city);  
            }

            answer += 5;
        }
           
    }
    return answer;
}