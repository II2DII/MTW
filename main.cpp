#include <iostream>
#include "Sinopse.h"
#include "Sinopse.cpp"
#include "Catalogo.h"
#include "Catalogo.cpp"
//1. Todas as classes devem ter no mínimo três construtores, e um deles deve ser o de cópia
//2. Duas variáveis static
//4. Todos os métodos que não alteram a classe devem ser const
//5. No mínimo 4 classes/fiz 2
//6. Usar o destructor para desalocar memória e se for o caso alterar o valor das variáveis static
//7. Usar string
//11. Todas as classes devem ter o seguintes operadores sobrecarregados: <<, >>, =, == e !=
//13. Demonstrar o uso de todos os requisitos no main usando um menu de opções
using namespace std;

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