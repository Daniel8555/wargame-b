#pragma once
#include "Paramedic.hpp"
using namespace WarGame;
class ParamedicCommander : public Paramedic {
private:
    static const int INIT_HP = 200;

public:
    ParamedicCommander(){};
    ParamedicCommander(uint num) {
        player_num = num;
        type = FOOT_COMMANDER;
        hp = INIT_HP;
        damage = 0; // 0 means he cannot damaged , so he can heal full
    };
    ~ParamedicCommander(){};
    void action(Board &board, pair<int, int> location);
    const uint getInitHp() const;
};