#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    string grades[] = { "A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    cout << "Press Enter 3 times to reveal your future.";
    for(int i=0; i<3; i++){
        cin.get();
    }

    srand(time(0));

    cout << "You will get " << grades[rand() % 9] << " in this 261102.";

}

