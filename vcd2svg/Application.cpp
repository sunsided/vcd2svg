// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-05-2013
//
// Last Modified By : sunside
// Last Modified On : 07-05-2013
// ***********************************************************************
// <copyright file="Application.cpp" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>Application class</summary>
// ***********************************************************************

#include <iostream>
#include <boost/filesystem/fstream.hpp>
#include "Application.h"

using namespace std;
namespace fs = boost::filesystem;

/// <summary>
/// Initializes a new instance of the <see cref="Application" /> class.
/// </summary>
Application::Application(const fs::path& input, const fs::path& output)
    : _input(input), _output(output)
{
}

/// <summary>
/// Finalizes an instance of the <see cref="Application" /> class.
/// </summary>
Application::~Application(void)
{
}

/// <summary>
/// Runs this instance.
/// </summary>
/// <returns>bool.</returns>
bool Application::run() 
{
    fs::ifstream input(_input, ios_base::in);
    if (!input.is_open()) {
        cerr << "Could not open input file." << endl;
        return false;
    }

    while (!input.eof())
    {
        string value;
        input >> value;
        cout << value << endl;
    }

    input.close();
    return true;
}