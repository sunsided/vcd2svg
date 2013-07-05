// ***********************************************************************
// Assembly         : vcd2svg
// Author           : sunside
// Created          : 07-05-2013
//
// Last Modified By : sunside
// Last Modified On : 07-05-2013
// ***********************************************************************
// <copyright file="main.cpp" company="">
//     Copyright (c) . All rights reserved.
// </copyright>
// <summary>Main entry point</summary>
// ***********************************************************************

#include <exception>
#include <iostream>
#include <memory>
#include <cstdlib>
#include <vector>
#include <boost/program_options.hpp>
#include <boost/filesystem.hpp>

#include "version.h"
#include "file_exception.h"
#include "Application.h"

using namespace std;
namespace po = boost::program_options;
namespace fs = boost::filesystem;

/// <summary>
/// Main entry point
/// </summary>
/// <returns>int.</returns>
const int main(const int argc, const char* argv[])
{
    fs::path input, output;

    try
    {
        po::options_description generic("Generic options");
        generic.add_options()
            ("version,v", "Prints the version string")
            ("help", "Produces this help message")    
        ;

        po::options_description file("File options");
        file.add_options()
            ("input,i", po::value<string>()->required(), "The input file")
            ("output,o", po::value<string>()->required(), "The output file")
        ;

        po::options_description cmdline_options;
        cmdline_options.add(generic).add(file);

        // add positional arguments
        po::positional_options_description p;
        p.add("input", 1);
        p.add("output", 1);

        // parse the command line
        po::variables_map vm;
        po::store(po::command_line_parser(argc, argv).options(cmdline_options).positional(p).run(), vm);

        // print the help text
        if (vm.count("help")) {
            cout << cmdline_options << endl;
            return 1;
        }

        // print the version string
        if (vm.count("version")) {
            cout << VCD2SVG_APPNAME << " " << VCD2SVG_VERSION << endl << VCD2SVG_COPYRIGHT << endl;
            return 1;
        }

        // continue command line processing, throwing errors on invalid arguments
        po::notify(vm);

        // get input and output file path
        input = fs::path(vm["input"].as<string>());
        output = fs::path(vm["output"].as<string>());
        
        // check for existence of the input file
        if (!fs::exists(input)) {
            throw file_exception("input file does not exist", input);
        } else if (!fs::is_regular_file(input)) {
            throw file_exception("input file is not a regular file", input);
        }

        // check for existence of the ouput file
        if (fs::exists(output)) {
            throw file_exception("output file already exists", input);
        }
    }
    catch(file_exception& e)
    {
        std::cerr << "Error: " << e.what() << endl;
        return EXIT_FAILURE;
    }
    catch(std::exception& e)
    {
        std::cerr << "Error: " << e.what() << endl;
        return EXIT_FAILURE;
    }
    catch(...)
    {
        std::cerr << "Unknown error!" << endl;
        return EXIT_FAILURE;
    }

    unique_ptr<Application> application(new Application());
    return EXIT_SUCCESS;
}