#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------------------" << endl;
    cout << "The Four-Function Calculator" << endl;
    cout << "------------------------------------\n" << endl;

    sub:
        char symbol; //Defining 'symbol' character for storing preferred operation
        int num1; //Defining integer for first number to be operated on
        int num2; //Defining integer for second number to be operated on

        /*
        Displaying options and asking for user's input
        */
        cout << "What operator would you like to use today?" << endl;
        cout << "+ : Addition" << endl;
        cout << "- : Subtraction" << endl;
        cout << "* : Multiplication" << endl;
        cout << "/ : Division\n" <<endl;
        cout << "Kindly input only the symbol for your preferred operation here: " << endl;
        cin >> symbol; //Operation is entered here
        cout << endl;

        cout << "Enter the first number you'd like to perform an operation on here: " << endl;
        cin >> num1; //First number is entered here
        cout << endl;

        cout << "Now, the second number: " << endl;
        cin >> num2; //Second number is entered here
        cout << endl;

        /*
        Clearing Screen and Initializing switch to handle operations
        */
        system("cls");
        switch(symbol)
        {
        case '+': //Addtion
            {
            int operation = num1 + num2;
            cout << "Your chosen operation and numbers yielded: " << operation << " ." << endl;
            break;
            }

        case '-': //Subtraction
            {
                int operation = num1 - num2;
                cout << "Your chosen operation and numbers yielded: " << operation << " ." << endl;
                break;
            }

        case '*': //Multiplication
            {
                int operation = num1 * num2;
                cout << "Your chosen operation and numbers yielded: " << operation << " ." << endl;
                break;
            }

        case '/': //Division
            {
                int operation = num1 / num2;
                cout << "Your chosen operation and numbers yielded: " << operation << " ." << endl;
                break;
            }

        default:
            {

                cout << "Your chosen operation is invalid. Please try again!" << endl;
                system("cls");
                goto sub;
                break;
            }
        }

    /*
    Asking for user's input to know if operation will be redone
    */
    int choice;
    cout << "Would you like to perform the operation again?" << endl;
    cout << "Input 1 for Yes and 0 for No" << endl;
    cin >> choice;

    if(choice == 0) //Exiting app after choosing no
    {
        cout << "Thank you for trying this out!" << endl;
        exit(EXIT_SUCCESS);
    }
    else //Restarting app
    {
        cout << "Alrighty!" << endl;
        system("cls");
        goto sub;
    }
}
