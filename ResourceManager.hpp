#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource *res;
public:
    ResourceManager() : res(new Resource()) {}
    double get() { return res->get(); }
    ResourceManager(const ResourceManager& rm) : res(rm.res) {} 
    ~ResourceManager() { delete res; }

    ResourceManager& operator=(const ResourceManager& rm) { res = rm.res; return *this; }
};
