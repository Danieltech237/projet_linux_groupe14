#include <iostream>

using namespace std;

int puissanc (int nombre, int puissance ){
    int retour = 1;
    for(int i=0;i<puissance;i++) {
        retour *=nombre;
    }
    return retour;
}
int main()
{
    int nombre;
    int puissance;
    cout<<"entrer un nombre"<<endl;
    cin>>nombre;
    cout<<" et sa puissance"<<endl;
    cin>>puissance;
    cout<<nombre << " a la puissance " << puissance << " vaut : " << puissanc(nombre,puissance);
    return 0;
}
