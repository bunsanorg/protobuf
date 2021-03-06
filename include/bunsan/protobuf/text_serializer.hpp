#pragma once

#include <bunsan/protobuf/base_serializer.hpp>

namespace bunsan {
namespace protobuf {

class text_serializer : public base_serializer {
 protected:
  void serialize_raw(
      const google::protobuf::Message &message,
      google::protobuf::io::ZeroCopyOutputStream &output) override;
};

}  // namespace protobuf
}  // namespace bunsan
