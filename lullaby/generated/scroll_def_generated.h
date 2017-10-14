// Autogenerated code.  Do not edit.
#ifndef _LULLABY_LULLABY_GENERATED_SCROLL_DEF_GENERATED_H_
#define _LULLABY_LULLABY_GENERATED_SCROLL_DEF_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/scroll_def_generated.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/color.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"
#include "common_generated.h"

namespace lull {
class ScrollDefT;
class ScrollSnapToGridDefT;
class ScrollSnapToGrandchildrenDefT;
class ScrollContentLayoutDefT;
class ScrollDefT {
 public:
  using FlatBufferType = ScrollDef;

  ScrollDefT() {}

  lull::Aabb content_bounds;
  mathfu::vec2 touch_sensitivity = {0.f, 0.f};
  int32_t touch_momentum_ms = 250;
  int32_t active_priority = 0;
  mathfu::vec2 drag_border = {0.f, 0.f};
  int32_t drag_momentum_ms = 50;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class ScrollSnapToGridDefT {
 public:
  using FlatBufferType = ScrollSnapToGridDef;

  ScrollSnapToGridDefT() {}

  mathfu::vec2 interval = {0.f, 0.f};

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class ScrollSnapToGrandchildrenDefT {
 public:
  using FlatBufferType = ScrollSnapToGrandchildrenDef;

  ScrollSnapToGrandchildrenDefT() {}

  float fling_multiplier = 1.0f;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class ScrollContentLayoutDefT {
 public:
  using FlatBufferType = ScrollContentLayoutDef;

  ScrollContentLayoutDefT() {}

  float left_padding = 0.0f;
  float right_padding = 0.0f;
  float top_padding = 0.0f;
  float bottom_padding = 0.0f;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void ScrollDefT::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&content_bounds, 4);
  archive.NativeStruct(&touch_sensitivity, 6);
  archive.Scalar(&touch_momentum_ms, 8, 250);
  archive.Scalar(&active_priority, 10, 0);
  archive.NativeStruct(&drag_border, 12);
  archive.Scalar(&drag_momentum_ms, 14, 50);
}

template <typename Archive>
void ScrollSnapToGridDefT::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&interval, 4);
}

template <typename Archive>
void ScrollSnapToGrandchildrenDefT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&fling_multiplier, 4, 1.0f);
}

template <typename Archive>
void ScrollContentLayoutDefT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&left_padding, 4, 0.0f);
  archive.Scalar(&right_padding, 6, 0.0f);
  archive.Scalar(&top_padding, 8, 0.0f);
  archive.Scalar(&bottom_padding, 10, 0.0f);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::ScrollDefT);
LULLABY_SETUP_TYPEID(lull::ScrollSnapToGridDefT);
LULLABY_SETUP_TYPEID(lull::ScrollSnapToGrandchildrenDefT);
LULLABY_SETUP_TYPEID(lull::ScrollContentLayoutDefT);

#endif  // _LULLABY_LULLABY_GENERATED_SCROLL_DEF_GENERATED_H_

