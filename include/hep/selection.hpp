#ifndef HEP_SELECTION_HPP
#define HEP_SELECTION_HPP

/*
 * hep-ga - An Efficient Numeric Template Library for Geometric Algebra
 * Copyright (C) 2012  Christopher Schwan
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

#include <hep/list/find.hpp>
#include <hep/list/intersection.hpp>
#include <hep/list/list.hpp>
#include <hep/inline.hpp>
#include <hep/unary_expression.hpp>

namespace
{

template <typename E, int... indices>
using selection_list = typename hep::intersection<typename E::list,
	hep::list<indices...>>::type;

}

namespace hep
{

/**
 * \addtogroup expressions
 * @{
 */

/**
 * Expression class for selection of specific components.
 */
template <typename E, int... indices>
class selection : public unary_expression<E, selection_list<E, indices...>>
{
public:
	/**
	 * Type definition for the components contained in this expression.
	 */
	typedef selection_list<E, indices...> list;

	/**
	 * Constructor. This simply calls the contructor of the parent class.
	 */
	hep_inline selection(E const& expr)
		: unary_expression<E, list>(expr)
	{
	}

	/**
	 * Performs the computation of the component represented by \c index.
	 */
	template <int index>
	hep_inline typename E::algebra::scalar_type at() const
	{
		static_assert (find<list>(index) != -1, "component does not exist");

		return this->expr.template at<index>();
	}
};

/**
 * Selects the components represented by \c indices from expression \c expr and
 * returns a new expression object. Note that some components may be omitted
 * (although they are requested within \c indices) if they are not present in
 * the expression \c E and therefore zero.
 */
template <int... indices, typename E>
hep_inline selection<E, indices...> select(E const& expr)
{
	return selection<E, indices...>(expr);
}

/**
 * @}
 */

}

#endif
