//E-Voting system
#include <iostream>
#include <string>
using namespace std;


struct Candidate{
int id;               //moin
string name;
int votes;
};



void safeInput(int &input){
    while (true){
        cin >> input;
        if(cin.fail()){                                 //shaahan
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Invalid Input. Please enter a vaild integer type ID.";
        }else{
            break;
        }
    }
}
    //function for adding candidates
void addCandidate(Candidate candidates[], int &candidateCount) {        //candidate is an array of type Candidate which is user defined 
    if (candidateCount < 10) {     //max 10 candidates can be added                                    
        cout << "Enter Candidate's ID: ";
        safeInput(candidates[candidateCount].id);

        cout << "Enter Candidate's Name: ";                              //abdullah
        cin >> candidates[candidateCount].name;

        candidates[candidateCount].votes = 0;
        candidateCount++;
        cout << "Candidate added successfully.\n";
    } else {
        cout << "Cannot add more candidates. Limit reached.\n";
    }
}

void viewresults(Candidate candidates[], int candidateCount){
    cout << "\nElection Results:\n";                                  //shahan
    for(int i=0; i < candidateCount; i++){
        cout << "ID:" << candidates[i].id <<" ";
        cout<<" Name:" << candidates[i].name  <<" ";
            cout<<"  Votes:" << candidates[i].votes << "\n";
    }
}


void viewcandidates(Candidate candidates[], int candidateCount) {
    cout << "\nList of candidates:\n";                                   //abdullah
    for (int i = 0; i < candidateCount; i++) {
        cout << "ID: " << candidates[i].id <<" ";
            cout<<" Name: " << candidates[i].name <<endl;
            
    }
}


void castvote(Candidate candidates[], int candidateCount) {
    int id;
    cout << "Enter the Candidate's ID you want to vote for: ";
    safeInput(id);

    for (int i = 0; i < candidateCount; i++) {                               //moin
        if (candidates[i].id == id) {
            candidates[i].votes++;
            cout << "Vote casted successfully.\n";
            return;
        }
    }
    cout << "Invalid candidate ID. Please try again.\n";
}


void electionCommissionmenu(Candidate candidates[], int &candidateCount) {
    string password;
    cout << "Enter Election Commission password: ";
    cin >> password;

    if (password == "pass098") {
        while (true) {
            cout << "\nElection Commission Menu:\n";
            cout << "1. Add Candidate\n";
            cout << "2. View Results\n";                            //naik
            cout << "3. Back to Main Menu\n";
            cout << "Enter your choice: ";
            int choice;
            safeInput(choice);

            if (choice == 1) {
                addCandidate(candidates, candidateCount);
            } else if (choice == 2) {
                viewresults(candidates, candidateCount);
            } else if (choice == 3) {
                break;
            } else {
                cout << "Invalid choice. Try again.\n";
            }
        }
    } else {
        cout << "Incorrect password.\n";
    }
}


void voterMenu(Candidate candidates[], int candidateCount) {
    while (true) {
        cout << "\nVoter Menu:\n";
        cout << "1. View Candidates\n";
        cout << "2. Cast Vote\n";
        cout << "3. Back to Main Menu\n";
        cout << "Enter your choice: ";
        int choice;                                                  //moin
        safeInput(choice);

        if (choice == 1) {
            viewcandidates(candidates, candidateCount);
        } else if (choice == 2) {
            castvote(candidates, candidateCount);
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }
}



int main (){

    Candidate candidates[10]; // Array to hold up to 10 candidates
    int candidateCount = 0;                                            //naik
     while (true) {
        cout << "\nVoting Machine System:\n";
        cout << "1. Election Commission Menu\n";
        cout << "2. Voter Menu\n";                        //abdullah
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        safeInput(choice);
    
    if(choice == 1){
       electionCommissionmenu(candidates , candidateCount);
    } else if ( choice == 2){
        voterMenu(candidates, candidateCount);
    } else if ( choice == 3){
        cout << "Goodbye!\n";
        break;
    } else {
        cout << "Invalid choice"<< endl;
    }
}
    return 0;
}
