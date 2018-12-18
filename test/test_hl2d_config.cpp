#include <doctest.h>

#include "hl2d/hl2d.hpp"
#include "hl2d/hl2d_config.hpp"



TEST_SUITE_BEGIN("core");

TEST_CASE("check version"){

    #ifndef HL2D_VERSION_MAJOR
        #error "HL2D_VERSION_MAJOR is undefined"
    #endif
    

    #ifndef HL2D_VERSION_MINOR
        #error "HL2D_VERSION_MINOR is undefined"
    #endif


    #ifndef HL2D_VERSION_PATCH
        #error "HL2D_VERSION_PATCH is undefined"
    #endif

    CHECK_GE(HL2D_VERSION_MAJOR , 0);
    CHECK_GE(HL2D_VERSION_MINOR , 0);
    CHECK_GE(HL2D_VERSION_PATCH , 0);
}



TEST_SUITE_END(); // end of testsuite core
