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
private:

    int eHealth;
    int eTaunt;
    int eAttack;

public:

    virtual void NormalAttack() override;
    virtual void TauntPlayer() = 0;

    void SetEnemyAttack(int enemyattack)
    {
        eAttack = enemyattack;
    }
    void SetTauntPlayer(int enemytaunt)
    {
        eTaunt = enemytaunt;
    }
    void SetEnemyHealth(int enemyhealth)
    {
        eHealth = enemyhealth;
    }

     int GetEnemyAttack()
    {
        return eAttack;
    }
    int GetEnemyHealth() const
    {
        return eHealth;
    }
    int GetEnemyTaunt() const
    {
        return eTaunt;
    }
   
};

class Orc : public Enemy
{
private:
    string speciesName = "Orc";
    int tauntAmount;

public:
    virtual void TauntPlayer() override;
    int GetTauntAmount() const
    {
        return tauntAmount;
    }
    void SetTauntAmount(const int amount)
    {
        tauntAmount = amount;
    }

};

class Undead : public Enemy
{
private:
    string speciesName = "Undead";
    int tauntAmount;
public:
    virtual void TauntPlayer() override;
    int GetTauntAmount() const
    {
        return tauntAmount;
    }
    void SetTauntAmount(const int amount)
    {
        tauntAmount = amount;
    }

};