// -*- compile-command: "./../compile.sh"; -*-
// Game.h
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#ifndef GAME_H
#define GAME_H 1

#include <vector>
#include "BigNum.h"
#include "Upgrade.h"
#include "History.h"
#include "GameState.h"

class Game{
 private:
  BigNum _traveled_distance;
  BigNum _current_speed;
  BigNum _current_acceleration;
  BigNum _current_energy;
  unsigned int _current_time;
  std::vector<Upgrade> _upgrades;
  History _history;


 public:
  // Constructor
  Game();

  // Getters
  BigNum get_distance() const;
  BigNum get_speed() const;
  BigNum get_acceleration() const;
  BigNum get_energy() const;
  unsigned int get_time() const;
  unsigned int time_until(Upgrade next_upgrade) const;
  unsigned int time_until(BigNum) const;
  GameState get_gamestate() const;

  // Setters
  void set_distance();
  void set_speed();
  void set_acceleration();
  void set_time();

  // Compute game state
  BigNum compute_new_acceleration(unsigned int time) const;
  BigNum compute_new_speed(unsigned int time) const;
  BigNum compute_new_distance(unsigned int time) const;

  // Misc
  std::string to_string() const;
  void wait(unsigned int time);
  void buy_upgrade(Upgrade upgrade);

  void click();

  // Update
  void update_game_state();
};


#endif // GAME_H
//////////////////////////////////////////////////////////////////////
// $Log:$
//
