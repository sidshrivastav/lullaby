// Autogenerated code.  Do not edit.
#ifndef _BLAZE_OUT_K8_FASTBUILD_GENFILES_THIRD_PARTY_LULLABY_TOOLS_FLATC_GENERATED_H_
#define _BLAZE_OUT_K8_FASTBUILD_GENFILES_THIRD_PARTY_LULLABY_TOOLS_FLATC_GENERATED_H_

#include <type_traits>
#include <memory>
#include "flatbuffers/flatc_generated.h"
#include "lullaby/util/color.h"
#include "lullaby/util/common_types.h"
#include "lullaby/util/math.h"
#include "lullaby/util/optional.h"
#include "lullaby/util/typeid.h"

namespace lull {
class DataBoolT;
class DataIntT;
class DataFloatT;
class DataHashValueT;
class DataStringT;
class DataVec2T;
class DataVec3T;
class DataVec4T;
class DataQuatT;
class VariantDefT;
class InnerFixedT;
class MiddleFixedT;
class OuterFixedT;
class BasicsT;
class ComplexT;
class DataBoolT {
 public:
  using FlatBufferType = DataBool;

  DataBoolT() {}

  bool value = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataIntT {
 public:
  using FlatBufferType = DataInt;

  DataIntT() {}

  int32_t value = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataFloatT {
 public:
  using FlatBufferType = DataFloat;

  DataFloatT() {}

  float value = 0.0f;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataHashValueT {
 public:
  using FlatBufferType = DataHashValue;

  DataHashValueT() {}

  std::string value;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataStringT {
 public:
  using FlatBufferType = DataString;

  DataStringT() {}

  std::string value;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataVec2T {
 public:
  using FlatBufferType = DataVec2;

  DataVec2T() {}

  mathfu::vec2 value = {0.f, 0.f};

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataVec3T {
 public:
  using FlatBufferType = DataVec3;

  DataVec3T() {}

  mathfu::vec3 value = {0.f, 0.f, 0.f};

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataVec4T {
 public:
  using FlatBufferType = DataVec4;

  DataVec4T() {}

  mathfu::vec4 value = {0.f, 0.f, 0.f, 0.f};

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class DataQuatT {
 public:
  using FlatBufferType = DataQuat;

  DataQuatT() {}

  mathfu::quat value = {0.f, 0.f, 0.f, 1.f};

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class VariantDefT {
 public:
  using FlatBufferType = VariantDef;
  static const uint8_t kNone = VariantDef_NONE;

  VariantDefT() {}
  ~VariantDefT() { reset(); }

  VariantDefT(const VariantDefT& rhs) { assign(rhs); }
  VariantDefT& operator=(const VariantDefT& rhs) {
    assign(rhs);
    return *this;
  }

  void reset();

  FlatBufferType type() const {
    return type_;
  }

  template <typename T>
  T* get() {
    return type_ == get_type<T>() ?
        reinterpret_cast<T*>(&data_) : nullptr;
  }

  template <typename T>
  const T* get() const {
    return type_ == get_type<T>() ?
        reinterpret_cast<const T*>(&data_) : nullptr;
  }

  template <typename T>
  T* set();

  template <typename Archive>
  void SerializeFlatbuffer(FlatBufferType type, Archive archive);

 private:
  void assign(const VariantDefT& rhs);

  template <typename T>
  void destroy() {
    reinterpret_cast<T*>(&data_)->~T();
  }

  template <typename T>
  static FlatBufferType get_type() {
    return VariantDef_NONE;
  }

  template <typename T>
  using Store = std::aligned_storage<sizeof(T), alignof(T)>;
  union Buffer {
    Store<lull::DataBoolT>::type DataBool_;
    Store<lull::DataIntT>::type DataInt_;
    Store<lull::DataFloatT>::type DataFloat_;
    Store<lull::DataStringT>::type DataString_;
    Store<lull::DataHashValueT>::type DataHashValue_;
    Store<lull::DataVec2T>::type DataVec2_;
    Store<lull::DataVec3T>::type DataVec3_;
    Store<lull::DataVec4T>::type DataVec4_;
    Store<lull::DataQuatT>::type DataQuat_;
  };
  Buffer data_;
  FlatBufferType type_ = VariantDef_NONE;
};

class InnerFixedT {
 public:
  using FlatBufferType = InnerFixed;

  InnerFixedT() {}

  int32_t a = 0;
  int32_t b = 0;
  int32_t c = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class MiddleFixedT {
 public:
  using FlatBufferType = MiddleFixed;

  MiddleFixedT() {}

  int32_t t = 0;
  lull::InnerFixedT in;
  int32_t u = 0;
  int32_t v = 0;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class OuterFixedT {
 public:
  using FlatBufferType = OuterFixed;

  OuterFixedT() {}

  float x = 0.0f;
  lull::MiddleFixedT mid;
  float y = 0.0f;
  float z = 0.0f;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class BasicsT {
 public:
  using FlatBufferType = Basics;

  BasicsT() {}

  bool b = 0;
  uint8_t u8 = 0;
  int8_t i8 = 0;
  uint16_t u16 = 0;
  int16_t i16 = 0;
  uint32_t u32 = 0;
  int32_t i32 = 0;
  uint64_t u64 = 0;
  int64_t i64 = 0;
  float r32 = 0.0f;
  double r64 = 0.0;
  std::string str;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

class ComplexT {
 public:
  using FlatBufferType = Complex;

  ComplexT() {}

  lull::Day day = lull::Day_Monday;
  lull::Flags flag = lull::Flags_High;
  lull::BitFlags bit_flag = lull::BitFlags_NONE;
  lull::OuterFixedT out;
  std::vector<lull::OuterFixedT> outs;
  std::string name;
  std::vector<std::string> names;
  std::vector<int32_t> numbers;
  lull::BasicsT basic;
  std::vector<lull::BasicsT> basics;
  mathfu::vec2 vec2 = {0.f, 0.f};
  std::vector<mathfu::vec2> vec2s;
  mathfu::vec3 vec3 = {0.f, 0.f, 0.f};
  std::vector<mathfu::vec3> vec3s;
  mathfu::vec4 vec4 = {0.f, 0.f, 0.f, 0.f};
  std::vector<mathfu::vec4> vec4s;
  mathfu::quat quat = {0.f, 0.f, 0.f, 1.f};
  std::vector<mathfu::quat> quats;
  lull::VariantDefT variant;
  lull::Optional<lull::InnerFixedT> nullable_struct;
  lull::Optional<lull::BasicsT> nullable_table;
  lull::Optional<mathfu::vec2> nullable_native;
  std::shared_ptr<lull::ComplexT> dynamic_table;

  template <typename Archive>
  void SerializeFlatbuffer(Archive archive);
};

template <typename Archive>
void DataBoolT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&value, 4, 0);
}

template <typename Archive>
void DataIntT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&value, 4, 0);
}

template <typename Archive>
void DataFloatT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&value, 4, 0.0f);
}

template <typename Archive>
void DataHashValueT::SerializeFlatbuffer(Archive archive) {
  archive.String(&value, 4);
}

template <typename Archive>
void DataStringT::SerializeFlatbuffer(Archive archive) {
  archive.String(&value, 4);
}

template <typename Archive>
void DataVec2T::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&value, 4);
}

template <typename Archive>
void DataVec3T::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&value, 4);
}

template <typename Archive>
void DataVec4T::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&value, 4);
}

template <typename Archive>
void DataQuatT::SerializeFlatbuffer(Archive archive) {
  archive.NativeStruct(&value, 4);
}

inline void VariantDefT::reset() {
  switch (type_) {
    case VariantDef_DataBool: {
      destroy<lull::DataBoolT>();
      break;
    }
    case VariantDef_DataInt: {
      destroy<lull::DataIntT>();
      break;
    }
    case VariantDef_DataFloat: {
      destroy<lull::DataFloatT>();
      break;
    }
    case VariantDef_DataString: {
      destroy<lull::DataStringT>();
      break;
    }
    case VariantDef_DataHashValue: {
      destroy<lull::DataHashValueT>();
      break;
    }
    case VariantDef_DataVec2: {
      destroy<lull::DataVec2T>();
      break;
    }
    case VariantDef_DataVec3: {
      destroy<lull::DataVec3T>();
      break;
    }
    case VariantDef_DataVec4: {
      destroy<lull::DataVec4T>();
      break;
    }
    case VariantDef_DataQuat: {
      destroy<lull::DataQuatT>();
      break;
    }
    default:
      break;
  }
  type_ = VariantDef_NONE;
}

inline void VariantDefT::assign(const VariantDefT& rhs) {
  reset();
  switch (rhs.type_) {
    case VariantDef_DataBool: {
      *set<lull::DataBoolT>() = *rhs.get<lull::DataBoolT>();
      break;
    }
    case VariantDef_DataInt: {
      *set<lull::DataIntT>() = *rhs.get<lull::DataIntT>();
      break;
    }
    case VariantDef_DataFloat: {
      *set<lull::DataFloatT>() = *rhs.get<lull::DataFloatT>();
      break;
    }
    case VariantDef_DataString: {
      *set<lull::DataStringT>() = *rhs.get<lull::DataStringT>();
      break;
    }
    case VariantDef_DataHashValue: {
      *set<lull::DataHashValueT>() = *rhs.get<lull::DataHashValueT>();
      break;
    }
    case VariantDef_DataVec2: {
      *set<lull::DataVec2T>() = *rhs.get<lull::DataVec2T>();
      break;
    }
    case VariantDef_DataVec3: {
      *set<lull::DataVec3T>() = *rhs.get<lull::DataVec3T>();
      break;
    }
    case VariantDef_DataVec4: {
      *set<lull::DataVec4T>() = *rhs.get<lull::DataVec4T>();
      break;
    }
    case VariantDef_DataQuat: {
      *set<lull::DataQuatT>() = *rhs.get<lull::DataQuatT>();
      break;
    }
    default:
      break;
  }
}

template <typename T>
T* VariantDefT::set() {
  reset();
  type_ = get_type<T>();
  if (type_ != kNone) {
    return new (&data_) T();
  }
  return nullptr;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataBoolT>() {
  return VariantDef_DataBool;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataIntT>() {
  return VariantDef_DataInt;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataFloatT>() {
  return VariantDef_DataFloat;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataStringT>() {
  return VariantDef_DataString;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataHashValueT>() {
  return VariantDef_DataHashValue;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataVec2T>() {
  return VariantDef_DataVec2;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataVec3T>() {
  return VariantDef_DataVec3;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataVec4T>() {
  return VariantDef_DataVec4;
}

template <>
inline VariantDef VariantDefT::get_type<lull::DataQuatT>() {
  return VariantDef_DataQuat;
}


template <typename Archive>
void VariantDefT::SerializeFlatbuffer(FlatBufferType type, Archive archive) {
  switch (type) {
    case VariantDef_DataBool: {
      if (archive.IsDestructive()) {
        set<lull::DataBoolT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataBoolT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataInt: {
      if (archive.IsDestructive()) {
        set<lull::DataIntT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataIntT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataFloat: {
      if (archive.IsDestructive()) {
        set<lull::DataFloatT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataFloatT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataString: {
      if (archive.IsDestructive()) {
        set<lull::DataStringT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataStringT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataHashValue: {
      if (archive.IsDestructive()) {
        set<lull::DataHashValueT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataHashValueT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataVec2: {
      if (archive.IsDestructive()) {
        set<lull::DataVec2T>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataVec2T>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataVec3: {
      if (archive.IsDestructive()) {
        set<lull::DataVec3T>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataVec3T>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataVec4: {
      if (archive.IsDestructive()) {
        set<lull::DataVec4T>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataVec4T>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    case VariantDef_DataQuat: {
      if (archive.IsDestructive()) {
        set<lull::DataQuatT>()->SerializeFlatbuffer(archive);
      } else {
        get<lull::DataQuatT>()->SerializeFlatbuffer(archive);
      }
      break;
    }
    default:
      if (archive.IsDestructive()) {
        reset();
      }
      break;
  }
}

template <typename Archive>
void InnerFixedT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&a, 0, 0);
  archive.Scalar(&b, 4, 0);
  archive.Scalar(&c, 8, 0);
}

template <typename Archive>
void MiddleFixedT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&t, 0, 0);
  archive.Struct(&in, 4);
  archive.Scalar(&u, 16, 0);
  archive.Scalar(&v, 20, 0);
}

template <typename Archive>
void OuterFixedT::SerializeFlatbuffer(Archive archive) {
  archive.Scalar(&x, 0, 0.0f);
  archive.Struct(&mid, 4);
  archive.Scalar(&y, 28, 0.0f);
  archive.Scalar(&z, 32, 0.0f);
}

template <typename Archive>
void BasicsT::SerializeFlatbuffer(Archive archive) {
  archive.String(&str, 26);
  archive.Scalar(&b, 4, 0);
  archive.Scalar(&u8, 6, 0);
  archive.Scalar(&i8, 8, 0);
  archive.Scalar(&u16, 10, 0);
  archive.Scalar(&i16, 12, 0);
  archive.Scalar(&u32, 14, 0);
  archive.Scalar(&i32, 16, 0);
  archive.Scalar(&u64, 18, 0);
  archive.Scalar(&i64, 20, 0);
  archive.Scalar(&r32, 22, 0.0f);
  archive.Scalar(&r64, 24, 0.0);
}

template <typename Archive>
void ComplexT::SerializeFlatbuffer(Archive archive) {
  archive.VectorOfStructs(&outs, 12);
  archive.String(&name, 14);
  archive.VectorOfStrings(&names, 16);
  archive.VectorOfScalars(&numbers, 18);
  archive.Table(&basic, 20);
  archive.VectorOfTables(&basics, 22);
  archive.VectorOfNativeStructs(&vec2s, 26);
  archive.VectorOfNativeStructs(&vec3s, 30);
  archive.VectorOfNativeStructs(&vec4s, 34);
  archive.VectorOfNativeStructs(&quats, 38);
  archive.Union(&variant, 42, lull::VariantDefT::kNone);
  archive.Table(&nullable_table, 46);
  archive.Table(&dynamic_table, 50);
  int8_t _day = static_cast<int8_t>(day);
  archive.Scalar(&_day, 4, lull::Day_Monday);
  day = static_cast<lull::Day>(_day);
  int8_t _flag = static_cast<int8_t>(flag);
  archive.Scalar(&_flag, 6, lull::Flags_High);
  flag = static_cast<lull::Flags>(_flag);
  int8_t _bit_flag = static_cast<int8_t>(bit_flag);
  archive.Scalar(&_bit_flag, 8, lull::BitFlags_NONE);
  bit_flag = static_cast<lull::BitFlags>(_bit_flag);
  archive.Struct(&out, 10);
  archive.NativeStruct(&vec2, 24);
  archive.NativeStruct(&vec3, 28);
  archive.NativeStruct(&vec4, 32);
  archive.NativeStruct(&quat, 36);
  archive.Struct(&nullable_struct, 44);
  archive.NativeStruct(&nullable_native, 48);
}

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::DataBoolT);
LULLABY_SETUP_TYPEID(lull::DataIntT);
LULLABY_SETUP_TYPEID(lull::DataFloatT);
LULLABY_SETUP_TYPEID(lull::DataHashValueT);
LULLABY_SETUP_TYPEID(lull::DataStringT);
LULLABY_SETUP_TYPEID(lull::DataVec2T);
LULLABY_SETUP_TYPEID(lull::DataVec3T);
LULLABY_SETUP_TYPEID(lull::DataVec4T);
LULLABY_SETUP_TYPEID(lull::DataQuatT);
LULLABY_SETUP_TYPEID(lull::VariantDefT);
LULLABY_SETUP_TYPEID(lull::Day);
LULLABY_SETUP_TYPEID(lull::Flags);
LULLABY_SETUP_TYPEID(lull::BitFlags);
LULLABY_SETUP_TYPEID(lull::InnerFixedT);
LULLABY_SETUP_TYPEID(lull::MiddleFixedT);
LULLABY_SETUP_TYPEID(lull::OuterFixedT);
LULLABY_SETUP_TYPEID(lull::BasicsT);
LULLABY_SETUP_TYPEID(lull::ComplexT);

#endif  // _BLAZE_OUT_K8_FASTBUILD_GENFILES_THIRD_PARTY_LULLABY_TOOLS_FLATC_GENERATED_H_