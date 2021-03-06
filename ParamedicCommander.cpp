#include "ParamedicCommander.hpp"
#include "Board.hpp"

void ParamedicCommander::action(Board &board, pair<int, int> location) {
    Paramedic::action(board, location); // super
    vector<pair<Soldier *, pair<int, int>>> soldiers = board.getCommanderSodliers(PARAMEDIC, player_num);
    for (int i = 0; i < soldiers.size(); i++) {
        Soldier *soldier = soldiers[i].first;
        pair<int, int> location = soldiers[i].second;
        soldier->action(board, {location.first, location.second});
    }
}
const uint ParamedicCommander::getInitHp() const {
    return INIT_HP;
}
