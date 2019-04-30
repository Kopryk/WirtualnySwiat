#pragma once
class Organism
{
private:
    
    
protected:

    int age_;
    int priority_;
    int attack_points_;
    bool is_dead_{ false };

    void SetAsDead();

public:

    Organism() = delete;
    Organism(const int age, const int priority, const int attack_points);
    virtual ~Organism() = 0;

    Organism(Organism& organism) = delete;
    Organism(Organism&& organism) = delete;
    Organism& operator=(const Organism& r_organism) = delete;
    Organism&& operator=(const Organism&& r_organism) = delete;

    
    virtual void Action() = 0;
    bool IsDead() const;
};


inline void Organism::SetAsDead()
{
    is_dead_ = true;
}

inline Organism::Organism(const int age, const int priority, const int attack_points): age_(age), priority_(priority),
                                                                          attack_points_(attack_points)
{
}

inline Organism::~Organism()= default;

inline bool Organism::IsDead() const
{
    return is_dead_;
}
