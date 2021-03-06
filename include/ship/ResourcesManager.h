// ResourcesManager.h
//
// last-edit-by: <>
//
// Description:
//
//////////////////////////////////////////////////////////////////////

#ifndef RESOURCESMANAGER_H
#define RESOURCESMANAGER_H 1

#include "Resource.h"
#include "resources_helper.h"
#include "physics/Time.h"
#include "Computer.h"
//class Price;

class Computer;

class ResourcesManager{
  /**
   * Class that manages the resources of the game.
     Gets a reference to the stock of resources, and to
     the upgrades manager
   */
 private:
  std::vector<Resource> _stock_of_resources;

  Resource& get_resource(Resource_ID resource);
  const Resource& get_resource(Resource_ID resource) const;

 public:
  // CONSTRUCTORS
  ResourcesManager(std::vector<Resource>);
  ResourcesManager(const ResourcesManager& original);
  ~ResourcesManager();

  // GETTERS
  BigNum get_resource_amount(Resource_ID) const;
  std::string get_resource_name(Resource_ID) const;
  bool can_be_payed(Price a_price) const;
  std::vector<Resource> get_resources();

  // SETTERS
  void add_resource_amount(Resource_ID, BigNum amount);

  // MISC
  ResourcesManager& operator=(ResourcesManager&);
  void pay_price(Price);
  void gather_resources(Physics::Time time, Computer* computer);



};

#endif // RESOURCESMANAGER_H
//////////////////////////////////////////////////////////////////////
// $Log:$
//
