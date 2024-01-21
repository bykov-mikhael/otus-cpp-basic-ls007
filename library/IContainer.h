template <typename T>
class IContainer {
public:
    IContainer();
    virtual ~IContainer();
    
    virtual int push_back(T data);
    virtual int insert(T data, int NodeID);
    virtual int erase(int NodeID);
    virtual int size() const;
    virtual IContainer operator[](int NodeID) const;
};