#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char mas[] = {'a','a','a','b','b','a','s','a','s','a','z','l','a',};
    char bit[13];

    for(int i = 0; i < 13; i ++){
        if(mas[i] == 'a'){
            bit[i] = '1';
        }
        else bit[i] = '0';
        cout << bit[i];
    }


    return 0;
}
