/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2018 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#ifndef SOFA_BVHJOINT_DEPRECATEDLAYOUT_H
#define SOFA_BVHJOINT_DEPRECATEDLAYOUT_H

#include <sofa/helper/bvh/BVHJoint.h>

namespace sofa
{
namespace helper
{
namespace io
{

// Namespace forwarding: solution 1
// Auto-generated alias to make sofa::helper::io::bvh point to sofa::helper::bvh
// namespace bvh = sofa::helper::bvh;

// Namespace forwarding: solution 2
// Auto-generated "using" Component
// This solution looks clearer but could miss other classes declared in BVHJoint.h
namespace bvh
{
using sofa::helper::bvh::BVHJoint;
} // namespace bvh

} // namespace io
} // namespace helper
} // namespace sofa

#endif // SOFA_BVHJOINT_DEPRECATEDLAYOUT_H
