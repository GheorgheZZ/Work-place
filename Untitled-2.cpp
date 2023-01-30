#include<ctype.h>
#include<stdbool.h>

using namespace std;

bool verify_password();

int main() {
    
    char userName;
    char password[15];

    
    cout << "\n\t\t\t\tEnter User Name: ";
    cin >> userName;
    cin.clear();
    cin.ignore(100, '\n');
    
    
    cout << "\n\t\t\t\tEnter Password: ";
    cin >> password;

    
    bool result = verify_password();
    if (result) cout<<"Verified password\n";
    else {
        cout<<"Invalid password\n";
        cout<<result;
    }
    
        
    system("pause>0");
}

bool verify_password(){
    
    int lenght = strlen(password);
    if (lenght < 8 || lenght > 15) return false;
    
    bool has_upper = false;
    bool has_lower = false;
    bool has_symbol = false;
    bool has_digit = false;
    
    for (int i = 0; i < lenght; i++){
        
        if(isupper(password[i])) has_upper = true;
        if(islower(password[i])) has_lower = true;
        if(isdigit(password[i])) has_digit = true;
        if(ispunct(password[i])) has_symbol = true;
    }

    if(!(has_upper && has_lower && has_digit && has_symbol)) return false;
    
    
}