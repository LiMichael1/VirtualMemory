#pragma once
class MemoryManager
{
public:
    MemoryManager();
    ~MemoryManager();

    MemoryManager& instance();
    
    MemoryManager& operator =(MemoryManager y);
    MemoryManager operator =(MemoryManager x);

    void pageIn();

private:


};

