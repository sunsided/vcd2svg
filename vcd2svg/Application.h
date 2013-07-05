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

/// <summary>
/// Contains the application logic.
/// </summary>
class Application
{
public:
    Application(void);
    virtual ~Application(void);

private:
    /// <summary>
    /// Initializes a new instance of the <see cref="Application"/> class.
    /// </summary>
    /// <remarks>Forbidden.</remarks>
    /// <param name="">The reference to copy.</param>
    inline Application(const Application&) {};
    
    /// <summary>
    /// Operator=s the specified .
    /// </summary>
    /// <remarks>Forbidden.</remarks>
    /// <param name="">The reference to copy.</param>
    /// <returns>Application &.</returns>
    inline Application& operator=(const Application&) {}
};

#endif