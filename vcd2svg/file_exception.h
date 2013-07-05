// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-05-2013
//
// Last Modified By : sunside
// Last Modified On : 07-05-2013
// ***********************************************************************
// <copyright file="file_exception.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>File-related exception</summary>
// ***********************************************************************

#ifndef _FILE_EXCEPTION_H_
#define _FILE_EXCEPTION_H_
#pragma once

#include <string>
#include <stdexcept>
#include <string>
#include <boost/filesystem.hpp>

/// <summary>
/// Class file_exception describes a file-related exception
/// </summary>
class file_exception: public std::runtime_error
{
private:
    /// <summary>
    /// The file
    /// </summary>
    const boost::filesystem::path& file;

    /// <summary>
    /// The message
    /// </summary>
    std::string message;

public:

    /// <summary>
    /// Initializes a new instance of the <see cref="file_exception"/> class.
    /// </summary>
    /// <param name="message">The message.</param>
    /// <param name="file">The file.</param>
    explicit file_exception(const std::string& message, const boost::filesystem::path& file);

    /// <summary>
    /// Finalizes an instance of the <see cref="file_exception"/> class.
    /// </summary>
    inline virtual ~file_exception(void)
    {
    }

    /// <summary>
    /// Returns the error description
    /// </summary>
    /// <returns>const char *.</returns>
    virtual const char* what() const;

};

#endif