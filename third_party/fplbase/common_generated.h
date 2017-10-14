/*
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COMMON_FPLBASE_H_
#define FLATBUFFERS_GENERATED_COMMON_FPLBASE_H_

#include "flatbuffers/flatbuffers.h"

namespace fplbase {

struct Vec2i;

struct Vec3i;

struct Vec4i;

struct Vec2;

struct Vec3;

struct Vec4;

struct Vec4ub;

struct Mat4;

struct Mat3x4;

struct ColorRGBA;

enum Axis {
  Axis_X = 0,
  Axis_Y = 1,
  Axis_Z = 2,
  Axis_MIN = Axis_X,
  Axis_MAX = Axis_Z
};

inline Axis (&EnumValuesAxis())[3] {
  static Axis values[] = {
    Axis_X,
    Axis_Y,
    Axis_Z
  };
  return values;
}

inline const char **EnumNamesAxis() {
  static const char *names[] = {
    "X",
    "Y",
    "Z",
    nullptr
  };
  return names;
}

inline const char *EnumNameAxis(Axis e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesAxis()[index];
}

MANUALLY_ALIGNED_STRUCT(4) Vec2i FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t x_;
  int32_t y_;

 public:
  Vec2i() {
    memset(this, 0, sizeof(Vec2i));
  }
  Vec2i(const Vec2i &_o) {
    memcpy(this, &_o, sizeof(Vec2i));
  }
  Vec2i(int32_t _x, int32_t _y)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)) {
  }
  int32_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  int32_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
};
STRUCT_END(Vec2i, 8);

MANUALLY_ALIGNED_STRUCT(4) Vec3i FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t x_;
  int32_t y_;
  int32_t z_;

 public:
  Vec3i() {
    memset(this, 0, sizeof(Vec3i));
  }
  Vec3i(const Vec3i &_o) {
    memcpy(this, &_o, sizeof(Vec3i));
  }
  Vec3i(int32_t _x, int32_t _y, int32_t _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  int32_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  int32_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  int32_t z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(Vec3i, 12);

MANUALLY_ALIGNED_STRUCT(4) Vec4i FLATBUFFERS_FINAL_CLASS {
 private:
  int32_t x_;
  int32_t y_;
  int32_t z_;
  int32_t w_;

 public:
  Vec4i() {
    memset(this, 0, sizeof(Vec4i));
  }
  Vec4i(const Vec4i &_o) {
    memcpy(this, &_o, sizeof(Vec4i));
  }
  Vec4i(int32_t _x, int32_t _y, int32_t _z, int32_t _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  int32_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  int32_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  int32_t z() const {
    return flatbuffers::EndianScalar(z_);
  }
  int32_t w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
STRUCT_END(Vec4i, 16);

MANUALLY_ALIGNED_STRUCT(4) Vec2 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;

 public:
  Vec2() {
    memset(this, 0, sizeof(Vec2));
  }
  Vec2(const Vec2 &_o) {
    memcpy(this, &_o, sizeof(Vec2));
  }
  Vec2(float _x, float _y)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
};
STRUCT_END(Vec2, 8);

MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3() {
    memset(this, 0, sizeof(Vec3));
  }
  Vec3(const Vec3 &_o) {
    memcpy(this, &_o, sizeof(Vec3));
  }
  Vec3(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
STRUCT_END(Vec3, 12);

MANUALLY_ALIGNED_STRUCT(4) Vec4 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  float w_;

 public:
  Vec4() {
    memset(this, 0, sizeof(Vec4));
  }
  Vec4(const Vec4 &_o) {
    memcpy(this, &_o, sizeof(Vec4));
  }
  Vec4(float _x, float _y, float _z, float _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  float w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
STRUCT_END(Vec4, 16);

MANUALLY_ALIGNED_STRUCT(1) Vec4ub FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t x_;
  uint8_t y_;
  uint8_t z_;
  uint8_t w_;

 public:
  Vec4ub() {
    memset(this, 0, sizeof(Vec4ub));
  }
  Vec4ub(const Vec4ub &_o) {
    memcpy(this, &_o, sizeof(Vec4ub));
  }
  Vec4ub(uint8_t _x, uint8_t _y, uint8_t _z, uint8_t _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  uint8_t x() const {
    return flatbuffers::EndianScalar(x_);
  }
  uint8_t y() const {
    return flatbuffers::EndianScalar(y_);
  }
  uint8_t z() const {
    return flatbuffers::EndianScalar(z_);
  }
  uint8_t w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
STRUCT_END(Vec4ub, 4);

MANUALLY_ALIGNED_STRUCT(4) Mat4 FLATBUFFERS_FINAL_CLASS {
 private:
  Vec4 c0_;
  Vec4 c1_;
  Vec4 c2_;
  Vec4 c3_;

 public:
  Mat4() {
    memset(this, 0, sizeof(Mat4));
  }
  Mat4(const Mat4 &_o) {
    memcpy(this, &_o, sizeof(Mat4));
  }
  Mat4(const Vec4 &_c0, const Vec4 &_c1, const Vec4 &_c2, const Vec4 &_c3)
      : c0_(_c0),
        c1_(_c1),
        c2_(_c2),
        c3_(_c3) {
  }
  const Vec4 &c0() const {
    return c0_;
  }
  const Vec4 &c1() const {
    return c1_;
  }
  const Vec4 &c2() const {
    return c2_;
  }
  const Vec4 &c3() const {
    return c3_;
  }
};
STRUCT_END(Mat4, 64);

MANUALLY_ALIGNED_STRUCT(4) Mat3x4 FLATBUFFERS_FINAL_CLASS {
 private:
  Vec4 c0_;
  Vec4 c1_;
  Vec4 c2_;

 public:
  Mat3x4() {
    memset(this, 0, sizeof(Mat3x4));
  }
  Mat3x4(const Mat3x4 &_o) {
    memcpy(this, &_o, sizeof(Mat3x4));
  }
  Mat3x4(const Vec4 &_c0, const Vec4 &_c1, const Vec4 &_c2)
      : c0_(_c0),
        c1_(_c1),
        c2_(_c2) {
  }
  const Vec4 &c0() const {
    return c0_;
  }
  const Vec4 &c1() const {
    return c1_;
  }
  const Vec4 &c2() const {
    return c2_;
  }
};
STRUCT_END(Mat3x4, 48);

MANUALLY_ALIGNED_STRUCT(4) ColorRGBA FLATBUFFERS_FINAL_CLASS {
 private:
  float r_;
  float g_;
  float b_;
  float a_;

 public:
  ColorRGBA() {
    memset(this, 0, sizeof(ColorRGBA));
  }
  ColorRGBA(const ColorRGBA &_o) {
    memcpy(this, &_o, sizeof(ColorRGBA));
  }
  ColorRGBA(float _r, float _g, float _b, float _a)
      : r_(flatbuffers::EndianScalar(_r)),
        g_(flatbuffers::EndianScalar(_g)),
        b_(flatbuffers::EndianScalar(_b)),
        a_(flatbuffers::EndianScalar(_a)) {
  }
  float r() const {
    return flatbuffers::EndianScalar(r_);
  }
  float g() const {
    return flatbuffers::EndianScalar(g_);
  }
  float b() const {
    return flatbuffers::EndianScalar(b_);
  }
  float a() const {
    return flatbuffers::EndianScalar(a_);
  }
};
STRUCT_END(ColorRGBA, 16);

}  // namespace fplbase

#endif  // FLATBUFFERS_GENERATED_COMMON_FPLBASE_H_
