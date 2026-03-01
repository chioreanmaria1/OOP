
// Schreibe ein Programm, das Sie nach Ihrem Vor- und Nachnamen fragt.
// Die Anwendung gibt  eine Begrüßung aus.
// Die Begrüßung enthält den gesamten Namen sowie die Anzahl der Zeichen, die der gesamte Name enthält.
#include <iostream>
#include <string>
int main(){

    std:: string vorname, nachname;
    std:: cout <<"Schreibe Vorname\n";
    std::cin >> vorname;
    std::cout <<"Schreibe Nachname\n";
    std::cin>> nachname;
    std:: cout<<"Hallo" <<" "<<vorname<<" "<<nachname<<"!"<<"\n";
    int anzahl = vorname.size() + nachname.size();
    std:: cout << anzahl;
}

