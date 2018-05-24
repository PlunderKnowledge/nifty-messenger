#include <google/protobuf/compiler/plugin.h>
#include <iostream>
#include "include/nifty_python_generator.hpp"

using google::protobuf::compiler::NiftyPythonGenerator;
using google::protobuf::compiler::PluginMain;

int main(int argc, char** argv) {
    NiftyPythonGenerator gen;
    return PluginMain(argc, argv, &gen);
}