#ifndef HEP_GA_SQUARED_REVERSE_NORM_HPP
#define HEP_GA_SQUARED_REVERSE_NORM_HPP

#include <hep/ga/inline.hpp>
#include <hep/ga/unary_expression.hpp>

namespace hep {

    template<typename E>
    class squared_reverse_norm : public unary_expression<E, list<0>> {
    public:
        /**
         * Constructs a new expression containing the squared reverse norm of
         * \c expr.
         */
        hep_inline squared_reverse_norm(E const &expr)
                : unary_expression<E, list<0>>(expr) {
        }

        /**
         * Performs the computation of the component represented by \c index.
         */
        template <int index>
        hep_inline typename E::algebra::scalar_type at() const
        {
            static_assert (index == 0, "component does not exist");
            return (this->expr * ~this->expr).template at<index>();
        }

    };


    template <typename E>
    hep_inline squared_reverse_norm<E> rnorm(E const& expr)
    {
        return squared_reverse_norm<E>(expr);
    }

}


#endif //HEP_GA_SQUARED_REVERSE_NORM_HPP
