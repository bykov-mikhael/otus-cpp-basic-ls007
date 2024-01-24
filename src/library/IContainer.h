#pragma once

template <typename T>
class IContainer {
public:
    IContainer();
    virtual ~IContainer() = 0;
    
    virtual int push_back(T &data) = 0;
    virtual int insert(T &data, int NodeID) = 0;
    virtual int erase(int NodeID) = 0;
    virtual int size() const = 0;
    virtual IContainer operator[](int NodeID) const = 0;
};