#pragma once

#include <bunsan/protobuf/basic_io.hpp>
#include <bunsan/protobuf/binary_parser.hpp>
#include <bunsan/protobuf/binary_serializer.hpp>

namespace bunsan {
namespace protobuf {

using binary = basic_io<binary_parser, binary_serializer>;

}  // namespace protobuf
}  // namespace bunsan
