# vcd2svg - Value Change Dump to Scalabe Vector Graphics Converter

**Work in progress**

The goal of this project is to create a portable command-line tool to provide a converter from ASCII-based VCD files to SVG files.

### Libraries

Currently this project is built against [Boost](http://www.boost.org/) 1.54 and uses the following libraries:

+ `Boost::filesystem` for file access
+ `Boost::program_options` for what you expect
+ `Boost::spirit` for parsing of the VCD files

## License

Copyright &copy; 2013 Markus Mayer

State-Space Sandbox is licensed under the EUPL, Version 1.1 or - as soon they will be approved by the European Commission -
subsequent versions of the EUPL (the "Licence"); you may not use this work except in compliance with the Licence.
You may obtain a copy of the Licence at:

[http://joinup.ec.europa.eu/software/page/eupl/licence-eupl](http://joinup.ec.europa.eu/software/page/eupl/licence-eupl)

Unless required by applicable law or agreed to in writing, software distributed under the Licence is
distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the Licence for the specific language governing permissions and limitations under the Licence.
