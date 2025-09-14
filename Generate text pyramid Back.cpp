#include <string>
#include <iostream>
using namespace std;

int main(){
    string s,Adjustment;
    int high;
    cout << "内容:";
    cin >> s;
    cout << "行数:";
    cin >> high;
    cout << "调整(用与内容同大小的,比如中字用'龍',英文用'*'):";
    cin >> Adjustment;
    for (int i = 0; i < high; high--)
    {
        for (int i = 0 ; i < high ; i++)
        {
            cout << s; 
        }
        cout << "\n" ;
    }
    cin >> high;
    return 0 ;
}