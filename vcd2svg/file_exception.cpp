// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-05-2013
//
// Last Modified By : sunside
// Last Modified On : 12-12-2011
// ***********************************************************************
// <copyright file="file_exception.cpp" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>File-related exceptions</summary>
// ***********************************************************************

#include <sstream>
#include "file_exception.h"

/// <summary>
/// Initializes a new instance of the <see cref="file_exception"/> class.
/// </summary>
/// <param name="message">The message.</param>
/// <param name="file">The file.</param>
file_exception::file_exception(const std::string& message, const boost::filesystem::path& file)
    :std::runtime_error(message), file(file)
{
    std::stringstream msg;
    msg << std::runtime_error::what() << ": " << file;
    this->message = msg.str();
}

/// <summary>
/// Returns the error description
/// </summary>
/// <returns>const char *.</returns>
const char* file_exception::what() const
{
    return message.c_str();
}