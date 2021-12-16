
#include "Catalogo.h"

using namespace std;
Catalogo::Catalogo(){  //construtor  
}
Catalogo::Catalogo(const string filme){//construtor2 adiciona um filme no catalogo
    this->numTot += 1;
    int b = this->numTot;
    string str;
    stringstream ss;  
    ss << b;  
    ss >> str; 
    string sep = " |= " + str + " = ";
    this->filmes.append(sep);
    this->filmes.append(filme);
}
Catalogo::Catalogo(Catalogo& f){//construtor cópia
    f.numTot += 1;
    int b = f.numTot;
    string str;
    stringstream ss;  
    ss << b;  
    ss >> str; 
    string sep = " |= " + str + " = ";
    f.filmes.append(sep);
    f.filmes.append(f.filmes);
}
Catalogo::~Catalogo(){

}

const void Catalogo::catalogo(){//mostra todos os filmes
    int drop = 0, c = 5;
    for(int j = 0; j < this->numTot; j++){
        for(int i = drop; this->filmes[i] != '|'; i++){
            if(i == this->filmes.size()){
                break;
            }
            cout << this->filmes[i];
            drop++;
        }
        drop++;
        c--;
        if(c==0){
            c = 5;
            cout << "\n================================================================================\n";
        }
        
        
    }
    
}

void Catalogo::adicionaF(const string filme){//adiciona um filme ao ctalogo
    this->numTot += 1;
    int b = this->numTot;
    string str;
    stringstream ss;  
    ss << b;  
    ss >> str; 
    string sep = "|= " + str + " = ";
    this->filmes.append(sep);
    this->filmes.append(filme);
}

const string Catalogo::getFilme(){//retorna todos os filmes
    return this->filmes;
}