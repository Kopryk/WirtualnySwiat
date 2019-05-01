#pragma once
#include "Organism.h"

class Animal :
    public Organism
{
private:

protected:
    virtual void Move();
    virtual void Fight(Organism* attacker);
    virtual bool CanBlockAttack() const;


public:
    Animal() = delete;
    virtual ~Animal() = 0;
    Animal(const Animal& animal) = delete;
    Animal(const Animal&& animal) = delete;
    Animal& operator=(const Animal& r_animal) = delete;
    Animal&& operator=(const Animal&& r_animal) = delete;


    virtual void Action() override;
};


inline bool Animal::CanBlockAttack() const
{
    return false;
}

inline  Animal::~Animal() = default;

inline void Animal::Action()
{
    
}
