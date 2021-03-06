#pragma once
#include "Soldier.hpp"
using namespace WarGame;
class FootSoldier : public Soldier {
private:
    static const int INIT_HP = 100;

public:
    FootSoldier(){};
    FootSoldier(uint num) {
        player_num = num;
        type = FOOT_SOLDIER;
        hp = INIT_HP;
        damage = 10;
    };
    ~FootSoldier(){};
    void action(Board &board, pair<int, int> location);
    const uint getInitHp() const;
};