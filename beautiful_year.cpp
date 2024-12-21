// Link: https://codeforces.com/problemset/problem/271/A

#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    
    // --- Update ---
    bool flag = true;
    int mask, last_digit, temp_year, bit;

    while (flag)
    {
        year++;

        temp_year = year;
        mask = 0;
        flag = false;

        while (temp_year)
        {
            last_digit = temp_year % 10; 
            bit = (1 << last_digit); 

            if (mask & bit)
            {
                flag = true;
                break;
            }

            temp_year /= 10;
            mask |= bit;
        }
    }

    cout<<year<<endl;
    
    return 0;
}
