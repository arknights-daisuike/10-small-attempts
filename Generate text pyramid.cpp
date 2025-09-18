#include <string>
#include <iostream>
using namespace std;

int main(){
    string a,c;
    int b;
    cout << "内容:";
    cin >> a;
    cout << "行数:";
    cin >> b;
    cout << "调整(用与内容同大小的,比如中字用'龍',英文用'*'):";
    cin >> c;
    
    for(int i = 0;i < b;++i)
    {
        
        for (int j = 0;j < (b-i-1);++j)
        {
            cout << c;
        }
        
        for (int k = 0;k < (i+1);++k)
        {
            cout << a;
        }
        
        for (int f = 0;f < (b-i-1);++f)
        {
            cout << c;
        }
        cout << "\n";
    }
    cout << "\n" << a;
    cin >> b;
    return 0;
}