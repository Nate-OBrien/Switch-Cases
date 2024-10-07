/*
 * Name: Nate O'Brien
 * Program Name: Switch Cases
 * Date: 10/7/24
 * Extra: Added a loop so user can go again
 */

#include <iostream>
using namespace std;

int choice;
char goAgain;
int main(){
    /* runs program forever */
    while (true){
        /* gets input */
        cout << "How are you feeling today?\n1. Auspicious\n2. Disconsolate\n3. Piqued\n4. Petrified\n5. Revolted" << endl;
        cin >> choice;
        /* checks users choice, and prints out the corresponding message*/
        switch (choice){
        case 1:
            cout << "Thats good, hope you have a good day!" << endl;
            break;
        case 2:
            cout << "Thats sad, hope you feel better!" << endl;
            break;
        case 3:
            cout << "You should take a minute to calm down." << endl;
            break;
        case 4:
            cout << "Everything will be O.K., dont worry." << endl;
            break;
        case 5:
            cout << "uh.... hope you dont feel that way soon?" << endl;
            break;
        /* if no choice is correct, this prints */
        default:
            cout << "Invalid choice entered." << endl;
            break;
        }

        /* asks user if they want to go again, if they say no, program ends. */
        cout << "Go again? (y/n): ";
        cin >> goAgain;
        if (goAgain == 'n' || goAgain == 'N'){
            break;
        }
    }

    return 0;
}
