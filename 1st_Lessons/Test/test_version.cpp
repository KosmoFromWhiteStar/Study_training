#define BOOST_TEST_MODULE test_version


#include <boost/test/unit_test.hpp>


#include "../Incl/lib.h"

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()
