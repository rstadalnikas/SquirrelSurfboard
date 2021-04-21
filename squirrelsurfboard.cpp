//This program calculates the total cost for surfboards purchased
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//welcome message
void ControlMessage()
{
    string controls = "To show program usage 'S'\n"
        "To purchase a surfboard press 'P'\n"
        "To display current purchase press 'C'\n"
        "To display total amout due press 'T'\n"
        "To quit the program press 'Q'\n";

    cout << controls;
    cout << endl;
}

//function needed for assignment but no clue what to do with
void MakePurchase(int& iTotal);

//function that displays number of each type of board purchased
void DisplayPurchase(const int iTotal)
{
    if(iTotal == 0){
        cout << "No purchases made yet.\n" << endl;
    }
    else{
        cout << "The total number of XXXS surfboards is " << iTotal << endl;
        cout << endl;
    }
};

//function to display total amount all boards purchased cost
void DisplayTotal(const int iTotal)
{
    const float xxxsCost = 50.00;
    float amountDue = (iTotal * xxxsCost);

    cout << fixed << setprecision(2);

    //logic for total cost
    if(iTotal == 0){
        cout << "No purchases made yet.\n" << endl;
    }
    else{
        cout << "The total number of XXXS surfboards is " << iTotal << "at a total of $" << iTotal * xxxsCost << endl;
    }
    cout << endl;
    
};

//welcome message
void HelloMessage()
{
    string greeting = "************************************************************\n"
        "***** Welcome to my Johnny Utah's PointBreak Surf Shop *****\n"
        "************************************************************\n\n";

    cout << greeting;
}

int main()
{   
    char selection;

    HelloMessage();
    ControlMessage();

    //variable to store number of surfboards
    int xxxs = 0; 

    //logic statements to decide which function to use or to exit program
    while(selection != 'Q' && selection != 'q'){
        cout << "Please enter selection: ";
        cin >> selection;
        
        //show controls
        if(selection == 'S' || selection == 's'){
            ControlMessage();
        }
        //logic for number of boards wanted
        if(selection == 'P' || selection == 'p'){
            char type;

            cout << "Please enter the quantity of XXXS surfboards you "
                "would like to purchase:";
            cin >> xxxs;
            cout << endl;
            
        }
        //display what boards have been purchased
        if(selection == 'C' || selection == 'c'){
            DisplayPurchase(xxxs);
        }
        //display total cost for purchase
        if(selection == 'T' || selection == 't'){
            DisplayTotal(xxxs);
        }
    }

    cout << "Thank you" << endl;
    
    system("pause");
    return 0;
}