#ifndef HEP_COMMON_PRODUCT_HPP
#define HEP_COMMON_PRODUCT_HPP

/*
 * hep-ga - An Efficient Numeric Template Library for Geometric Algebra
 * Copyright (C) 2011-2012  Christopher Schwan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <hep/list/multiply.hpp>
#include <hep/expression.hpp>

#include <type_traits>

namespace hep
{

/**
 * \addtogroup expressions
 */

/**
 * 
 */
template <typename P, typename L, typename R>
class common_product : public expression<typename L::algebra,
	typename multiply<P, typename L::list, typename R::list>::type>
{
	static_assert (std::is_same<typename L::algebra, typename
		R::algebra>::value,
		"product of multi-vectors from different algebras requested");

public:
	/**
	 * 
	 */
	common_product(L const& lhs, R const& rhs);

	/**
	 * Performs the computation of the component represented by \c index.
	 */
	template <int index>
	typename L::algebra::scalar_type at() const;

private:
	/**
	 * Left-hand side expression.
	 */
	L const& lhs;

	/**
	 * Right-hand side expression.
	 */
	R const& rhs;
};

/**
 * @}
 */

}

#include <hep/impl/common_product.hpp>

#endif