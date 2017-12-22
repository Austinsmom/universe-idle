// -*- compile-command: "./../../compile.sh"; -*-
// Resource.cpp
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#include "../../include/class/Resource.h"

Resource::Resource(Resource_ID resource_id, std::string resource_name)
    :_resource_id(resource_id), _resource_name(resource_name)
{}

Resource::~Resource(){}

BigNum Resource::get_current_amount() const{
  return _amount;
}

bool Resource::has_id(Resource_ID resource_id) const{
  return resource_id == _resource_id;
}


//////////////////////////////////////////////////////////////////////
// $Log:$
//
