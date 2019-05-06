#include <iostream>
 
using namespace std;

void four(string name) {
	char* currLetter;
	cout << "4. ";
	for(int i=0; i < name.length(); i++) {
		currLetter = &(name[i]);
		currLetter[i]++;
		currLetter[i+1]++;
		if (isalpha(name[i])) {
			printf("%c", *currLetter);
		} else {
			printf ("%c", name[i]);
		}
	}
}
int main() {
	string name;
	
	
    cout << "What's your name?\n" << "1. ";
    cin >> name;
    
    
    cout << "2. " << name << "\n";
    
    
    cout << "3. " << name[0];
	for(int i=1; i < name.length(); i++ ) {
	cout << "#";
	}
	cout << "\n";
	
    four(name);
    return(0);
}

