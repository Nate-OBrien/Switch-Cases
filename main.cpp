#include <iostream>

using namespace std;
int choice;
int main(){
    cout << "How are you feeling today?\n1. Auspicious\n2. Disconsolate\n3. Piqued\n4. Petrified\n5. Revolted" << endl;
    cin >> choice;

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
        default:
            cout << "Invalid choice entered." << endl;
            break;
    }
    return 0;
}