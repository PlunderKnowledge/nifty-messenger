//
// Created by bibil on 5/24/18.
//

#ifndef NIFTYCODEC_NIFTYCODEGENERATOR_HPP
#define NIFTYCODEC_NIFTYCODEGENERATOR_HPP

#include <google/protobuf/compiler/code_generator.h>
#include <google/protobuf/stubs/common.h>
#include <string>

using google::protobuf::compiler::CodeGenerator;
using google::protobuf::compiler::GeneratorContext;
using google::protobuf::FileDescriptor;

namespace google::protobuf::compiler {

    class NiftyPythonGenerator : public CodeGenerator {

    public:
        NiftyPythonGenerator() = default;
        ~NiftyPythonGenerator() override = default;

        bool Generate(const FileDescriptor *file,
                      const std::string &parameter,
                      GeneratorContext *generator_context,
                      std::string *error) const override {
            return true;
        }

    };

}

#endif //NIFTYCODEC_NIFTYCODEGENERATOR_HPP
