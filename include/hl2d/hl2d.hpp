#pragma once
#ifndef HL2D_HL2D_HPP
#define HL2D_HL2D_HPP

#include <cstdint>
#include <iostream>

namespace hl2d {
    
    class MyClass
    {
    public:
        MyClass(const uint64_t size)
        : m_size(size)
        {

        }
        
        void hello_world()
        {
            std::cout<<"Hello World!\n";
        }
    private:
        uint64_t m_size;
    };

} // end namespace hl2d


#endif // HL2D_HL2D_HPP