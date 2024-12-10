//E-Voting system
#include <iostream>
#include <string>
using namespace std;



//function for verifying age of the voter
int voterAge(int age)
if(age>=18)
cout<<"You can vote"<<endl;
else{
cout<<"You are under age"<<endl;
}
struct Candidate {
    int id;
    string name;
    int votes;
};

// Functions for election commission
void addCandidate(Candidate candidates[], int &candidateCount) {
    if (candidateCount < 10) { // Max 10 candidates
        cout << "Enter candidate ID: ";
        cin >> candidates[candidateCount].id;
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            while (cin.get() != '\n'); // Discard invalid input until a newline is found
            cout << "Invalid input. Please enter a numeric value for ID.\n";
            return;
        }
        cin.ignore(); // Clear any extra characters left in the buffer
        cout << "Enter candidate name: ";
        getline(cin, candidates[candidateCount].name);
        candidates[candidateCount].votes = 0;
        candidateCount++;
        cout << "Candidate added successfully.\n";
    } else {
        cout << "Cannot add more candidates (limit reached).\n";
    }
}

int main (){


    
    return 0;
}
