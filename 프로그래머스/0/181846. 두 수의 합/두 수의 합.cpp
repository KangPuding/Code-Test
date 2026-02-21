#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
   std::string Str{};

   reverse(a.begin(), a.end());
   reverse(b.begin(), b.end());

   int aSize = a.size();
   int bSize = b.size();

   int nMax{};
   int nIndex{};
   int nSum = 0;
   char cSum = '0';

   if (aSize > bSize)
      nMax = aSize;
   else
      nMax = bSize;

   char aChar{};
   char bChar{};

   while (nIndex < nMax)
   {
      if (aSize > nIndex)
         aChar = a[nIndex];
      else
         aChar = '0';

      if (bSize > nIndex)
         bChar = b[nIndex];
      else
         bChar = '0';

      if (cSum == '1')
      {
         nSum = aChar - '0' + bChar - '0' + 1;

         if (nSum > 9)
         {
            cSum = '1';
            nSum -= 10;
         }
         else
            cSum = '0';

         Str += std::to_string(nSum);
      }
      else if (cSum == '0')
      {
         nSum = aChar - '0' + bChar - '0';

         if (nSum > 9)
         {
            cSum = '1';
            nSum -= 10;
         }
         else
            cSum = '0';

         Str += std::to_string(nSum);
      }
      nIndex++;
   }

   if (cSum == '1')
      Str += "1";

   reverse(Str.begin(), Str.end());

   for (int i = 0; i < Str.size(); i++)
      printf("%c", Str[i]);

    return Str;
}