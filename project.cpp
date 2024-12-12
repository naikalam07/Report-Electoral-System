//E-Voting system
#include <iostream>
#include <string>
using namespace std;
struct Candidate{
int id;
string name;
int votes;
};





















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
