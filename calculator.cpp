#include <iostream>

using namespace std;

int choice, n, attempt = 0, maxAttempt = 5;
float num, num1, num2, result;

int main() {
    do {
        cout << "***************MENU******************" << endl;
        cout << "Enter 1 for Addition" << endl;
        cout << "Enter 2 for Substraction" << endl;
        cout << "Enter 3 for Multiplication" << endl;
        cout << "Enter 4 for Division" << endl;
        cout << "Enter 0 to Exit" << endl;
        cout << "*************************************" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        system("cls");//Only works on visual studio

        switch (choice) {
        case 1:{
            cout << "Enter Amount of numbers to Add: ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                cout << "Enter a Number: ";
                cin >> num;

                result += num;
            }
            cout << "Result: " << result << endl;
            break;
            system("pause");
        }
        case 2: {
            cout << "Enter Amount of numbers to Substract: ";
            cin >> n;

            cout << "Enter a Number: ";
            cin >> num1;

            for (int i = 1; i < n; i++) {
                cout << "Enter a Number: ";
                cin >> num;

                result = num1 - num;
                num1 = result;
            }
            cout << "Result: " << result << endl;
            break;
        }
        case 3: {
            cout << "Enter Amount of numbers to Multiply: ";
            cin >> n;

            cout << "Enter a Number: ";
            cin >> num1;

            for (int i = 1; i < n; i++) {
                cout << "Enter a Number: ";
                cin >> num;

                result = num1 * num;
                num1 = result;
            }
            cout << "Result: " << result << endl;
            break;
        }
        case 4: {
            cout << "Enter Amount of numbers to Divide: ";
            cin >> n;
            if (n >= 2) {
                cout << "Enter a Number: ";
                cin >> num1;

                for (int i = 1; i < n; i++) {
                    cout << "Enter a Number: ";
                    cin >> num2;

                    if (num2 != 0) {
                        result = num1 / num2;
                        num1 = result;
                    }
                    else {
                        cout << "ERROR::Can not divide by zero!" << endl;
                        break;
                    }
                }
                if(num2!=0)
                    cout << result << endl;
            }
            else
                cout << "Invalid Amount" << endl;
            break;
        }
        case 0: {
            cout << "Exiting the Program..." << endl;
            break;
        }
        default:
            attempt++;
            if (attempt >= maxAttempt) {
                cout << "Maximum Attempt Reached" << endl;
                cout << "Exitting Program..." << endl;
                choice = 0;

            }
            else {
                cout << "Invalid Choice" << endl;
            }
        }
    } while (choice != 0);


    system("pause");//works only on visual studio
    return 0;
}
