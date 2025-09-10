#include <iostream>
using namespace std;

int main() {
    // 推导斐波那契数列
    int x = 1,y = 1;
    int b;
    cout << "Type a number:";
    cin >> b;
    for (size_t i = 0; i < b; i++)
    {
        int n = x;
        x = x+y;
        y = n;
        cout << x << "\n" ;
    }
    int a;
    cout << "回车以结束程序:";
    cin >> a;
}