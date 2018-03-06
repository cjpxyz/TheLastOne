// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_
#define FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_

#include "flatbuffers/flatbuffers.h"

namespace Game {
namespace TheLastOne {

struct Vec3;

struct All_information;

struct Client_info;

struct Client_id;

struct Client_Shot_info;

MANUALLY_ALIGNED_STRUCT(4) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3() {
    memset(this, 0, sizeof(Vec3));
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

struct All_information FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_DATA = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<Client_info>> *data() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Client_info>> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DATA) &&
           verifier.Verify(data()) &&
           verifier.VerifyVectorOfTables(data()) &&
           verifier.EndTable();
  }
};

struct All_informationBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_data(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Client_info>>> data) {
    fbb_.AddOffset(All_information::VT_DATA, data);
  }
  explicit All_informationBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  All_informationBuilder &operator=(const All_informationBuilder &);
  flatbuffers::Offset<All_information> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<All_information>(end);
    return o;
  }
};

inline flatbuffers::Offset<All_information> CreateAll_information(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Client_info>>> data = 0) {
  All_informationBuilder builder_(_fbb);
  builder_.add_data(data);
  return builder_.Finish();
}

inline flatbuffers::Offset<All_information> CreateAll_informationDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<Client_info>> *data = nullptr) {
  return Game::TheLastOne::CreateAll_information(
      _fbb,
      data ? _fbb.CreateVector<flatbuffers::Offset<Client_info>>(*data) : 0);
}

struct Client_info FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_HP = 6,
    VT_ANIMATOR = 8,
    VT_SHOTTING = 10,
    VT_NAME = 12,
    VT_POSITION = 14,
    VT_ROTATION = 16
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  int32_t hp() const {
    return GetField<int32_t>(VT_HP, 0);
  }
  int32_t animator() const {
    return GetField<int32_t>(VT_ANIMATOR, 0);
  }
  bool Shotting() const {
    return GetField<uint8_t>(VT_SHOTTING, 0) != 0;
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const Vec3 *position() const {
    return GetStruct<const Vec3 *>(VT_POSITION);
  }
  const Vec3 *rotation() const {
    return GetStruct<const Vec3 *>(VT_ROTATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<int32_t>(verifier, VT_HP) &&
           VerifyField<int32_t>(verifier, VT_ANIMATOR) &&
           VerifyField<uint8_t>(verifier, VT_SHOTTING) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyField<Vec3>(verifier, VT_POSITION) &&
           VerifyField<Vec3>(verifier, VT_ROTATION) &&
           verifier.EndTable();
  }
};

struct Client_infoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(Client_info::VT_ID, id, 0);
  }
  void add_hp(int32_t hp) {
    fbb_.AddElement<int32_t>(Client_info::VT_HP, hp, 0);
  }
  void add_animator(int32_t animator) {
    fbb_.AddElement<int32_t>(Client_info::VT_ANIMATOR, animator, 0);
  }
  void add_Shotting(bool Shotting) {
    fbb_.AddElement<uint8_t>(Client_info::VT_SHOTTING, static_cast<uint8_t>(Shotting), 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Client_info::VT_NAME, name);
  }
  void add_position(const Vec3 *position) {
    fbb_.AddStruct(Client_info::VT_POSITION, position);
  }
  void add_rotation(const Vec3 *rotation) {
    fbb_.AddStruct(Client_info::VT_ROTATION, rotation);
  }
  explicit Client_infoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Client_infoBuilder &operator=(const Client_infoBuilder &);
  flatbuffers::Offset<Client_info> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Client_info>(end);
    return o;
  }
};

inline flatbuffers::Offset<Client_info> CreateClient_info(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    int32_t hp = 0,
    int32_t animator = 0,
    bool Shotting = false,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    const Vec3 *position = 0,
    const Vec3 *rotation = 0) {
  Client_infoBuilder builder_(_fbb);
  builder_.add_rotation(rotation);
  builder_.add_position(position);
  builder_.add_name(name);
  builder_.add_animator(animator);
  builder_.add_hp(hp);
  builder_.add_id(id);
  builder_.add_Shotting(Shotting);
  return builder_.Finish();
}

inline flatbuffers::Offset<Client_info> CreateClient_infoDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    int32_t hp = 0,
    int32_t animator = 0,
    bool Shotting = false,
    const char *name = nullptr,
    const Vec3 *position = 0,
    const Vec3 *rotation = 0) {
  return Game::TheLastOne::CreateClient_info(
      _fbb,
      id,
      hp,
      animator,
      Shotting,
      name ? _fbb.CreateString(name) : 0,
      position,
      rotation);
}

struct Client_id FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct Client_idBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(Client_id::VT_ID, id, 0);
  }
  explicit Client_idBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Client_idBuilder &operator=(const Client_idBuilder &);
  flatbuffers::Offset<Client_id> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Client_id>(end);
    return o;
  }
};

inline flatbuffers::Offset<Client_id> CreateClient_id(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0) {
  Client_idBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

struct Client_Shot_info FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           verifier.EndTable();
  }
};

struct Client_Shot_infoBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(Client_Shot_info::VT_ID, id, 0);
  }
  explicit Client_Shot_infoBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  Client_Shot_infoBuilder &operator=(const Client_Shot_infoBuilder &);
  flatbuffers::Offset<Client_Shot_info> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Client_Shot_info>(end);
    return o;
  }
};

inline flatbuffers::Offset<Client_Shot_info> CreateClient_Shot_info(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0) {
  Client_Shot_infoBuilder builder_(_fbb);
  builder_.add_id(id);
  return builder_.Finish();
}

}  // namespace TheLastOne
}  // namespace Game

#endif  // FLATBUFFERS_GENERATED_FLATBUFFERS_GAME_THELASTONE_H_
