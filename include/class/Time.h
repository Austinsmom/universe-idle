// -*- compile-command: "./compile.sh"; -*-
// Time.h
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#ifndef TIME_H
#define TIME_H 1

#include "PhysicalUnit.h"
#include "BigNum.h"

class Time : public PhysicalUnit{
 public:
  Time(BigNum num_value);
  ~Time();

  friend Time operator -(const Time&, const Time&);
};


#endif // TIME_H
//////////////////////////////////////////////////////////////////////
// $Log:$
//
