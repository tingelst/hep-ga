#ifndef HEP_IMPL_DIFFERENCE_HPP
#define HEP_IMPL_DIFFERENCE_HPP

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

#include <hep/expr/cond_difference.hpp>
#include <hep/list/find.hpp>
#include <hep/difference.hpp>
#include <hep/inline.hpp>

namespace hep
{

template <typename L, typename R>
hep_inline difference<L, R>::difference(L const& lhs, R const& rhs)
	: lhs(lhs), rhs(rhs)
{
}

template <typename L, typename R>
template <int index>
hep_inline typename L::algebra::scalar_type difference<L, R>::at() const
{
	// check if lhs has component with 'index'
	constexpr bool enable_lhs = (find<typename L::list>(index) != -1);
	// check if rhs has component with 'index'
	constexpr bool enable_rhs = (find<typename R::list>(index) != -1);

	return cond_difference<enable_lhs, enable_rhs>::
		template at<index>(lhs, rhs);
}

template <typename L, typename R>
hep_inline difference<L, R> operator-(L const& lhs, R const& rhs)
{
	return difference<L, R>(lhs, rhs);
}

}

#endif
