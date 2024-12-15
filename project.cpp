//E-Voting system
#include <iostream>
#include <string>
using namespace std;


struct Candidate{
int id;
string name;
int votes;
};

struct Voter {
    int id;           //naik
    string name;
    string vote;
};


void safeInput(int &input){
    while safeInput(true){
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
    
void addCandidate(Candidate candidates[], int &candidateCount) {        //function for addding candidates 
    if (candidateCount < 10) {
        cout << "Enter candidate ID: ";
        safeInput(candidates[candidateCount].id);

        cout << "enter candidate name: ";                              //abdullah
        cin >> candidates[candidateCount].name;

        candidates[candidateCount].votes = 0;
        candidateCount++;
        cout << "Candidate added successfully.\n";
    } else {
        cout << "Cannot add more candidates limit reached.\n";
    }
}

void viewresults(Candidate candidates[], int candidateCount){
    cout << "\nElection Results:\n";
    for(int i=0; i < candidateCount; i++){
        cout << "ID: " candiadates[i].id << "Name: " << candidates[i].name << endl;
    }
}


void viewcandidates(Candidate candidates[], int candidateCount) {
    cout << "\nlist of candidates:\n";                                   //abdullah
    for (int i = 0; i < candidateCount; i++) {
        cout << "ID: " << candidates[i].id << ", Name: " << candidates[i].name << "\n";
    }
}


void castvote(Candidate candidates[], int candidateCount) {
    int id;
    cout << "Enter the candidate ID you want to vote for: ";
    safeInput(id);

    for (int i = 0; i < candidateCount; i++) {
        if (candidates[i].id == id) {
            candidates[i].votes++;
            cout << "Vote casted successfully.\n";
            return;
        }
    }
    cout << "Invalid candidate ID. Please try again.\n";
}

      

int main (){

    Candidate candidates[10]; // Array to hold up to 10 candidates
    int candidateCount = 0;                                            //naik



    
    if(choice == 1){
        electionCommisionmenu(candidates , candidatesCount);
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
