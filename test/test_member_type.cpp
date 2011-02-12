#include "test_member_type.hpp"
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::member_type_AnIntType<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::NameStruct<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::member_type_AnIntTypeReference<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::member_type_BType<AType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::TheInteger<AType::BType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::member_type_CType<AType::BType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::member_type_AnotherIntegerType<AType::BType::CType> >::value);
  BOOST_TEST(boost::tti::mf_valid_member_type<boost::tti::SomethingElse<AnotherType> >::value);
  
  return boost::report_errors();

  }
