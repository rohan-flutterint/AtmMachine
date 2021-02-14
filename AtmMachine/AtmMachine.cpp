#include< iostream>
#include<fstream>
using namespace std;
void printstar(char ch, int n);
double balance1;
int main()
{
    system("color 9D");
    cout << "\n\t\t    =========================================" << endl;
    cout << "\t\t    =========================================" << endl;
    cout << "\t\t          ||   WELCOME TO ATM MACHINE   ||" << endl;
    cout << "\t\t    =========================================" << endl;
    cout << "\t\t    ========================================\n\n" << endl;
    printstar('*', 80);
    int password;
    int pincode;
    cout << "      **************  PASSWORD FOR Rohan     IS 5555   **************\n";
    cout << "      **************  PASSWORD FOR KUMAR    IS 6666   ************** \n";
    cout << "      **************  PASSWORD FOR DUBE     IS 7777   ************** \n";
    cout << "      **************  PASSWORD FOR MAN  IS 8888   ************** \n\n\n";
    printstar('&', 80);
    for (int i = 1; i <= 10; i++)
    {
        if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9 || i == 10)
        {
            cout << "\n\nWELCOME AGAIN  \n\t\t\t\tMAIN PAGE \n";
        }
        cout << "PLEASE ENTER THE PINCODE\n";
        cin >> pincode;
        system("cls");
        if (pincode == 1111)
        {
            cout << "\n WELCOME Rohan \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "enter password:\n";
                cin >> password;
                double balance = 10000;
                
                ifstream infile;
                infile.open("User1.txt");
                if (infile.fail()) {
                    infile.close();
                    ofstream outfile;
                    outfile.open("User1.txt");
                    outfile << balance;
                    outfile.close();
                }
                else {
                    ifstream infile;
                    infile.open("User1.txt");
                    infile >> balance1;
                    infile.close();

                }
                //balance1 = balance;
                if (password == 5555)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "\t\t *** Automated Teller Machine ***" << endl;
                            cout << "\nChoose a Transaction:\n\n";
                        }
                        printstar('%', 80);
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:

                        {ifstream infile;
                        infile.open("User1.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is RS " << balance1 << endl;
                            continue;
                        case 2:
                        {ifstream infile;
                        infile.open("User1.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in Rupees: ";
                            cin >> withdraw;
                            balance1 = balance1 - withdraw;
                            cout << "You withdrew RS: " << withdraw << endl;
                            cout << "Your remaining balance is RS: " << balance1 << endl;

                        {ofstream outfile;
                        outfile.open("User1.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 3:
                        {ifstream infile;
                        infile.open("User1.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount in RS: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited RS: " << deposit << endl;
                            cout << "Your new balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User1.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 4:
                            cout << "\n***[[[% EXIT MODE %]]]***\n";
                            system("cls");
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option: \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                else if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        if (pincode == 2222)
        {
            cout << "\n WELCOME Kumar \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "enter password:\n";
                cin >> password;
                double balance = 52000;
                ifstream infile;
                infile.open("User2.txt");
                if (infile.fail()) {
                    infile.close();
                    ofstream outfile;
                    outfile.open("User1.txt");
                    outfile << balance;
                    outfile.close();
                }
                else {
                    ifstream infile;
                    infile.open("User2.txt");
                    infile >> balance1;
                    infile.close();

                }
                if (password == 6666)
                {
                    for (int i = 1; i <= 10; i++)
                    {

                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {

                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;

                        switch (option)
                        {
                        case 1:

                        {ifstream infile;
                        infile.open("User2.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is RS: " << balance1 << endl;
                            continue;
                        case 2:
                        {ifstream infile;
                        infile.open("User2.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount RS: ";
                            cin >> withdraw;
                            balance1 = balance1 - withdraw;
                            cout << "You withdrew RS: " << withdraw << endl;
                            cout << "Your remaining balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User2.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 3:
                        {ifstream infile;
                        infile.open("User2.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount RS: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited RS" << deposit << endl;
                            cout << "Your new balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User2.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 4:
                            cout << "\n***[[[EXIT MODE]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option:\n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        else if (pincode == 3333)
        {
            cout << "\n Wellcome Dube \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Please enter password:\n";
                cin >> password;
                double balance = 10000;
                ifstream infile;
                infile.open("User3.txt");
                if (infile.fail()) {
                    infile.close();
                    ofstream outfile;
                    outfile.open("User3.txt");
                    outfile << balance;
                    outfile.close();
                }
                else {
                    ifstream infile;
                    infile.open("User3.txt");
                    infile >> balance1;
                    infile.close();

                }
                if (password == 7777)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:
                        {ifstream infile;
                        infile.open("User3.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is RS: " << balance1 << endl;
                            continue;
                        case 2:
                        {ifstream infile;
                        infile.open("User3.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in RS: ";
                            cin >> withdraw;
                            balance1 = balance1 - withdraw;
                            cout << "You withdrew RS: " << withdraw << endl;
                            cout << "Your remaining balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User3.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 3:
                        {ifstream infile;
                        infile.open("User3.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount RS: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited RS: " << deposit << endl;
                            cout << "Your new balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User3.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 4:
                            cout << "\n***[[[% EXIT MODE %]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter corrct option: \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }

                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";
            }
        }
        else if (pincode == 4444)
        {
            cout << "\n WELCOME Man \n";
            for (int i = 0; i < 3; i++)
            {
                cout << "Please enter password:\n";
                cin >> password;
                double balance = 10000;
                ifstream infile;
                infile.open("User4.txt");
                if (infile.fail()) {
                    infile.close();
                    ofstream outfile;
                    outfile.open("User4.txt");
                    outfile << balance;
                    outfile.close();
                }
                else {
                    ifstream infile;
                    infile.open("User4.txt");
                    infile >> balance1;
                    infile.close();

                }
                if (password == 8888)
                {
                    for (int i = 1; i <= 10; i++)
                    {
                        double withdraw, deposit;
                        int option;
                        cout << "\n";
                        if (i == 1)
                        {
                            cout << "*** Automated Teller Machine***" << endl;
                            cout << "Choose a Transaction:\n";
                            cout << "\n";
                        }
                        cout << "     MAIN SCREEN    \n";
                        cout << "[1] Inquire Balance \n";
                        cout << "[2] Withdraw \n";
                        cout << "[3] Deposit \n";
                        cout << "[4] Quit \n";
                        cout << "\n";
                        cout << "Enter Option:";
                        cin >> option;
                        switch (option)
                        {
                        case 1:
                        {ifstream infile;
                        infile.open("User4.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% BALANCE INQUIRY %]]]\n";
                            cout << "\n Your current balance is " << balance1 << endl;
                            continue;
                        case 2:
                        {ifstream infile;
                        infile.open("User4.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% WITHDRAW %]]]\n";
                            cout << "Enter amount in RS: ";
                            cin >> withdraw;
                            balance1 = balance1 - withdraw;
                            cout << "You withdrew RS: " << withdraw << endl;
                            cout << "Your remaining balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User4.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 3:
                        {ifstream infile;
                        infile.open("User4.txt");
                        infile >> balance1;
                        infile.close(); }
                            cout << "\n[[[% DEPOSIT %]]]\n";
                            cout << "Enter amount in RS: ";
                            cin >> deposit;
                            balance1 = balance1 + deposit;
                            cout << "You deposited RS: " << deposit << endl;
                            cout << "Your new balance is RS: " << balance1 << endl;
                        {ofstream outfile;
                        outfile.open("User4.txt");
                        outfile << balance1;
                        outfile.close(); }
                            continue;
                        case 4:
                            cout << "\n***[[[EXIT MODE]]]***\n";
                            break;
                        default:
                            cout << "\n That is an invalid option Plz enter correct option:   \n";
                            continue;
                        }
                        break;
                    }
                    break;
                }
                if (i == 2)
                {
                    cout << "\nCard is captured\n";
                }
                else
                    cout << "Pls try again!!!\n";

            }
        }
    }
    return 0;
}
void printstar(char ch, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << ch;
    }
    cout << "\n";
}