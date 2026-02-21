#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    
   int nMax{};
    int nMin{};
    int nIndex{};

    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());

    std::string sResult = "";
    std::string sSum ="0";

    if (bin1.size() > bin2.size()) {
        nMax = bin1.size();
        nMin = bin2.size();
    }
    else {
        nMax = bin2.size();
        nMin = bin1.size();
    }

    while (nMax > nIndex) {

        char a;
        char b;

        if (nIndex < bin1.size())
            a = bin1[nIndex];
        else
            a = '0';

        if (nIndex < bin2.size())
            b = bin2[nIndex];
        else
            b = '0';

        if (sSum == "1")
        {
            if (a == '1' && b =='1')
            {
                sSum = "1";
                sResult += '1';
            }
            else if ((a == '0' && b == '1') || a == '1' && b == '0')
            {
                sSum = "1";
                sResult += '0';
            }
            else
            {
                sSum = "0";
                sResult += '1';
            }
        }
        else if (sSum == "0")
        {
            if (a == '1' && b == '1')
            {
                sSum = "1";
                sResult += '0';
            }
            else if ((a == '0' && b == '1') || a == '1' && b == '0')
            {
                sSum = "0";
                sResult += '1';
            }
            else
            {
                sSum = "0";
                sResult += '0';
            }
        }

        nIndex++;
    }

    if (sSum == "1")
        sResult += "1";

    reverse(sResult.begin(), sResult.end());

    for (int i = 0; i < sResult.size(); i++) {
        printf("%c", sResult[i]);
    }
    return sResult;
}