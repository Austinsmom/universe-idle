// -*- compile-command: "./../../compile.sh"; -*-
// Resource.h
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#ifndef RESOURCE_H
#define RESOURCE_H 1

#include "BigNum.h"
#include "../helpers/resources_helper.h"

class Resource{
 private:
  Resource_ID _resource_id;
  std::string _resource_name;
  BigNum _amount;
  BigNum _max_amount;

 public:
  Resource(Resource_ID resource_id, std::string resource_name);
  ~Resource();

  // Getters
  BigNum get_current_amount() const;
  std::string get_name() const;
  bool has_id(Resource_ID) const;

  void set_current_amount(BigNum new_amount);
  void add(BigNum amount);
  BigNum compute_new_resource_amount(Time elapsed_time){

  }


};

#endif // RESOURCE_H
//////////////////////////////////////////////////////////////////////
// $Log:$
//
