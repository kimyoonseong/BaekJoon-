#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[101];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int student;
    cin >> student;  
    
    for (int i = 0; i < student; i++) {
        int gender, num;
        cin >> gender >> num;

        // 남학생
        if (gender == 1) {
            for (int j = num; j <= n; j += num) {
                arr[j] = 1 - arr[j];
            }
        }
        // 여학생
        else {
            int left = num;
            int right = num;

            while (left - 1 >= 1 && right + 1 <= n && arr[left - 1] == arr[right + 1]) {
                left--;
                right++;
            }

            for (int j = left; j <= right; j++) {
                arr[j] = 1 - arr[j];
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
        if (i % 20 == 0) cout << '\n';
    }

    return 0;
}