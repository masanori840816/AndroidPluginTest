﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t1563;
// System.Security.Cryptography.RC2
struct RC2_t1135;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
 void RC2Transform__ctor_m8444 (RC2Transform_t1563 * __this, RC2_t1135 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t17* ___key, ByteU5BU5D_t17* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
 void RC2Transform__cctor_m8445 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
 void RC2Transform_ECB_m8446 (RC2Transform_t1563 * __this, ByteU5BU5D_t17* ___input, ByteU5BU5D_t17* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
