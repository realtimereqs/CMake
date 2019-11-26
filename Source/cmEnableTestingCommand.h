/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmEnableTestingCommand_h
#define cmEnableTestingCommand_h

#include "cmConfigure.h" // IWYU pragma: keep

#include <string>
#include <vector>

class cmExecutionStatus;

/**
 * \brief Enable testing for this directory and below.
 *
 * Produce the output testfile. This produces a file in the build directory
 * called CMakeTestfile with a syntax similar to CMakeLists.txt.  It contains
 * the SUBDIRS() and ADD_TEST() commands from the source CMakeLists.txt
 * file with CMake variables expanded.  Only the subdirs and tests
 * within the valid control structures are replicated in Testfile
 * (i.e. SUBDIRS() and ADD_TEST() commands within IF() commands that are
 * not entered by CMake are not replicated in Testfile).
 * Note that CTest expects to find this file in the build directory root;
 * therefore, this command should be in the source directory root too.
 */
bool cmEnableTestingCommand(std::vector<std::string> const&,
                            cmExecutionStatus&);

#endif
