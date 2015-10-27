#ifndef HEP_GA_VERSOR_PRODUCT_HPP
#define HEP_GA_VERSOR_PRODUCT_HPP

#include <hep/ga/binary_expression.hpp>
#include <hep/ga/common_product.hpp>


namespace hep
{

template <typename L, typename R>
class versor_product_expression : public binary_expression<L, R, typename R::list>
{
public:
    /**
     ** Constructor for a versor_product of expressions \c lhs and \c rhs.
     **/
    hep_inline versor_product_expression(L const& lhs, R const& rhs) : binary_expression<L, R,typename R::list>(lhs, rhs)
    {
    }

    /**
     * Performs the computation of the component represented by \c index.
     */
    template <int index>
    hep_inline typename L::algebra::scalar_type at() const
    {
        return (this->lhs * this->rhs * ~this->lhs).template at<index>();
    }
};

    template <typename L, typename R>
    hep_inline versor_product_expression<L,R> versor_product(L const& lhs, R const& rhs)
    {
        return versor_product_expression<L,R>(lhs, rhs);
    };

}
#endif //HEP_GA_VERSOR_PRODUCT_HPP
