#include "QtAwesomeSingleton.h"

QtAwesome *qtAwesome()
{
    static QtAwesome* qtAwesome = nullptr;
    if( !qtAwesome ) {
        qtAwesome  = new QtAwesome();
        qtAwesome->initFontAwesome();
    }
    return qtAwesome;
}
