// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-08-2013
//
// Last Modified By : sunside
// Last Modified On : 12-12-2011
// ***********************************************************************
// <copyright file="VCDParser.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary></summary>
// ***********************************************************************

#ifndef _VCDPARSER_H_
#define _VCDPARSER_H_
#pragma once

#include <boost/config/warning_disable.hpp>
#include <boost/spirit/include/qi.hpp>
#include <boost/spirit/include/phoenix_core.hpp>
#include <boost/spirit/include/phoenix_operator.hpp>
#include <boost/spirit/include/phoenix_fusion.hpp>
#include <boost/spirit/include/phoenix_stl.hpp>
#include <boost/spirit/include/phoenix_object.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/variant/recursive_variant.hpp>
#include <boost/foreach.hpp>

#include <string>
#include <vector>

namespace vcd_parser
{
    namespace fusion = boost::fusion;
    namespace phoenix = boost::phoenix;
    namespace qi = boost::spirit::qi;
    namespace ascii = boost::spirit::ascii;

    template <typename Iterator>
    struct vcd_grammar
    {

    };
}

#endif