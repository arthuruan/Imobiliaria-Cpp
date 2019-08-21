#ifndef GERENTEDEPERSISTENCIA_H
#define GERENTEDEPERSISTENCIA_H

#include "Imovel.h"
#include <list>


class GerenteDePersistencia
{
    public:
        GerenteDePersistencia();
        std::list<Imovel*> recuperaListaImoveis();
        void salvaListaImoveis(list<Imovel*> listaImovel);
};

#endif // GERENTEDEPERSISTENCIA_H
