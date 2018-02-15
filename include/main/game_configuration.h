// upgrades_configuration.cpp
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// $Log:$
//

#ifndef GAME_CONFIGURATION_H
#define GAME_CONFIGURATION_H 1


#include "ship/upgrades_helper.h"
#include "ship/Price.h"
#include "physics/constants_physics.h"



namespace GameConfig
{

const BigNum initial_game_resources = BigNum(10000);
const double global_multiplier = 2;
//const Physics::Distance final_destination = Physics::Units::diameter_universe;
const Physics::Distance final_destination = Physics::Units::angstrom;

namespace Computations
{

const double cinetic_impulsor_speed_gain = 0.001;

}

namespace Upgrade
{


// Quantom coil
const double i_quant_coil_increase_factor = 1.15;
const Price i_quant_coil_price = Price(Resource_ID::cinetic_energy, BigNum(30));
const std::vector<Upgrade_ID> i_quant_coil_depend = {Upgrade_ID::u_quantum_magnet};
const double i_quant_coil_cinetic_gain = 1;
const std::vector<Upgrade_ID> i_quant_coil_dep = {Upgrade_ID::u_terminal, Upgrade_ID::u_quantum_magnet};

// Level A Energy cells
const double i_level_a_cell_increase_factor = 1.15;
const Price i_level_a_cell_price = Price(Resource_ID::cinetic_energy, BigNum(100));
const std::vector<Upgrade_ID> i_level_a_cell_depend = {Upgrade_ID::u_level_a_boost};
const double i_level_a_cell_cinetic_gain = 1;
const double i_level_a_cell_acceleration_gain = 0.001;
const std::vector<Upgrade_ID> i_level_a_cell_dep = {Upgrade_ID::u_terminal, Upgrade_ID::u_level_a_boost};

// ?
const bool increm_upgrade_3_availability = true;
const double increm_upgrade_3_increase_factor = 1.15;
const Price increm_upgrade_3_price = Price(Resource_ID::cinetic_energy, BigNum(11000));
const std::vector<Upgrade_ID> increm_upgrade_3_depend = {Upgrade_ID::u_level_a_boost};
const double increm_upgrade_3_acceleration_gain = 1000;

/////////////////////
// Unique Upgrades //
/////////////////////

// Terminal
const Price u_terminal_price = Price(Resource_ID::cinetic_energy, BigNum(15));

// Quantum magnetism
const Price u_quantum_magnet_price = Price(Resource_ID::cinetic_energy, BigNum(20));
const std::vector<Upgrade_ID> u_quantum_magnet_dep = {Upgrade_ID::u_terminal};


// Radar
const Price u_radar_price = Price(Resource_ID::cinetic_energy, BigNum(15000));
const std::vector<Upgrade_ID> u_radar_dep = {Upgrade_ID::u_terminal};

// Dynamo
const Price u_dynamo_price = Price(Resource_ID::cinetic_energy, BigNum(1500));
const std::vector<Upgrade_ID> u_dynamo_dep = {Upgrade_ID::u_level_a_boost};

// Level A Booster
const Price u_level_a_boost_price = Price(Resource_ID::cinetic_energy, BigNum(150));
const std::vector<Upgrade_ID> u_level_a_boost_dep = {Upgrade_ID::u_quantum_magnet};

// Cinetic impulsor
const Price u_cinetic_impulsor_price = Price(Resource_ID::cinetic_energy, BigNum(1500));
const std::vector<Upgrade_ID> u_cinetic_impulsor_dep = {Upgrade_ID::u_quantum_magnet};


}

namespace Message
{

const std::string greeting_message
("Hi! This is the emergency terminal."
 "We sort of... crashed.\n"
 "In space...\n"
 "and time...\n"
 "First, we need to restore the main terminal's power.\n"
 "The only energy source we have for now is cinetic energy generated by...\n"
"you...\n"
 "please, click the cinetic generator until we have enough energy to re-start the console"
 );


const std::string terminal_message
(
    "\n"
    "Brilliant! the main terminal is up and running!\n"
    "It will help us fix this mess.\n"
    "But to do that, we'll need an enormous amount of energy!\n"
    "We should then work on that at once!\n"
    "According to the main terminal, we"
 );

const std::string coil_message
(
    "\n"
    "Ok. We can now generate some energy over time. It won't be fast, but it's a start...\n"
    "Try builing some coils, and let's see how much energy it generates\n"
 );

const std::string first_coil_message
(
    "\n"
    "Oh, that's not much. But it will do for now...\n"
    "A good thing would be to move, don't you think?\n"
    "The main terminal gives us the plans for a new booster.\n"
 );

const std::string level_A_booster_message
(
    "\n"
    "Good! We have a brand new throttle!\n"
    "The more cells we add to the throttle, the faster we'll move!\n"
    ""
);


}
}


#endif
