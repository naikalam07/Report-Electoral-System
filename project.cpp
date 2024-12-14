//E-Voting system
#include <iostream>
#include <string>
using namespace std;
struct Candidate{
int id;
string name;
int votes;
};

void addCandidate(Candidate candidates[], int &candidateCount) {
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


    
    return 0;
}
