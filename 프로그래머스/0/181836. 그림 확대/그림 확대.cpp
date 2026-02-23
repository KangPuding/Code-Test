#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    
        std::vector<std::string> Result{};

        for (int i = 0; i < picture.size(); i++)
        {
            std::string Str{};
            for (int j = 0 ; j < picture[i].size(); j++)
            {
                for (int n = 0; n < k; n++)
                    Str += picture[i][j];
            }

            for (int m = 0; m < k; m++)
                Result.push_back(Str);
        }
    
    return Result;
}