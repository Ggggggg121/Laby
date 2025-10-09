#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return (x-1) * (x-1);
}


int main() {
    int natural;
    cout << "Enter a natural number: ";
    int numeric_1,numeric_2,numeric_3,numeric_4;
    int sum = 0;
    int multiplication_number = 1;
    // cout << (natural%1000)/100 << endl;
    while (1){
    while (!(cin >> natural)) {
        cout << "Is incorrectable number" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;

        }
        if (natural >= 1000 && natural <= 9999) {
            cout << "Correct" << endl;
                break;
    }
}
    numeric_1 = natural % 10;
    numeric_2 = (natural % 100)/10;
    numeric_3 = (natural % 1000)/100;
    numeric_4 = natural/1000;
    bool eq = 0;
    int arr_numeric[] = {numeric_1, numeric_2, numeric_3, numeric_4};
    for (int i = 0; i < 4; i++) {
        int eq_numb;
        if (arr_numeric[i] == arr_numeric[i+1] || arr_numeric[i] == arr_numeric[i+2] || arr_numeric[i] == arr_numeric[i+3] ) {
            eq = 1;
            sum += arr_numeric[i];
            multiplication_number *= arr_numeric[i];
        }
    }

    // if (multiplication_number > max) {

    // }
    // if (max == natural) cout << "Number is max of multiplication and number: " << endl;
    cout << "Question 2:" << endl; // мой вариант!!!!
    if (natural % sum == 0) cout << "Correct" << endl;
    else cout << "Wrong" << endl;
    // cout << "Question 3:" << endl;
    // if (10 <= sum <=99) cout << "Yes" << endl;
    // else cout << "No" << endl;
    // cout << "Question 4:" << endl;
    // if (numeric_1 == numeric_2 && numeric_2 == numeric_3 && numeric_3 == numeric_4) cout << "Correct" << endl;
    // else cout << "Wrong" << endl;
    // cout << eq << endl;





//Ex.2
    double x,y;
    cin >> x >> y;
    double pi = M_PI;
    double MIN,max,max_d,min;
    min = (pi < y) ?  pi : y;
    max = (pi > y) ? pi : y;
    MIN = (min < max) ? min : max;
    max_d = (sin(x) > cos(y)) ? min : max;
        cout << MIN/max_d << endl;









//Ex.3
    double x1,y1;
    cin >> x1 >> y1;
    if ( y1 > f(x1)) cout << "In parabola" << endl;
    else cout << "Outside parabola" << endl;
    (1 < x1 <5 && 1 < y1 < -3) ? cout << "In circle " : cout << "outside circle " << endl;
    (y1 == 2 * x1 + 1) ? cout << "On linear func." << endl : cout << "Outside linear func" << endl;






    }


