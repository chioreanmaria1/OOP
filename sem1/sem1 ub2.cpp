
// Definiere eine Struktur für die Eingabe von Kundendaten mit folgenden Informationen: Eine Nummer, ein Name, eine Postleitzahl, und eine Ortsname.
// Erzeugen Sie ein Array vom Typ der Struktur.


#include <iostream>
#include<string>

struct Kunde {
    int Nummer;
    std::string Name;
    int Postleitzahl;
    std::string Ortsname;
};
int main() {
    Kunde array[2];

    for (int i = 0; i < 1; i++) {
        std::cout<<"Bitte geben sie ihre Datein ein: "<< "\n";
        std::cout<< "Nummer: " << "\n";
        std::cin>>array[i].Nummer;
        std::cout<< "Name: " << "\n";;
        std::cin>>array[i].Name;
        std::cout<<"Postleitzahl: " << "\n";
        std::cin>>array[i].Postleitzahl;
        std::cout<<"Ortsname: " << "\n";
        std::cin>> array[i].Ortsname;


    }
    for (int i = 0; i < 1; i++) {
        std::cout<< "Kunde: " << i << "\n";
        std::cout << "Nummer: " << array[i].Nummer << "\n";
        std::cout << "Name: " << array[i].Name << "\n";
        std::cout<< "Postleitzahl: " << array[i].Postleitzahl << "\n";
        std::cout<< "Ortsname: "<<array[i].Ortsname << "\n";
    }
}