#include "test_mf_has_template.hpp"
#include <boost/mpl/assert.hpp>

int main()
  {
  
  using namespace boost::mpl::placeholders;
  
  // Not all 'typename' parameters
  
  BOOST_MPL_ASSERT((boost::tti::mf_has_template
                      <
                      boost::tti::AMT<_>,
                      boost::mpl::identity<AType>
                      >
                  ));
  
  return 0;
  
  }
