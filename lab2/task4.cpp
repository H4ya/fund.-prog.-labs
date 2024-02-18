#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    string players[SIZE][2]; //first column name, second score
    int numberOfItems = 0;
    string name, score;
    int choice;
    bool found = false;

    string menu = "\nPlease choose an operation:\n\t1-Add a player\n\t2-Update players scores\n\t3-Print players\n\t4-Delete a player\n\t5-End\n";

    do {
        cout << menu;
        cin >> choice;

        switch (choice) {
            case 1: //Add new player
                if (numberOfItems < SIZE - 1) {
                    cout << "Please enter player's name and score: ";
                    cin >> name >> score;
                    players[numberOfItems][0] = name;
                    players[numberOfItems][1] = score;
                    numberOfItems++;
                } else {
                    cout << "\nERROR: The array is full. You need to delete items to add!";
                }
                break;

            case 2: //update player's score
                if (numberOfItems > 0) {
                    cout << "\nPlease enter player name to update: ";
                    cin >> name;

                    for (int i = 0; i < numberOfItems; i++) {
                        if (players[i][0] == name) {
                            found = true;
                            cout << "Please enter new score: ";
                            cin >> score;
                            players[i][1] = score;
                            cout << "\nPlayer updated successfully: " << (i + 1) << "\t" << players[i][0] << "\t" << players[i][1] << endl;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "\nNot found!!\n";
                    }
                } else {
                    cout << "\nERROR: Array is empty!!\n";
                }
                break;

            case 3: //print all players info
                if (numberOfItems > 0) {
                    for (int i = 0; i < numberOfItems; i++) {
                        cout << "\nPlayer " << (i + 1) << "\t" << players[i][0] << "\t" << players[i][1];
                    }
                    cout << endl;
                } else {
                    cout << "\nERROR: Array is empty!!\n";
                }
                break;

            case 4: //delete a player
                if (numberOfItems > 0) {
                    found = false; //reset flag
                    cout << "\nPlease enter a player name to delete: ";
                    cin >> name;

                    for (int i = 0; i < numberOfItems; i++) {
                        if (players[i][0] == name) {
                            for (int j = i; j < numberOfItems; j++) { //shifting up
                                players[j][0] = players[j + 1][0];
                                players[j][1] = players[j + 1][1];
                            }
                            found = true;
                            numberOfItems--;
                            cout << "\nPlayer deleted successfully." << endl;
                            break; //from the outer for-loop for optimization
                        }
                    }

                    if (!found) {
                        cout << "\nNot found!!\n";
                    }
                } else {
                    cout << "\nERROR: Array is empty!!\n";
                }
                break;

            case 5:
                cout << "\nThanks for using our program!\n";
                break;

            default:
                cout << "\nIncorrect menu option.";
        }

    } while (choice != 5);

    return 0;
}
