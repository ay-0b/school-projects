#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand((unsigned)time(0));
    string dirWords[3] = {"Left", "Middle", "Right"};
    const int shots = 5;

    int goals = 0;
    int saves = 0;
    int postCount = 0;
    int dirCount[3] = {0, 0, 0}; 

    cout << "Welcome to the Penalty Shootout Game" << endl;
    cout << "You need to score at least 3 goals out of 5 to win." << endl;
    cout << endl;
    cout << "Directions: 1 = Left  2 = Middle  3 = Right" << endl;
    cout << "Power: 1 = Low  2 = Medium  3 = High" << endl;
    cout << "Placement: 1 = Regular  2 = Corners" << endl;
    cout << endl;

    for (int i = 1; i <= shots; i++) {
        cout << "Shot " << i << " of " << shots << endl;

        int shotDir;
        cout << "Direction (1-3): ";
        cin >> shotDir;
        while (shotDir < 1 || shotDir > 3) {
            cout << "Invalid. Enter 1, 2, or 3: ";
            cin >> shotDir;
        }

        dirCount[shotDir - 1]++;

        int power;
        cout << "Power (1-3): ";
        cin >> power;
        while (power < 1 || power > 3) {
            cout << "Invalid. Enter 1, 2, or 3: ";
            cin >> power;
        }

        int place;
        cout << "Placement (1 = Regular, 2 = Corners): ";
        cin >> place;
        while (place < 1 || place > 2) {
            cout << "Invalid. Enter 1 or 2: ";
            cin >> place;
        }

        int goalieDir;
        int temp = 0;
        if (dirCount[1] > dirCount[temp]) temp = 1;
        if (dirCount[2] > dirCount[temp]) temp = 2;

        double r1 = rand() / (double)RAND_MAX;
        if (r1 < 0.4) {
            goalieDir = temp + 1;
        } else {
            goalieDir = rand() % 3 + 1;
        }

        int speed = 0;
        if (power == 1) speed = rand() % 26 + 30;
        if (power == 2) speed = rand() % 26 + 45;
        if (power == 3) speed = rand() % 26 + 60;

        int saved = 0;
        int hitPost = 0;

        if (goalieDir == shotDir) {
            double spdVal = (speed - 30) / 55.0;
            if (spdVal < 0) spdVal = 0;
            if (spdVal > 1) spdVal = 1;

            double saveProb = 0.55 - (0.4 * spdVal);
            double r2 = rand() / (double)RAND_MAX;

            if (r2 < saveProb) {
                saved = 1;
            }
        }

        if (saved == 0) {
            double postProb = 0.05;
            if (place == 2) postProb += 0.05;
            if (power == 3) postProb += 0.03;

            double r3 = rand() / (double)RAND_MAX;
            if (r3 < postProb) {
                hitPost = 1;
            }
        }

        if (saved == 1) {
            cout << endl << "Shot Result: Goalie Save" << endl;
            saves++;
        } else if (hitPost == 1) {
            cout << endl << "Shot Result: You Hit Post" << endl;
            postCount++;
        } else {
            cout << endl << "Shot Result: Goal" << endl;
            goals++;
        }

        cout << "Your shot direction: " << dirWords[shotDir - 1] << endl;
        cout << "Goalie dived: " << dirWords[goalieDir - 1] << endl;
        cout << "Speed of the Ball: " << speed << " mph" << endl;
        cout << "Current score: " << goals << endl;
        cout << endl;
    }

    cout << "Final Score: " << goals << " / " << shots << endl;
    cout << "Goals Scored: " << goals << endl;
    cout << "Saves: " << saves << "  Posts: " << postCount << endl;
    cout << endl;

    if (goals >= 3)
        cout << "You Win" << endl;
    else
        cout << "You Lose" << endl;

    cout << "Thanks For Playing" << endl;
    return 0;
}
