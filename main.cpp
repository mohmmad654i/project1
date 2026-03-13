#include <iostream>
using namespace std;
void evenodd(){

    int i;
    float x;
    float sum = 0;
    int m = 1;

    char H;

    while (true) {
        cout << "please enter a number : ";
        cin >> x;
        cout << "\n\n";
        cout << "if you want the sum of even numbers press 'E' or 'e'.\n";
        cout << "if you want the sum of odd numbers press 'O' or 'o'.\n";
        cin >> H;

        if (H == 'E' || H == 'e') {
            sum = 0;
            i = 0;
            while (x >= i) {
                if (i % 2 == 0) {
                    sum = sum + i;
                }
                i++;
            }
            cout << "SUM :" << sum << endl;
            break;
        }
        else if (H == 'O' || H == 'o') {
            sum = 0;
            i = 0;
            while (x >= i) {
                if (i % 2 == 1) {
                    sum = sum + i;
                }
                i++;
            }
            cout << "SUM :" << sum << endl;
            break;
        }
    }
}

int main (){


evenodd();







        








        system("pause");
        return 0;
}
