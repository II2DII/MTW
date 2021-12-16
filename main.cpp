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
        Catalogo(const string filme);
        const void catalogo();
        void adicionaF(string filme);
        const string getFilme(); 
        Catalogo(Catalogo&);
        ~Catalogo();
};

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

class Sinopse:public Catalogo{
    private:
        string sinopse = "Um Lugar Silencioso:uma familia do Meio-Oeste e perseguida por uma entidade fantasmagorica assustadora. Para se protegerem, eles devem permanecer em silencio absoluto, a qualquer custo, pois o perigo e ativado pela percepcao do som.|Deadpool:Ryan reynolds e Wade Wilson, um ex-agente especial que passou a trabalhar como mercenario. Seu mundo e destruido quando um cientista maligno o tortura e o desfigura completamente. O experimento brutal transforma Wade em Deadpool. E ele ganha poderes especiais de cura e uma forca aprimorada. Com a ajuda de aliados poderosos e um senso de humor mais desbocado e cinico do que nunca, o irreverente anti-heroi usa habilidades e metodos violentos para se vingar do homem que quase acabou com a sua vida.|Infiltraddo na klan:E uma historia baseada em um acontecimento real dos anos 70. Ron Stallworth (John David Washington), um policial negro do Colorado, consegue se infiltrar na Ku Klux Klan local. Ele se comunica com os outros membros do grupo por meio de telefonemas e cartas. E quando precisava estar fisicamente presente, ele envia um outro policial branco em seu lugar. Depois de meses de investigacao, Ron fica proximo do lider da seita. E se torna responsavel por sabotar uma serie de linchamentos e outros crimes de odio orquestrados pelos racistas.|";
    public:

        Sinopse();
        ~Sinopse();
        Sinopse(const string filme);
        Sinopse(Sinopse& f);
        void setSinopse(const string sinop, const string filme);
        void mostraSinopse(const string filme);
        void encontraF(const string filme);
        const string getSinopse();
        
};
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


int main(){

    Sinopse *cat1 = new Sinopse();
    
    static int esc=-1;
    static string adici, film;
    while(esc!=0){
        cout << "\nMenu de opcoes\n";
        cout << "1 - Ver catalogo de filmes\n";
        cout << "2 - Adicionar um filme ao catalogo\n";
        cout << "3 - Encontrar um filme";
        cout << "\n4 - Adicionar uma sinopse a um filme";
        cout << "\n5 - Mostrar uma sinopse de um filme";
        cout << "\n0 - SARIR\n";
        cin >> esc;
        switch (esc){
        case 1:
            cat1->catalogo();
            break;
        case 2:
            cout << "\nDigite o nome do filme que seseja adicionar\n";
            getline(cin, adici);
            cat1->adicionaF(adici);
            break;
        case 3:
            cout << "qual filme quer encontrar?\n";
            getline(cin, adici);
            cat1->encontraF(adici);
            break;
        case 4:
            cout << "qual o filme quer adicionar uma sinopse?\n";
            getline(cin, adici);
            getline(cin, film);
            cat1->setSinopse(adici, film);
            break;
        case 5:
            cout << "qual o filme que deseja ver a sinopse?\n";
            getline(cin, adici);
            cat1->mostraSinopse(adici);
            break;
        case 0:
            break;
        default:
            break;
        }

    }
    return 0;
}