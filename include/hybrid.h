

#include <string>
#include "human.h"

class Hybrid : public Human {
  private:
    bool vampire_power;
    bool werewolf_power;
    int rage_level;

  public:
    using Human::Human;
    Hybrid(const std::string& name, int age);

    Hybrid& activateVampirePower();
    Hybrid& activateWerewolfPower();

    Hybrid& increaseRage();
    void checkRage();

    bool hasVampirePower() const;
    bool hasWerewolfPower() const;
    int getRageLevel() const;
};
