#include "voting_machine.h"

// Constructor definition
VotingMachine::VotingMachine() {
    // Constructor implementation (if needed)
}

// Definition of addCandidate
void VotingMachine::addCandidate(const std::string& name) {
    candidates.emplace(name, Candidate(name));
}

// Definition of vote
void VotingMachine::vote(const std::string& candidateName) {
    if (candidates.find(candidateName) != candidates.end()) {
        candidates[candidateName].votes++;
    }
}
