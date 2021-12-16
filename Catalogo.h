//_Catalogo_
#ifndef _CATALOGO_
#define _CATALOGO_

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Catalogo{
    private:
        string filmes = "|= 1 = Um Lugar Silencioso|= 2 = Deadpool|= 3 = Infiltrado na Klan|";
        int numTot = 4;
    public:
        Catalogo();
        Catalogo(const string);
        const void catalogo();
        void adicionaF(string);
        const string getFilme(); 
        Catalogo(Catalogo&);
        ~Catalogo();
};
#endif /*_CATALOGO_*/