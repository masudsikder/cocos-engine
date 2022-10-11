// clang-format off

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.1.0
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/****************************************************************************
 Copyright (c) 2022 Xiamen Yaji Software Co., Ltd.

 http://www.cocos.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated engine source code (the "Software"), a limited,
 worldwide, royalty-free, non-assignable, revocable and non-exclusive license
 to use Cocos Creator solely to develop games on your target platforms. You shall
 not use Cocos Creator software for developing other software or tools that's
 used for developing games. You are not granted to publish, distribute,
 sublicense, and/or sell copies of Cocos Creator.

 The software or tools in this License Agreement are licensed, not sold.
 Xiamen Yaji Software Co., Ltd. reserves all rights not expressly granted to you.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
****************************************************************************/

#pragma once
#include "bindings/jswrapper/SeApi.h"
#include "bindings/manual/jsb_conversions.h"
#include "physics/PhysicsSDK.h"
#include "bindings/auto/jsb_scene_auto.h"



bool register_all_physics(se::Object* obj);


JSB_REGISTER_OBJECT_TYPE(cc::physics::ILifecycle);
extern se::Object *__jsb_cc_physics_ILifecycle_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ILifecycle_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::TriggerEventPair);
extern se::Object *__jsb_cc_physics_TriggerEventPair_proto; // NOLINT
extern se::Class * __jsb_cc_physics_TriggerEventPair_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::TriggerEventPair * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::ContactPoint);
extern se::Object *__jsb_cc_physics_ContactPoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ContactPoint_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::ContactPoint * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::ContactEventPair);
extern se::Object *__jsb_cc_physics_ContactEventPair_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ContactEventPair_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::ContactEventPair * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::ConvexDesc);
extern se::Object *__jsb_cc_physics_ConvexDesc_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ConvexDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::ConvexDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::TrimeshDesc);
extern se::Object *__jsb_cc_physics_TrimeshDesc_proto; // NOLINT
extern se::Class * __jsb_cc_physics_TrimeshDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::TrimeshDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::HeightFieldDesc);
extern se::Object *__jsb_cc_physics_HeightFieldDesc_proto; // NOLINT
extern se::Class * __jsb_cc_physics_HeightFieldDesc_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::HeightFieldDesc * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::RaycastOptions);
extern se::Object *__jsb_cc_physics_RaycastOptions_proto; // NOLINT
extern se::Class * __jsb_cc_physics_RaycastOptions_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::RaycastOptions * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::RaycastResult);
extern se::Object *__jsb_cc_physics_RaycastResult_proto; // NOLINT
extern se::Class * __jsb_cc_physics_RaycastResult_class; // NOLINT


template<>
bool sevalue_to_native(const se::Value &from, cc::physics::RaycastResult * to, se::Object *ctx);


JSB_REGISTER_OBJECT_TYPE(cc::physics::IPhysicsWorld);
extern se::Object *__jsb_cc_physics_IPhysicsWorld_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IPhysicsWorld_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IRigidBody);
extern se::Object *__jsb_cc_physics_IRigidBody_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IRigidBody_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IBaseShape);
extern se::Object *__jsb_cc_physics_IBaseShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IBaseShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ISphereShape);
extern se::Object *__jsb_cc_physics_ISphereShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ISphereShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IBoxShape);
extern se::Object *__jsb_cc_physics_IBoxShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IBoxShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ICapsuleShape);
extern se::Object *__jsb_cc_physics_ICapsuleShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ICapsuleShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ICylinderShape);
extern se::Object *__jsb_cc_physics_ICylinderShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ICylinderShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IConeShape);
extern se::Object *__jsb_cc_physics_IConeShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IConeShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IPlaneShape);
extern se::Object *__jsb_cc_physics_IPlaneShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IPlaneShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ITrimeshShape);
extern se::Object *__jsb_cc_physics_ITrimeshShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ITrimeshShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ITerrainShape);
extern se::Object *__jsb_cc_physics_ITerrainShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ITerrainShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IBaseJoint);
extern se::Object *__jsb_cc_physics_IBaseJoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IBaseJoint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IDistanceJoint);
extern se::Object *__jsb_cc_physics_IDistanceJoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IDistanceJoint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::IRevoluteJoint);
extern se::Object *__jsb_cc_physics_IRevoluteJoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_IRevoluteJoint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::World);
extern se::Object *__jsb_cc_physics_World_proto; // NOLINT
extern se::Class * __jsb_cc_physics_World_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::RigidBody);
extern se::Object *__jsb_cc_physics_RigidBody_proto; // NOLINT
extern se::Class * __jsb_cc_physics_RigidBody_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::SphereShape);
extern se::Object *__jsb_cc_physics_SphereShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_SphereShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::BoxShape);
extern se::Object *__jsb_cc_physics_BoxShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_BoxShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::CapsuleShape);
extern se::Object *__jsb_cc_physics_CapsuleShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_CapsuleShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::PlaneShape);
extern se::Object *__jsb_cc_physics_PlaneShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_PlaneShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::TrimeshShape);
extern se::Object *__jsb_cc_physics_TrimeshShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_TrimeshShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::CylinderShape);
extern se::Object *__jsb_cc_physics_CylinderShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_CylinderShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::ConeShape);
extern se::Object *__jsb_cc_physics_ConeShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_ConeShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::TerrainShape);
extern se::Object *__jsb_cc_physics_TerrainShape_proto; // NOLINT
extern se::Class * __jsb_cc_physics_TerrainShape_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::RevoluteJoint);
extern se::Object *__jsb_cc_physics_RevoluteJoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_RevoluteJoint_class; // NOLINT


JSB_REGISTER_OBJECT_TYPE(cc::physics::DistanceJoint);
extern se::Object *__jsb_cc_physics_DistanceJoint_proto; // NOLINT
extern se::Class * __jsb_cc_physics_DistanceJoint_class; // NOLINT

// clang-format on