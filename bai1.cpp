#include <iostream>

using namespace std;

int main()
    int n, sum;
    cin >> n;
    sum = 0;
    for (int i=0; i<=n; i++){
        sum += i;

    }
    if (sum % 10 == 0){
        cout << "tong chia het cho 10";
    }
    return 0;
}
