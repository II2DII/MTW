#include "Sinopse.h"
Sinopse::Sinopse(){//construtor
}
Sinopse::Sinopse(const string filme){
    if(getFilme().find(filme) != string::npos){  
        for(int i = this->sinopse.find(filme);this->sinopse[i] != ':'; i++){
            if (this->sinopse[i] == ':'){
                for(int j = i++;this->sinopse[j]!='|'; j++){
                    if(j==this->sinopse.size()){
                        break;
                    }
                    cout << this->sinopse[j];
                }
                break;
            }
            
        }
    }
}
Sinopse::Sinopse(Sinopse& f){//construtor cópia
    if(getFilme().find(f.sinopse) != string::npos){  
        for(int i = f.sinopse.find(f.sinopse);f.sinopse[i] != ':'; i++){
            if (f.sinopse[i] == ':'){
                for(int j = i++;f.sinopse[j]!='|'; j++){
                    if(j==f.sinopse.size()){
                        break;
                    }
                    cout << f.sinopse[j];
                }
                break;
            }
            
        }
    }
}
Sinopse::~Sinopse(){//destrutor

}
void Sinopse::setSinopse(const string sino, const string filme){//adiciona diretamente em sinopse
    this->sinopse.append(filme);
    this->sinopse.append(":");
    this->sinopse.append(sino);
}
void Sinopse::mostraSinopse(const string filme){//mostra a sinopse do filme passado como parâmetro
    cout << endl;
    if(this->sinopse.find(filme) != string::npos){ 
         int x = this->sinopse.find(filme);
        for(int i = x;this->sinopse[i] != ':'; i++){
            if (this->sinopse[i] == ':'){
                for(int j = i++;this->sinopse[j]!='|'; j++){
                    if(j==this->sinopse.size()){
                        break;
                    }
                    cout << this->sinopse[j];
                }
                break;
            }
            
        }
    }
}
void Sinopse::encontraF(const string filme){//encontra um filme
    int copy = 0;
    cout << "\n";
    cout << endl;
    if(getFilme().find(filme)!=string::npos){
        for(int i = getFilme().find(filme);getFilme()[i] != '|'; i++){
            cout << getFilme()[i];
        }
        while(copy!=3){
            cout << " ";
            cout << "\nO que deseja fazer?";
            cout << "\n3 - Voltar ao menu[]\n";
            cin >> copy;
            switch (copy){
            case 1:
                mostraSinopse(filme);
                break;
            default:
                break;
            }
        }
    }
}

const string Sinopse::getSinopse(){
    return this->sinopse;
}