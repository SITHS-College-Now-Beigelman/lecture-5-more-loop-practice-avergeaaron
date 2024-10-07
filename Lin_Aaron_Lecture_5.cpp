// Aaron Lin
// 10/07/2024
// Lecture 5

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//beginning of code
int main() {

    int trans; //variable for transaction
    int base = 0; //reference for trans
    char a = '$'; //variable for dollar sign
    bool type = true; //type is true
    double balance; //variable for bank account balance
    double cash; //variable for cash 
    double credit = 0; //variable credit = 0
    double debit = 0; //variable debit = 0

    cout << "\nHow much money do you have in your bank account?\n-> "; //question
    cin >> balance; //user input their bank account balance
    cout << "You have " << a << balance << " in your bank account" << endl; //states how much money the user have in their bank account

    cout << "\nHow much transaction did you made today?\n-> "; //question
    cin >> trans; //user input the amount of transactions

    while(base < trans) //runs repeatedly while base < trans
    {
        cout << "\nHow much money did you use?\n-> "; //question
        cin >> cash; //user input amount of cash 
        
        cout << "\nWhat is your type of transaction? (credit type 1 or debit type 0)\n-> "; //question
        cin >> type; //user input 1 or 0 for credit or debit
        
        if (type == 1) //if type = 1
            {
            credit = credit + cash; //the current cash in the transaction will be added to credit
            balance = balance + cash; //the current cash in the transaction will be added to balance
            }
        if (type == 0) //if type = 0
            {
            debit = debit + cash; //the current cash in the transaction will be added to debit
            balance = balance - cash; //the current cash in the transaction will be subtracted from balance
            }

        cout << "After this transaction you have " << a << balance << " in your bank account" << endl; //states the amount of money the user have in their bank balance after this transaction

        base = base + 1; //add 1 to base 

    }

    cout << "\nThis is your final bank balance: " << a << balance << endl; //states the final bank balance
    cout << "Your total credit for today is: " << a << credit << endl; //states the total credit from all the transaction
    cout << "Your total debit for today is: " << a << debit << endl; //states the total debit from all the transaction

    return 0; //ends the code
}
/*
How much money do you have in your bank account?
-> 1000
You have $1000 in your bank account

How much transaction did you made today?
-> 5

How much money did you use?
-> 100

What is your type of transaction? (credit type 1 or debit type 0)
-> 0
After this transaction you have $900 in your bank account

How much money did you use?
-> 250

What is your type of transaction? (credit type 1 or debit type 0)
-> 1
After this transaction you have $1150 in your bank account

How much money did you use?
-> 50 

What is your type of transaction? (credit type 1 or debit type 0)
-> 0
After this transaction you have $1100 in your bank account

How much money did you use?
-> 500

What is your type of transaction? (credit type 1 or debit type 0)
-> 0
After this transaction you have $600 in your bank account

How much money did you use?
-> 150

What is your type of transaction? (credit type 1 or debit type 0)
-> 0
After this transaction you have $450 in your bank account

This is your final bank balance: $450
Your total credit for today is: $250
Your total debit for today is: $800
*/