#pragma once
#include "Soldier.hpp"
using namespace WarGame;
class Paramedic : public Soldier {
private:
    static const int INIT_HP = 100;

public:
    Paramedic(){};
    Paramedic(uint num) {
        player_num = num;
        type = PARAMEDIC;
        hp = INIT_HP;
        damage = 0; // 0 means he cannot damaged , so he can heal full
    };
    ~Paramedic(){};
    void action(Board &board, pair<int, int> location);
    const uint getInitHp() const;
};