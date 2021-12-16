//_Sinopse_
#ifndef _SINOPSE_
#define _SINOPSE_
#include "Catalogo.h"
class Sinopse:public Catalogo{
    private:
        string sinopse = "Um Lugar Silencioso:uma familia do Meio-Oeste e perseguida por uma entidade fantasmagorica assustadora. Para se protegerem, eles devem permanecer em silencio absoluto, a qualquer custo, pois o perigo e ativado pela percepcao do som.|Deadpool:Ryan reynolds e Wade Wilson, um ex-agente especial que passou a trabalhar como mercenario. Seu mundo e destruido quando um cientista maligno o tortura e o desfigura completamente. O experimento brutal transforma Wade em Deadpool. E ele ganha poderes especiais de cura e uma forca aprimorada. Com a ajuda de aliados poderosos e um senso de humor mais desbocado e cinico do que nunca, o irreverente anti-heroi usa habilidades e metodos violentos para se vingar do homem que quase acabou com a sua vida.|Infiltraddo na klan:E uma historia baseada em um acontecimento real dos anos 70. Ron Stallworth (John David Washington), um policial negro do Colorado, consegue se infiltrar na Ku Klux Klan local. Ele se comunica com os outros membros do grupo por meio de telefonemas e cartas. E quando precisava estar fisicamente presente, ele envia um outro policial branco em seu lugar. Depois de meses de investigacao, Ron fica proximo do lider da seita. E se torna responsavel por sabotar uma serie de linchamentos e outros crimes de odio orquestrados pelos racistas.|";
    public:

        Sinopse();
        ~Sinopse();
        Sinopse(const string);
        Sinopse(Sinopse& f);
        void setSinopse(const string, const string);
        void mostraSinopse(const string);
        void encontraF(const string);
        const string getSinopse();
        
};

#endif /*_SINOPSE*/