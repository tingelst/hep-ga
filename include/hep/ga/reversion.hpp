#ifndef HEP_GA_REVERSION_HPP
#define HEP_GA_REVERSION_HPP

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

#include <hep/ga/utils/pop_count.hpp>
#include <hep/ga/inline.hpp>
#include <hep/ga/unary_expression.hpp>

namespace
{

template <bool>
struct sign
{
	template <typename T>
	static hep_inline T get(T const& value)
	{
		return value;
	}
};

template <>
struct sign<true>
{
	template <typename T>
	static hep_inline T get(T const& value)
	{
		return -value;
	}
};

}

namespace hep
{

/**
 * \ingroup expressions
 *
 * Expression class for reversions.
 *
 * \see operator~()
 */
template <typename E>
class reversion : public unary_expression<E, typename E::list>
{
public:
	/**
	 * Constructs a new expression containing the reversed expression of
	 * \c expr.
	 */
	hep_inline reversion(E const& expr)
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

		return sign<value>::get(this->expr.template at<index>());
	}
};

/**
 * \ingroup main
 *
 * Returns the reversion of expression \c expr.
 *
 * Let \f$ E \f$ be the expression \c expr. Then the reversion is defined as
 * \f[
 *     E^\dagger = \sum_i (-1)^{i (i-1) / 2} \langle E \rangle_i
 * \f]
 */
template <typename E>
hep_inline reversion<E> operator~(E const& expr)
{
	return reversion<E>(expr);
}

}

#endif
