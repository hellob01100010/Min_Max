#include <iostream>
using namespace std;
int main()
{
    int i,min,max,n,a;
    min = 2000000000; max = -2000000000;
    cin >> a;
    for (i = 1; i <= a; i++) {
        cin >> n ;
        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }
    cout << min << endl;
    cout << max;

}