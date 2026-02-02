#include <iostream>
using namespace std;

int N;
int x[100];         
bool cot[100];       
bool cheo1[200];     
bool cheo2[200];       
int dem = 0;

void backtrack(int i) {
    for (int j = 0; j < N; j++) {
        if (!cot[j] && !cheo1[i - j + N] && !cheo2[i + j]) {
            x[i] = j;
            cot[j] = true;
            cheo1[i - j + N] = true;
            cheo2[i + j] = true;

            if (i == N - 1) {
                dem++;
            } else {
                backtrack(i + 1);
            }
            cot[j] = false;
            cheo1[i - j + N] = false;
            cheo2[i + j] = false;
        }
    }
}

int main() {
    
    cin >> N;

    backtrack(0);

    cout << dem << endl;
    return 0;
}
