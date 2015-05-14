#include <iostream>
#include <string>

using namespace std;

int main() {
	string Username;
	string Password;
	string Admin;
	string Guest;
	string Srn;
	string Bm;
	string Fox;
	string Awse;
	string Dev;
	bool LoginRight = false;
	bool Beg = true;
	
	

	cout << "Welcome!" << endl;

	do {
		system("CLS");
		cout << "Username:   ";
		cin >> Username;
		cout << "Password:   ";
		cin >> Password;
		if (Username == "Admin" && Password == "Admin") {
			system("CLS");
			cout << "ADMIN_ENABLED" << endl;
			LoginRight = true;
			cout << ">>> ";
			cin >> Admin;

			if (Admin == "Plugins") {
				cout << "DevTools v0.4" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Admin == "Commands") {
				cout << "Plugins" << endl;
				cout << "Commands" << endl;
				cout << "Close" << endl;
				cout << "Debug" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Admin == "Close") {
				system("PAUSE");
				system("CLS");
			}
			if (Admin == "Debug") {
				system("PAUSE");
				cout << "Debug" << endl;
				LoginRight = false;
			}
		}
		
		
		if (Username == "Guest" && Password == "Guest") {
			system("CLS");
			LoginRight = true;
			cout << "Welcome, Guest." << endl;
			cout << ">>>  ";
			cin >> Guest;

			if (Guest == "Commands") {
				system("CLS");
				cout << "Commands" << endl;
				cout << "Close" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Guest == "Close") {
				system("CLS");
			}
		}
		// The King of Accounts
		if (Username == "A531" && Password == "grimlock135") {
			LoginRight = true;
			system("CLS");
			cout << "Welcome, A531!" << endl;
			cout << ">>>  ";
			cin >> Awse;

			// A list to take advantage of there accounts
			if (Awse == "Debug") {
				system("CLS");
				LoginRight = false;
				cout << "Srn:" << endl;
				cout << "natividad1874" << endl;
				cout << "Boomninja1:" << endl;
				cout << "hi__" << endl;
				cout << "KingFox:" << endl;
				cout << "Foxx" << endl;
				system("PAUSE");
			}
			if (Awse == "Close") {
				system("CLS");
			}
			if (Awse == "Commands") {
				system("CLS");
				LoginRight = false;
				cout << "Debug" << endl;
				cout << "Commands" << endl;
				cout << "Close" << endl;
				cout << "Monitor" << endl;
				system("PAUSE");
			}
			if (Awse == "Plugins") {
				system("CLS");
				cout << "DevTools v0.4" << endl;
				LoginRight = false;
				system("PAUSE");
			}
			// To see if they are using it.
			if (Awse == "Monitor") {
				system("CLS");
				LoginRight = false;
				cout << "Srn : OFFLINE" << endl;
				cout << "Boomninja1 : OFFLINE" << endl;
				cout << "KingFox : OFFLINE" << endl;
				system("PAUSE");
			}
			if (Awse == "Terminate") {
				system("CLS");
				cout << "Terminated" << endl;
				system("PAUSE");
			}
			if (Awse == "Manage:KingFox") {
				system("CLS");
				cout << "Password : Foxx" << endl;
				cout << "Account Number : 002 " << endl;
				cout << "STATUS : OFFLINE" << endl;
			}
			if (Awse == "Manage:Srn") {
				system("CLS");
				cout << "Password : natividad1874" << endl;
				cout << "Account Number : 003" << endl;
				cout << "STATUS : OFFLINE" << endl;
			}
			if (Awse == "Manage:Boomninja1") {
				cout << "Password : hi__" << endl;
				cout << "Account Number : 004" << endl;
				cout << "STATUS : OFFLINE" << endl;
			}
		}
		if (Username == "Srn" && Password == "natividad1874") {
			LoginRight = true;
			system("CLS");
			cout << "Welcome, Srn" << endl;
			cout << ">>>  ";
			cin >> Srn;

			if (Srn == "Plugins") {
				system("CLS");
				cout << "DevTools v0.4" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Srn == "Close") {
				system("CLS");
			}
			if (Srn == "Commands") {
				system("CLS");
				cout << "Plugins" << endl;
				cout << "Commands" << endl;
				cout << "Close" << endl;
				system("PAUSE");
				LoginRight = false;
			}
		}
		if (Username == "Boomninja1" && Password == "hi__") {
			system("CLS");
			LoginRight = true;
			cout << "Welcome, Ninja" << endl;
			cout << ">>>  ";
			cin >> Bm;

			if (Bm == "Plugins") {
				system("CLS");
				cout << "No plugins available" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Bm == "Close") {
				system("CLS");

			}
			if (Bm == "Commands") {
				system("CLS");
				cout << "Plugins" << endl;
				cout << "Commands" << endl;
				cout << "Close" << endl;
				system("PAUSE");
				LoginRight = false;
			}
		}
		if (Username == "DevTools" && Password == "Dev4") {
			LoginRight = true;
			cout << "DevTools: ";
			cin >> Dev;

			if (Dev == "Debug") {
				system("CLS");
				cout << "Debugged!" << endl;
				system("PAUSE");
				LoginRight = false;
			}
			if (Dev == "Dev") {
				system("CLS");
				cout << "Check the info Text File in the folder." << endl;
				cout << "To make your own Plugin™" << endl;
				LoginRight = false;
				system("PAUSE");
			}
			if (Dev == "Monitor") {
				system("CLS");
				cout << "A531 : ONLINE" << endl;
				cout << "KingFox : OFFLINE" << endl;
				cout << "Srn : OFFLINE" << endl;
				cout << "Boomninja1 : OFFLINE" << endl;
				LoginRight = false;
				system("PAUSE");
			}
			if (Dev == "Close") {
				system("CLS");
			}
			if (Dev == "Manage:A531") {
				system("CLS");
				cout << "Password : Haha_thought_you_can_steal_my_Password" << endl;
				cout << "Account Number : 001" << endl;
				cout << "UNKNOWN ERROR!" << endl;
				system("PAUSE");
			}
			if (Dev == "Manage:KingFox") {
				system("CLS");
				cout << "Password : Foxx" << endl;
				cout << "Account Number : 002" << endl;
				cout << "STATUS : OFFLINE" << endl;
				system("PAUSE");
			}
			if (Dev == "Manage:Srn") {
				system("CLS");
				cout << "Password : natividad1874" << endl;
				cout << "Account Number : 003" << endl;
				cout << "STATUS : OFFLINE" << endl;
				system("PAUSE");
			}
			if (Dev == "Manage:Boomninja1") {
				system("CLS");
				cout << "Password : hi__" << endl;
				cout << "Account Number : 004" << endl;
				cout << "STATUS : OFFLINE" << endl;
				system("PAUSE");
			}
		}
		if (Username == "KingFox" && Password == "Foxx") {
			system("CLS");
			LoginRight = true;
			cout << "Welcome, Fox" << endl;
			cout << ">>>  ";
			cin >> Fox;

			if (Fox == "Debug") {
				cout << "DEBUG" << endl;
				LoginRight = false;
				system("PAUSE");
			}
			if (Fox == "Commands") {
				system("CLS");
				LoginRight = false;
				cout << "Debug" << endl;
				cout << "Commands" << endl;
				cout << "Close" << endl;
				cout << "Monitor" << endl;
				cout << "Terminate" << endl;
				system("PAUSE");

			}
			if (Fox == "Close") {
				system("CLS");
			}
			if (Fox == "Plugins") {
				system("CLS");
				cout << "DevTools v0.4" << endl;
				LoginRight = false;
				system("PAUSE");
			}
			if (Fox == "Monitor") {
				LoginRight = false;
				system("CLS");
				cout << "Srn : OFFLINE" << endl;
				cout << "Boomninja1 : OFFLINE" << endl;
				cout << "KingFox : ONLINE" << endl;
				system("PAUSE");
			}
			if (Fox == "Terminate") {
				system("CLS");
				cout << "Terminated" << endl;
				system("PAUSE");
			}
			
			
		}
		else if (Password != "Guest") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Username != "Guest") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Password != "Admin") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Username != "Admin") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Username != "Srn") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Password != "natividad1874") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Password != "hi__") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		else if (Username != "Boomninja1") {
			system("CLS");
			cout << "Invalid" << endl;
			
		}
		
	} while (!LoginRight);
	
	
	return 0;
}
