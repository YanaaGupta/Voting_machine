#include "voting_machine.h"

int main() {
    VotingMachine vm;

    // Register voters
    vm.registerVoter("V001", "Alice");
    vm.registerVoter("V002", "Bob");
    vm.registerVoter("V003", "Charlie");

    // Register candidates
    vm.registerCandidate("Candidate1");
    vm.registerCandidate("Candidate2");

    // Voting process
    if (vm.vote("V001", "Candidate1")) {
        cout << "Alice voted for Candidate1" << endl;
    } else {
        cout << "Alice's vote failed" << endl;
    }

    if (vm.vote("V002", "Candidate2")) {
        cout << "Bob voted for Candidate2" << endl;
    } else {
        cout << "Bob's vote failed" << endl;
    }

    if (vm.vote("V003", "Candidate1")) {
        cout << "Charlie voted for Candidate1" << endl;
    } else {
        cout << "Charlie's vote failed" << endl;
    }

    // Display results
    cout << "Election Results:" << endl;
    vm.displayResults();

    return 0;
}
