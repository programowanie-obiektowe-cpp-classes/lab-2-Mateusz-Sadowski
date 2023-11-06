#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource *res; 
public:
    ResourceManager() : res(new Resource()) {}
    double get() { return res->get(); }
    ResourceManager(const ResourceManager& rm) : res(new Resource(*rm.res)) {}
    ~ResourceManager() { delete res; }

    ResourceManager& operator=(const ResourceManager& rm) {
        if (this != &rm) {
            delete res;
            res = new Resource(*rm.res);
        }
        return *this;
    }

    ResourceManager(ResourceManager&& nowy_rm){
        res = nowy_rm.res;
        nowy_rm.res = nullptr;
    }

    ResourceManager& operator=(ResourceManager&& inny_rm)
    {
        if (this != &inny_rm) {
            delete res;
            res = inny_rm.res;
            inny_rm.res = nullptr;
        }
        return *this;
    }
};
