// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-05-2013
//
// Last Modified By : sunside
// Last Modified On : 07-05-2013
// ***********************************************************************
// <copyright file="Application.h" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>Application class</summary>
// ***********************************************************************

#ifndef _APPLICATION_H_
#define _APPLICATION_H_
#pragma once

#include <boost/filesystem.hpp>

/// <summary>
/// Contains the application logic.
/// </summary>
class Application
{
private:
    /// <summary>
    /// The input file path
    /// </summary>
    const boost::filesystem::path _input;

    /// <summary>
    /// The output file path
    /// </summary>
    const boost::filesystem::path _output;

public:
    /// <summary>
    /// Initializes a new instance of the <see cref="Application"/> class.
    /// </summary>
    /// <param name="input">The input.</param>
    /// <param name="output">The output.</param>
    Application(const boost::filesystem::path& input, const boost::filesystem::path& output);
    
    /// <summary>
    /// Finalizes an instance of the <see cref="Application" /> class.
    /// </summary>
    virtual ~Application(void);

    /// <summary>
    /// Runs this instance.
    /// </summary>
    /// <returns>true if successful.</returns>
    bool run();

private:
    /// <summary>
    /// Initializes a new instance of the <see cref="Application"/> class.
    /// </summary>
    /// <remarks>Forbidden.</remarks>
    /// <param name="">The reference to copy.</param>
    inline Application(const Application&) {}
    
    /// <summary>
    /// Operator=s the specified .
    /// </summary>
    /// <remarks>Forbidden.</remarks>
    /// <param name="">The reference to copy.</param>
    /// <returns>Application &.</returns>
    inline Application& operator=(const Application&) { return *this; }
};

#endif