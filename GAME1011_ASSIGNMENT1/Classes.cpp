#include <iomanip>

using namespace std;

class GameObject {
private:
public:
    virtual void NormalAttack() = 0;

};

class Player : public GameObject
{
private:
    string name;
    int health;
public:
    virtual void NormalAttack() override;
    virtual void SpecialAttack() = 0;

    string GetName()
    {
        return name;
    }
    string GetHealth()
    {
        return name;
    }

    void SetName(const string name)
    {
        this->name = name;
    }
    void Sethealth(int health)
    {
        this->health = health;

    }
};
class Wizard : public Player
{
private:
    string SpecialAttackName = "holy Flame";
    int SpecialAttackAmount;

public:
    virtual void SpecialAttack() override;
    int GetSpecialAttackAmount() const
    {
        return SpecialAttackAmount;
    }
    void SetSpecialAttackAmount(const int amount)
    {
        SpecialAttackAmount = amount;
    }

};

class Knight : public Player
{
private:
    string SpecialAttackName = "GOD Slash";
    int SpecialAttackAmount;

public:
    virtual void SpecialAttack() override;
    int GetSpecialAttackAmount() const
    {
        return SpecialAttackAmount;
    }
    void SetSpecialAttackAmount(const int amount)
    {
        SpecialAttackAmount = amount;
    }

};

class Enemy : public GameObject
{
public:
    int health;

private:
    void EnemyAttack();
    void Taunt();

    void SetEnemyAttack( const int enemyattack)
    {
	    
    }
    void SetTaunt()
    {
	    
    }
    void SetEnemyHealth()
    {
	    
    }
   
};

class Orc : public Enemy
{
public:


private:

};

class Undead : public Enemy
{
public:

private:
};