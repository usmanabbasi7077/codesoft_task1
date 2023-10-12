#include <iostream>

using namespace std;

int main()
{
    int num1 , num2;
    char op;

    cout << "ENTER YOUR FIRST NUMBER: ";
    cin >> num1;

    cout << "ENTER THE OPERATOR: ";
    cin >> op;

    cout <<"ENTER YOUR SECOND NUMBER: ";
    cin >> num2;

    int result;
    if (op == '+'){
        result = num1 + num2 ;}

    else if (op == '-'){result = num1 - num2;}

    else if (op == '*'){result = num1 * num2;}

    else if (op == '/'){result = num1 / num2;}

    else {cout << "INVALID OPERATOR";}

    cout << result;

        return 0;




}
