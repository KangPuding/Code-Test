#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(string dirs) {

    std::set<std::pair<std::pair<int,int>,std::pair<int,int>>> set;
    int nCount = 0;
    int X = 5;
    int Y = 5;
    int nX = 0;
    int nY = 0;


    for (int i = 0; i < dirs.length(); i++)
    {

        nX = X;
        nY = Y;

        char c = dirs[i];

        if (c == 'U' && 10 > nY)
            nY++;
        else if (c == 'D' && 0 < nY)
            nY--;
        else if (c == 'L' && 0 < nX)
            nX--;
        else if (c == 'R' && 10 > nX)
            nX++;


        std::pair<int, int> point1 = std::make_pair(X, Y);
        std::pair<int, int> point2 = std::make_pair(nX, nY);

        if (point2 < point1)
        {
            std::pair<int,int> tmp = point1;
            point1 = point2;
            point2 = tmp;
        }

        
        if (X != nX || Y != nY)
            set.insert(std::make_pair(point1, point2));

        X = nX;
        Y = nY;

    }
    return set.size();
}