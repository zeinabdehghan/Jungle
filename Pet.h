#include "Animal.h"
#ifndef JUNGLE_PET_H
#define JUNGLE_PET_H


class Pet : public Animal{
public:
    Pet();
   virtual void fall() override final;
};


#endif //JUNGLE_PET_H
