#ifndef VOTING_MACHINE_H
#define VOTING_MACHINE_H

#include <string>
#include <unordered_map>

class Candidate {
public:
    std::string name;
    int votes;

    // Constructors
    Candidate() : name(""), votes(0) {}
    Candidate(const std::string& name) : name(name), votes(0) {}
};

class VotingMachine {
private:
    std::unordered_map<std::string, Candidate> candidates;

public:
    VotingMachine();  // Constructor declaration

    void addCandidate(const std::string& name);
    void vote(const std::string& candidateName);
};

#endif // VOTING_MACHINE_H
