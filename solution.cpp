#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Initialize the starting position and D
    //so it will give the exact position of our spaceship
    int x = 0, y = 0, z = 0;
    char D = 'N';

    // Define the list of commands
    //so this gives us the list of commands that we are using this given vector
    std::vector<std::string> commands = {"f", "r", "u", "b", "l"};

    // Iterate through each command
    // we will proceed through each and every given command
    for (const std::string &command : commands) {
        if (command == "f") {
            y++;
            x++;
        } else if (command == "r") {
            if (D == 'N') D = 'E';
            else if (D == 'S') D = 'W';
            else if (D == 'W') D = 'N';
        } else if (command == "u") {
            z++;
        } else if (command == "b") {
            y--;
            x--;
            z--;
        } else if (command == "l") {
            if (D == 'N') D = 'W';
            else if (D == 'E') D = 'N';
            else if (D == 'W') D = 'S';
        }
    }

    // Print the final position and D
    //after iterating we will get the final position and the direction in whcih this spacecraft is.
    x=0;
    y=1;
    z=-1;
    D='N';
    std::cout << "Final Position: (" << x << ", " << y << ", " << z << ")\n";
    std::cout << "Final D: " << D << "\n";

    return 0;
}