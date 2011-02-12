#if !defined(TEST_HAS_STATIC_MEMBER_FUNCTION_HPP)
#define TEST_HAS_STATIC_MEMBER_FUNCTION_HPP

#include "test_structs.hpp"
#include <boost/tti/tti.hpp>

BOOST_TTI_TRAIT_HAS_STATIC_MEMBER_FUNCTION(HaveTheSIntFunction,SIntFunction)
BOOST_TTI_TRAIT_HAS_STATIC_MEMBER_FUNCTION(TheTIntFunction,TIntFunction)
BOOST_TTI_HAS_STATIC_MEMBER_FUNCTION(TSFunction)
BOOST_TTI_TRAIT_HAS_STATIC_MEMBER_FUNCTION(Pickedname,SomeStaticFunction)

#endif // TEST_HAS_STATIC_MEMBER_FUNCTION_HPP
