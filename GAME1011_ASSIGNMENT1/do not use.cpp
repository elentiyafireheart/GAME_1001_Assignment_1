#include <iomanip>
#include "Enemy.h"
#include "GameObject.h"

using namespace std;



class Undead2 : public Enemy
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