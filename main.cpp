#include <iostream>
#include "voting_machine.h"

int main() {
    VotingMachine vm;

    vm.addCandidate("Alice");
    vm.addCandidate("Bob");

    vm.vote("Alice");
    vm.vote("Bob");
    vm.vote("Alice");

    return 0;
}
