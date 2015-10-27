#ifndef HEP_GA_INVERSION_HPP
#define HEP_GA_INVERSION_HPP

#include <hep/ga/unary_expression.hpp>
#include <hep/ga/squared_reverse_norm.hpp>

namespace hep
{

    template <typename E>
    class inversion : public unary_expression<E, typename E::list>
    {
    public:
        /**
         * Constructs a new expression containing the reversed expression of
         * \c expr.
         */
        hep_inline inversion(E const& expr)
                : unary_expression<E, typename E::list>(expr)
        {
        }

        /**
         * Performs the computation of the component represented by \c index.
         */
        template <int index>
        hep_inline typename E::algebra::scalar_type at() const
        {

            constexpr int grade = pop_count(index);
            constexpr bool value = (((grade * (grade - 1)) / 2) % 2) == 1;

            typename E::algebra::scalar_type num =
                    sign<value>::get(this->expr.template at<index>());
            typename E::algebra::scalar_type den =
                    rnorm(this->expr).template at<0>();
            return num / den;
        }
    };

    template <typename E>
    hep_inline inversion<E> operator!(E const& expr)
    {
        return inversion<E>(expr);
    }


}


#endif //HEP_GA_INVERSION_HPP
