// Time.cpp
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// $Log:$
//

#include "../../include/physics/Time.h"

using namespace Physics;

Time::Time(BigNum amount)
    :PhysicalUnit(amount)
{}


Time::~Time(){}

Time& Time::operator+=(const Time& rhs)
{
  _numerical_value += rhs.num();
  return *this;
}

Time& Time::operator-=(const Time& rhs)
{
  _numerical_value -= rhs.num();
  return *this;
}

Time& Time::operator=(const Time& rhs)
{
  _numerical_value = rhs.num();
  return *this;
}