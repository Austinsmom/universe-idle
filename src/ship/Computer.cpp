// Computer.cpp
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#include "ship/Computer.h"
#include "ship/resources_helper.h"
#include "main/game_configuration.h"


Computer::Computer(UpgradesManager* upgrades, GameState* state)
    :_upgrades(upgrades), _state(state)
{}

BigNum Computer::resource_per_second(Resource_ID resource) const
{
  int u_quant_coil_level = _upgrades->get_upgrade_level(Upgrade_ID::i_quant_coil);
  int u_level_a_cell_level = _upgrades->get_upgrade_level(Upgrade_ID::i_level_a_cell);

  BigNum new_amount = 0;
  switch (resource)
  {
    case Resource_ID::cinetic_energy:
      {
        new_amount = u_quant_coil_level * GameConfig::Upgrade::i_quant_coil_cinetic_gain;
        new_amount += u_level_a_cell_level * GameConfig::Upgrade::i_level_a_cell_cinetic_gain;

        if (_upgrades->is_bought(Upgrade_ID::u_dynamo)) {
          new_amount +=  _state->get_speed().num();
        }
        //+ up_3_level * GameConfig::Upgrade::increm_upgrade_3_base_gain;
        break;
      }
    case Resource_ID::dark_matter:
      {
        return BigNum(1);
        break;
      }
    default:
      break;
  }
  return new_amount;

}


//////////////////////////////////////////////////////////////////////
// $Log:$
//