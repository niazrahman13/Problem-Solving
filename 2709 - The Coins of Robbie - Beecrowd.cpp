#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    optimize();

    int M, Gloria, total = 0;
    
    cin >> M;
    vector<int> arr(M);

    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }
    cin >> Gloria;

    int i = M - 1;=
    while (i >= 0) {
        total += arr[i];
        i -= Gloria; =
    }

    if (is_prime(total)) {
        cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
    } else {
        cout << "Bad boy! I’ll hit you." << endl;
    }

    return 0;
}
