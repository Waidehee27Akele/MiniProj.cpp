#include<iostream>
#include<fstream> //so can read out files
#include<string>

using namespace std;
bool IsLoggedIN()
{
    string username, password, un, pw;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream read("data\\" + username + ".txt");  //read is a variable for fstream.data is a folder where the username named file is there//
    getline(read, un);
    getline(read, pw);

    if(un == username && pw == passwrod)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout << "1: Registration\n 2: Login\nYour choice: ";
    cin >> choice;
    if(choice == 1)
    {
        string username, password;
        cout << "select a username: "
        cin >> username;
        cout << "select a password: "
        cin >> password;

        ofstream file;  //ifstream was reading the file and ofstream is creating the file.//
        file.open("data\\" + username + ".txt");
        file << username << endl << password;
        file.close();

        main();  //as after registering we can go to another one so return to main.
        }
        else if(choice == 2)
        {
            bool status = IsLoggedIn();
            if (!status)
            {
                cout << "False Login" << endl;
                system("PAUSE");
                return 0;
            }
            else
            {
                cout << "Succesfully logged in!" << endl;
                system("PAUSE");
                return 0;
            }
        }
    }
}