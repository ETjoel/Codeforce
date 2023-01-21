#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double n, m, a;
    cin >> n>> m>>a;
    long double side1 = n / a;
    long double side2 = m / a;
    long long int ans1 = ceil(side1), ans2 = ceil(side2);
    
    cout << ans1 * ans2;
    return 0;
}
