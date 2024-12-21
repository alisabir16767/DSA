#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    int choice, i, N;

    // Stores the names of candidates
    vector<string>candidates = { "SABIR ALI", "SATYAKAM TYAGI", "ANISH", "ARUSHI", "AKANSHA SONKAR" };
    N = candidates.size();

    // Stores the votes of candidates
    vector<int> votes(N, 0); // Initialize all votes to zero

    do {
        cout << "\n1. Vote for your favorite Candidate.\n";
        cout << "2. Check the number of votes of each Candidate.\n";
        cout << "3. Check the candidate who is leading.\n";
        cout << "4. Display total votes cast.\n";
        cout << "5. Reset votes and start a new election.\n";
        cout << "6. Remove a candidate from the election.\n";
        cout << "7. Add a new candidate to the election.\n";
        cout << "0. Exit\n";

        // Take input of options
        cout << "Enter Your choice: ";
        cin >> choice;
        cout << "\n";

        // Switch Statement
        switch (choice) {

        case 1: {
            int candidatechoice;

            // Display the names of all the candidates
            for (i = 0; i < N; i++)
                cout << i + 1 << ". " << candidates[i] << "\n";

            cout << "Choose your candidate: ";

            // Taking user's vote
            cin >> candidatechoice;
            cout << "\n";

            // Check if the chosen candidate is valid
            if (candidatechoice >= 1 && candidatechoice <= N) {
                // Update the vote of the chosen candidate
                votes[candidatechoice - 1]++;
                cout << "You have successfully cast your vote for " << candidates[candidatechoice - 1] << ".\n";
            }
            else {
                cout << "Invalid candidate choice. Please choose a valid candidate.\n";
            }
            break;
        }
        case 2: {
            // Display the name and votes of each candidate
            for (i = 0; i < N; i++)
                cout << i + 1 << ". " << candidates[i] << " - " << votes[i] << " votes\n";
            break;
        }
        case 3: {
            int mx = 0;
            string winner;

            // Find the candidate with maximum votes
            for (int i = 0; i < N; i++) {
                if (votes[i] > mx) {
                    mx = votes[i];
                    winner = candidates[i];
                }
            }
            int flag = 0;

            // Check whether there are more than one candidates with maximum votes
            for (int i = 0; i < N; i++) {
                if (votes[i] == mx && winner != candidates[i]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                cout << "The current winner is " << winner << " with " << mx << " votes.\n";
            else
                cout << "No clear winner\n";
            break;
        }
        case 4: {
            int totalVotes = 0;
            for (int i = 0; i < N; i++) {
                totalVotes += votes[i];
            }
            cout << "Total votes cast: " << totalVotes << "\n";
            break;
        }
        case 5: {
            // Reset votes and start a new election
            votes.assign(N, 0);
            cout << "Votes have been reset, and a new election has started.\n";
            break;
        }
        case 6: {
            // Remove a candidate from the election
            int removeCandidate;
            cout << "Choose the candidate to remove:\n";
            for (i = 0; i < N; i++)
                cout << i + 1 << ". " << candidates[i] << "\n";
            cin >> removeCandidate;

            if (removeCandidate >= 1 && removeCandidate <= N) {
                candidates.erase(candidates.begin() + removeCandidate - 1);
                votes.erase(votes.begin() + removeCandidate - 1);
                N = candidates.size();
                cout << "Candidate removed successfully.\n";
            }
            else {
                cout << "Invalid candidate choice. Please choose a valid candidate to remove.\n";
            }
            break;
        }
        case 7: {
            // Add a new candidate to the election
            string newCandidate;
            cout << "Enter the name of the new candidate: ";
            cin >> newCandidate;
            candidates.push_back(newCandidate);
            votes.push_back(0);
            N = candidates.size();
            cout << "New candidate added successfully.\n";
            break;
        }
        case 0:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Select a correct option\n";
        }
    } while (choice != 0);

    return 0;
}
