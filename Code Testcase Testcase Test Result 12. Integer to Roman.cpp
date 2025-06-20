#include<iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int values[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int n = sizeof(values)/sizeof(int) -1;
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int number = num;
        string roman = "";
        for(int i=n;i>=0;i--)
        {
           while(number>=values[i])
           {
                number -= values[i];
                roman += sym[i];
           }
        }
        return roman;
    }
};

int main()
{
    Solution obj;
    string ans = obj.intToRoman(3649);
    cout<<ans;
    return 0;
}
