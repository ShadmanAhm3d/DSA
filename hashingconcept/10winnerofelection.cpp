#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std; 


pair<string, int> findWinner(const string votes[], int n) {
    unordered_map<string, int> voteCount;

    // Count the votes for each candidate
    for (int i = 0; i < n; ++i) {
        voteCount[votes[i]]++;
    }

    int maxVotes = 0;
    string winner;

    // Find the candidate with the maximum votes and the lexicographically smallest name
    for (const auto& entry : voteCount) {
          string potentialWinner= entry.first;
          int votes = entry.second;
        if (votes > maxVotes || (votes == maxVotes && potentialWinner < winner)) {
            maxVotes = votes;
            winner = potentialWinner; 
        }
    }

    return make_pair(winner, maxVotes);
}

int main() {
    int n = 13;
    string votes[] = {"john", "johnny", "jackie", "johnny", "john", "jackie", "jamie", "jamie", "john", "johnny", "jamie", "johnny", "john"};

    pair<string, int> winnerInfo = findWinner(votes, n);
    cout << winnerInfo.first << " " << winnerInfo.second << endl;

    return 0;
}

