#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return (x-1) * (x-1);
}

string left_right_p(double x, double y) {
  string p_l_r;
    if ( y < f(x) && x < 1 ) p_l_r = "left of parabolla";
    else if( y < f(x) && x > 1 ) p_l_r = "right of parabolla";
    return p_l_r + '\n';
}


string right_left_l(double x, double y) {
    string p_r_l;
    if (y != 2 * x + 2 && x < -1) p_r_l = "left of line";
    else if( y != 2 * x + 2 && x > -1 ) p_r_l = "right of line";
    else if ( y == 2 * x + 2 ) p_r_l = "In line";
    return p_r_l + '\n';
}


string right_left_c(double x, double y) {
    string p_r_c;
    double dist = (x - 2)*(x - 2) + (y - 2)*(y - 2);
    if (dist < 4) p_r_c = "In circle";
        else if (dist == 4) p_r_c = "On circle";
        else if ( dist > 4 && x > 0 && y < 0 ) p_r_c = "right and down of circle";
        else if ( dist > 4 && x > 0 && y > 0 ) p_r_c = "right and upper of circle";
        else if ( dist > 4 && x < 0 && y < 0 ) p_r_c = "left and down of circle";
        else if ( dist > 4 && x < 0 && y > 0 ) p_r_c = "left and upper of circle";
        else if ( dist > 4 && x > 0 && y == 0 ) p_r_c = "right of circle";
        else if ( dist > 4 && x < 0 && y == 0 ) p_r_c = "left of circle";
    return p_r_c + '\n';
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
    double min_summary,max,max_downer,min;
    min = (pi < y) ?  pi : y;
    max = (y > x) ? y : x;
    min_summary = (min < max) ? min : max;
    max_downer = (sin(x) > cos(y)) ? sin(x): cos(y);
        cout << min_summary/max_downer << endl;









//Ex.3
    double x1,y1;
    cin >> x1 >> y1;
    cout << left_right_p(x1,y1);
    cout << right_left_l(x1,y1);
    cout << right_left_c(x1,y1) << endl;






    }


