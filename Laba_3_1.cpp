#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Input number for eight degree: ";
    int natural;
    while (!(cin >> natural)) {
        cout << "Pls try again" << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int degree_two = natural * natural;
    int degree_four = degree_two * degree_two;
    int degree_eight = degree_four * degree_four;
    cout << "Answer is: " << degree_eight << "\n";


    cout << "Input number for ten degree: " << "\n";
    int natural_10;
    while (!(cin >> natural_10)) {
        cout << "Pls try again" << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int degree_two_10 = natural_10 * natural_10;
    int degree_four_10 = degree_two_10 * degree_two_10;
    int degree_eight_10 = degree_four_10 * degree_four_10;
    int degree_ten = degree_eight_10 * degree_two_10;
    cout << "Answer is: " << degree_ten << "\n";


    cout << "Input number for thirteen: " << "\n";
    int natural_13;
    while (!(cin >> natural_13)) {
        cout << "Pls try again" << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int degree_two_13 = natural_13 * natural_13;
    int degree_four_13 = degree_two_13 * degree_two_13;
    int degree_eight_13 = degree_four_13 * degree_four_13;
    int degree_thirteen = degree_eight_13 * degree_four_13 * natural_13;

    cout << "Answer is: " << degree_thirteen << "\n";


    cout << "Input number for fifteen: " << "\n";
    int natural_15;
    while (!(cin >> natural_15)) {
        cout << "Pls try again" << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int degree_two_15 = natural_15 * natural_15;
    int degree_five_15 = degree_two_15 * degree_two_15 * natural_15;
    int degree_fifteen = degree_five_15 * degree_five_15 * degree_five_15;

    cout << "Answer is: " << degree_fifteen << "\n";



    cout << "Input number for twenty one: " << "\n";
    int natural_21;
    while (!(cin >> natural_21)) {
        cout << "Pls try again" << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int degree_three_21 = natural_21 * natural_21 * natural_21;
    int degree_seven_21 = degree_three_21 * degree_three_21 * natural_21;
    int degree_twenty_one = degree_seven_21 * degree_seven_21 * degree_seven_21;

    cout << "Answer is: " << degree_twenty_one << "\n";





    //Задание 2
    cout << "Ex 2" << endl;
    double P;
    cout << "Input perimeter of the triangle:" << endl;
    cin >> P;
    while (P <= 0) {

        cout << "The perimeter of a triangle must be greater than zero." << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> P;
    }
    double Area_triangle = (sqrt(3)*P*P)/36;
    cout << "Area of the triangle is: " << Area_triangle << '\n';



    //Задание 3
    cout << "Ex 3" << endl;
    double x1, x2, y1, y2;
    double Area_square;
    string u_a;
    cout << "Input x1, y1, x2, y2:" << '\n';
    while (!(cin >> x1 >> y1 >> x2 >> y2)) {
        cout << "Enter coordinates as real numbers " << '\n';
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Is this a side or a diagonal? (1 - side, 2 - diagonal", '\n' ;
    cin >> u_a;
    double dist = hypot(x2-x1, y2-y1);
        switch (u_a) {
            case 1: Area_square = (dist*dist)/2; cout << "Area of the square is: " << Area_square << '\n'; break;
                case 2: Area_square = dist*dist; cout << "Area of the square is: " << Area_square << '\n'; break;
                    default: cout << "Area of the square is(for diagonal): " << (dist*dist)/2 << " Area of the square is(for side): " << dist*dist << '\n'; break;
        }


}