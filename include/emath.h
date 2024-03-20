
// generated from codegen/templates/math.h

#ifndef E_MATH_API_HPP
#define E_MATH_API_HPP

// stdlib
#include <stdbool.h>
// python
#define PY_SSIZE_T_CLEAN
#include <Python.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef PyTypeObject *(*EMathApi_GetType)();
typedef size_t (*EMathApi_GetArrayLength)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateBVector1)(const bool *);
    typedef PyObject *(*EMathApi_CreateBVector1Array)(size_t, const bool *);
    typedef const bool *(*EMathApi_GetBVector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDVector1)(const double *);
    typedef PyObject *(*EMathApi_CreateDVector1Array)(size_t, const double *);
    typedef const double *(*EMathApi_GetDVector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFVector1)(const float *);
    typedef PyObject *(*EMathApi_CreateFVector1Array)(size_t, const float *);
    typedef const float *(*EMathApi_GetFVector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI8Vector1)(const int8_t *);
    typedef PyObject *(*EMathApi_CreateI8Vector1Array)(size_t, const int8_t *);
    typedef const int8_t *(*EMathApi_GetI8Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU8Vector1)(const uint8_t *);
    typedef PyObject *(*EMathApi_CreateU8Vector1Array)(size_t, const uint8_t *);
    typedef const uint8_t *(*EMathApi_GetU8Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI16Vector1)(const int16_t *);
    typedef PyObject *(*EMathApi_CreateI16Vector1Array)(size_t, const int16_t *);
    typedef const int16_t *(*EMathApi_GetI16Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU16Vector1)(const uint16_t *);
    typedef PyObject *(*EMathApi_CreateU16Vector1Array)(size_t, const uint16_t *);
    typedef const uint16_t *(*EMathApi_GetU16Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI32Vector1)(const int32_t *);
    typedef PyObject *(*EMathApi_CreateI32Vector1Array)(size_t, const int32_t *);
    typedef const int32_t *(*EMathApi_GetI32Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU32Vector1)(const uint32_t *);
    typedef PyObject *(*EMathApi_CreateU32Vector1Array)(size_t, const uint32_t *);
    typedef const uint32_t *(*EMathApi_GetU32Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateIVector1)(const int *);
    typedef PyObject *(*EMathApi_CreateIVector1Array)(size_t, const int *);
    typedef const int *(*EMathApi_GetIVector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateUVector1)(const unsigned int *);
    typedef PyObject *(*EMathApi_CreateUVector1Array)(size_t, const unsigned int *);
    typedef const unsigned int *(*EMathApi_GetUVector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI64Vector1)(const int64_t *);
    typedef PyObject *(*EMathApi_CreateI64Vector1Array)(size_t, const int64_t *);
    typedef const int64_t *(*EMathApi_GetI64Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU64Vector1)(const uint64_t *);
    typedef PyObject *(*EMathApi_CreateU64Vector1Array)(size_t, const uint64_t *);
    typedef const uint64_t *(*EMathApi_GetU64Vector1ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateBVector2)(const bool *);
    typedef PyObject *(*EMathApi_CreateBVector2Array)(size_t, const bool *);
    typedef const bool *(*EMathApi_GetBVector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDVector2)(const double *);
    typedef PyObject *(*EMathApi_CreateDVector2Array)(size_t, const double *);
    typedef const double *(*EMathApi_GetDVector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFVector2)(const float *);
    typedef PyObject *(*EMathApi_CreateFVector2Array)(size_t, const float *);
    typedef const float *(*EMathApi_GetFVector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI8Vector2)(const int8_t *);
    typedef PyObject *(*EMathApi_CreateI8Vector2Array)(size_t, const int8_t *);
    typedef const int8_t *(*EMathApi_GetI8Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU8Vector2)(const uint8_t *);
    typedef PyObject *(*EMathApi_CreateU8Vector2Array)(size_t, const uint8_t *);
    typedef const uint8_t *(*EMathApi_GetU8Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI16Vector2)(const int16_t *);
    typedef PyObject *(*EMathApi_CreateI16Vector2Array)(size_t, const int16_t *);
    typedef const int16_t *(*EMathApi_GetI16Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU16Vector2)(const uint16_t *);
    typedef PyObject *(*EMathApi_CreateU16Vector2Array)(size_t, const uint16_t *);
    typedef const uint16_t *(*EMathApi_GetU16Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI32Vector2)(const int32_t *);
    typedef PyObject *(*EMathApi_CreateI32Vector2Array)(size_t, const int32_t *);
    typedef const int32_t *(*EMathApi_GetI32Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU32Vector2)(const uint32_t *);
    typedef PyObject *(*EMathApi_CreateU32Vector2Array)(size_t, const uint32_t *);
    typedef const uint32_t *(*EMathApi_GetU32Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateIVector2)(const int *);
    typedef PyObject *(*EMathApi_CreateIVector2Array)(size_t, const int *);
    typedef const int *(*EMathApi_GetIVector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateUVector2)(const unsigned int *);
    typedef PyObject *(*EMathApi_CreateUVector2Array)(size_t, const unsigned int *);
    typedef const unsigned int *(*EMathApi_GetUVector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI64Vector2)(const int64_t *);
    typedef PyObject *(*EMathApi_CreateI64Vector2Array)(size_t, const int64_t *);
    typedef const int64_t *(*EMathApi_GetI64Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU64Vector2)(const uint64_t *);
    typedef PyObject *(*EMathApi_CreateU64Vector2Array)(size_t, const uint64_t *);
    typedef const uint64_t *(*EMathApi_GetU64Vector2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateBVector3)(const bool *);
    typedef PyObject *(*EMathApi_CreateBVector3Array)(size_t, const bool *);
    typedef const bool *(*EMathApi_GetBVector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDVector3)(const double *);
    typedef PyObject *(*EMathApi_CreateDVector3Array)(size_t, const double *);
    typedef const double *(*EMathApi_GetDVector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFVector3)(const float *);
    typedef PyObject *(*EMathApi_CreateFVector3Array)(size_t, const float *);
    typedef const float *(*EMathApi_GetFVector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI8Vector3)(const int8_t *);
    typedef PyObject *(*EMathApi_CreateI8Vector3Array)(size_t, const int8_t *);
    typedef const int8_t *(*EMathApi_GetI8Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU8Vector3)(const uint8_t *);
    typedef PyObject *(*EMathApi_CreateU8Vector3Array)(size_t, const uint8_t *);
    typedef const uint8_t *(*EMathApi_GetU8Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI16Vector3)(const int16_t *);
    typedef PyObject *(*EMathApi_CreateI16Vector3Array)(size_t, const int16_t *);
    typedef const int16_t *(*EMathApi_GetI16Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU16Vector3)(const uint16_t *);
    typedef PyObject *(*EMathApi_CreateU16Vector3Array)(size_t, const uint16_t *);
    typedef const uint16_t *(*EMathApi_GetU16Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI32Vector3)(const int32_t *);
    typedef PyObject *(*EMathApi_CreateI32Vector3Array)(size_t, const int32_t *);
    typedef const int32_t *(*EMathApi_GetI32Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU32Vector3)(const uint32_t *);
    typedef PyObject *(*EMathApi_CreateU32Vector3Array)(size_t, const uint32_t *);
    typedef const uint32_t *(*EMathApi_GetU32Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateIVector3)(const int *);
    typedef PyObject *(*EMathApi_CreateIVector3Array)(size_t, const int *);
    typedef const int *(*EMathApi_GetIVector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateUVector3)(const unsigned int *);
    typedef PyObject *(*EMathApi_CreateUVector3Array)(size_t, const unsigned int *);
    typedef const unsigned int *(*EMathApi_GetUVector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI64Vector3)(const int64_t *);
    typedef PyObject *(*EMathApi_CreateI64Vector3Array)(size_t, const int64_t *);
    typedef const int64_t *(*EMathApi_GetI64Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU64Vector3)(const uint64_t *);
    typedef PyObject *(*EMathApi_CreateU64Vector3Array)(size_t, const uint64_t *);
    typedef const uint64_t *(*EMathApi_GetU64Vector3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateBVector4)(const bool *);
    typedef PyObject *(*EMathApi_CreateBVector4Array)(size_t, const bool *);
    typedef const bool *(*EMathApi_GetBVector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDVector4)(const double *);
    typedef PyObject *(*EMathApi_CreateDVector4Array)(size_t, const double *);
    typedef const double *(*EMathApi_GetDVector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFVector4)(const float *);
    typedef PyObject *(*EMathApi_CreateFVector4Array)(size_t, const float *);
    typedef const float *(*EMathApi_GetFVector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI8Vector4)(const int8_t *);
    typedef PyObject *(*EMathApi_CreateI8Vector4Array)(size_t, const int8_t *);
    typedef const int8_t *(*EMathApi_GetI8Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU8Vector4)(const uint8_t *);
    typedef PyObject *(*EMathApi_CreateU8Vector4Array)(size_t, const uint8_t *);
    typedef const uint8_t *(*EMathApi_GetU8Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI16Vector4)(const int16_t *);
    typedef PyObject *(*EMathApi_CreateI16Vector4Array)(size_t, const int16_t *);
    typedef const int16_t *(*EMathApi_GetI16Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU16Vector4)(const uint16_t *);
    typedef PyObject *(*EMathApi_CreateU16Vector4Array)(size_t, const uint16_t *);
    typedef const uint16_t *(*EMathApi_GetU16Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI32Vector4)(const int32_t *);
    typedef PyObject *(*EMathApi_CreateI32Vector4Array)(size_t, const int32_t *);
    typedef const int32_t *(*EMathApi_GetI32Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU32Vector4)(const uint32_t *);
    typedef PyObject *(*EMathApi_CreateU32Vector4Array)(size_t, const uint32_t *);
    typedef const uint32_t *(*EMathApi_GetU32Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateIVector4)(const int *);
    typedef PyObject *(*EMathApi_CreateIVector4Array)(size_t, const int *);
    typedef const int *(*EMathApi_GetIVector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateUVector4)(const unsigned int *);
    typedef PyObject *(*EMathApi_CreateUVector4Array)(size_t, const unsigned int *);
    typedef const unsigned int *(*EMathApi_GetUVector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI64Vector4)(const int64_t *);
    typedef PyObject *(*EMathApi_CreateI64Vector4Array)(size_t, const int64_t *);
    typedef const int64_t *(*EMathApi_GetI64Vector4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU64Vector4)(const uint64_t *);
    typedef PyObject *(*EMathApi_CreateU64Vector4Array)(size_t, const uint64_t *);
    typedef const uint64_t *(*EMathApi_GetU64Vector4ValuePointer)(const PyObject *);





    typedef PyObject *(*EMathApi_CreateDMatrix2x2)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix2x2Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix2x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix2x2)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix2x2Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix2x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix2x3)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix2x3Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix2x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix2x3)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix2x3Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix2x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix2x4)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix2x4Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix2x4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix2x4)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix2x4Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix2x4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix3x2)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix3x2Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix3x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix3x2)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix3x2Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix3x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix3x3)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix3x3Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix3x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix3x3)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix3x3Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix3x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix3x4)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix3x4Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix3x4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix3x4)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix3x4Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix3x4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix4x2)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix4x2Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix4x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix4x2)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix4x2Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix4x2ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix4x3)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix4x3Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix4x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix4x3)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix4x3Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix4x3ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDMatrix4x4)(const double *);
    typedef PyObject *(*EMathApi_CreateDMatrix4x4Array)(size_t, const double *);
    typedef double *(*EMathApi_GetDMatrix4x4ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFMatrix4x4)(const float *);
    typedef PyObject *(*EMathApi_CreateFMatrix4x4Array)(size_t, const float *);
    typedef float *(*EMathApi_GetFMatrix4x4ValuePointer)(const PyObject *);





    typedef PyObject *(*EMathApi_CreateDQuaternion)(const double *);
    typedef PyObject *(*EMathApi_CreateDQuaternionArray)(size_t, const double *);
    typedef double *(*EMathApi_GetDQuaternionValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFQuaternion)(const float *);
    typedef PyObject *(*EMathApi_CreateFQuaternionArray)(size_t, const float *);
    typedef float *(*EMathApi_GetFQuaternionValuePointer)(const PyObject *);





    typedef PyObject *(*EMathApi_CreateBArray)(size_t, const bool *);
    typedef bool *(*EMathApi_GetBValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateDArray)(size_t, const double *);
    typedef double *(*EMathApi_GetDValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateFArray)(size_t, const float *);
    typedef float *(*EMathApi_GetFValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI8Array)(size_t, const int8_t *);
    typedef int8_t *(*EMathApi_GetI8ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU8Array)(size_t, const uint8_t *);
    typedef uint8_t *(*EMathApi_GetU8ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI16Array)(size_t, const int16_t *);
    typedef int16_t *(*EMathApi_GetI16ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU16Array)(size_t, const uint16_t *);
    typedef uint16_t *(*EMathApi_GetU16ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI32Array)(size_t, const int32_t *);
    typedef int32_t *(*EMathApi_GetI32ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU32Array)(size_t, const uint32_t *);
    typedef uint32_t *(*EMathApi_GetU32ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateIArray)(size_t, const int *);
    typedef int *(*EMathApi_GetIValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateUArray)(size_t, const unsigned int *);
    typedef unsigned int *(*EMathApi_GetUValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateI64Array)(size_t, const int64_t *);
    typedef int64_t *(*EMathApi_GetI64ValuePointer)(const PyObject *);



    typedef PyObject *(*EMathApi_CreateU64Array)(size_t, const uint64_t *);
    typedef uint64_t *(*EMathApi_GetU64ValuePointer)(const PyObject *);




struct EMathApi
{
    const size_t version;

        EMathApi_GetType BVector1_GetType;
        EMathApi_GetType BVector1Array_GetType;
        EMathApi_CreateBVector1 BVector1_Create;
        EMathApi_CreateBVector1Array BVector1Array_Create;
        EMathApi_GetBVector1ValuePointer BVector1_GetValuePointer;
        EMathApi_GetBVector1ValuePointer BVector1Array_GetValuePointer;
        EMathApi_GetArrayLength BVector1Array_GetLength;

        EMathApi_GetType DVector1_GetType;
        EMathApi_GetType DVector1Array_GetType;
        EMathApi_CreateDVector1 DVector1_Create;
        EMathApi_CreateDVector1Array DVector1Array_Create;
        EMathApi_GetDVector1ValuePointer DVector1_GetValuePointer;
        EMathApi_GetDVector1ValuePointer DVector1Array_GetValuePointer;
        EMathApi_GetArrayLength DVector1Array_GetLength;

        EMathApi_GetType FVector1_GetType;
        EMathApi_GetType FVector1Array_GetType;
        EMathApi_CreateFVector1 FVector1_Create;
        EMathApi_CreateFVector1Array FVector1Array_Create;
        EMathApi_GetFVector1ValuePointer FVector1_GetValuePointer;
        EMathApi_GetFVector1ValuePointer FVector1Array_GetValuePointer;
        EMathApi_GetArrayLength FVector1Array_GetLength;

        EMathApi_GetType I8Vector1_GetType;
        EMathApi_GetType I8Vector1Array_GetType;
        EMathApi_CreateI8Vector1 I8Vector1_Create;
        EMathApi_CreateI8Vector1Array I8Vector1Array_Create;
        EMathApi_GetI8Vector1ValuePointer I8Vector1_GetValuePointer;
        EMathApi_GetI8Vector1ValuePointer I8Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength I8Vector1Array_GetLength;

        EMathApi_GetType U8Vector1_GetType;
        EMathApi_GetType U8Vector1Array_GetType;
        EMathApi_CreateU8Vector1 U8Vector1_Create;
        EMathApi_CreateU8Vector1Array U8Vector1Array_Create;
        EMathApi_GetU8Vector1ValuePointer U8Vector1_GetValuePointer;
        EMathApi_GetU8Vector1ValuePointer U8Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength U8Vector1Array_GetLength;

        EMathApi_GetType I16Vector1_GetType;
        EMathApi_GetType I16Vector1Array_GetType;
        EMathApi_CreateI16Vector1 I16Vector1_Create;
        EMathApi_CreateI16Vector1Array I16Vector1Array_Create;
        EMathApi_GetI16Vector1ValuePointer I16Vector1_GetValuePointer;
        EMathApi_GetI16Vector1ValuePointer I16Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength I16Vector1Array_GetLength;

        EMathApi_GetType U16Vector1_GetType;
        EMathApi_GetType U16Vector1Array_GetType;
        EMathApi_CreateU16Vector1 U16Vector1_Create;
        EMathApi_CreateU16Vector1Array U16Vector1Array_Create;
        EMathApi_GetU16Vector1ValuePointer U16Vector1_GetValuePointer;
        EMathApi_GetU16Vector1ValuePointer U16Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength U16Vector1Array_GetLength;

        EMathApi_GetType I32Vector1_GetType;
        EMathApi_GetType I32Vector1Array_GetType;
        EMathApi_CreateI32Vector1 I32Vector1_Create;
        EMathApi_CreateI32Vector1Array I32Vector1Array_Create;
        EMathApi_GetI32Vector1ValuePointer I32Vector1_GetValuePointer;
        EMathApi_GetI32Vector1ValuePointer I32Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength I32Vector1Array_GetLength;

        EMathApi_GetType U32Vector1_GetType;
        EMathApi_GetType U32Vector1Array_GetType;
        EMathApi_CreateU32Vector1 U32Vector1_Create;
        EMathApi_CreateU32Vector1Array U32Vector1Array_Create;
        EMathApi_GetU32Vector1ValuePointer U32Vector1_GetValuePointer;
        EMathApi_GetU32Vector1ValuePointer U32Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength U32Vector1Array_GetLength;

        EMathApi_GetType IVector1_GetType;
        EMathApi_GetType IVector1Array_GetType;
        EMathApi_CreateIVector1 IVector1_Create;
        EMathApi_CreateIVector1Array IVector1Array_Create;
        EMathApi_GetIVector1ValuePointer IVector1_GetValuePointer;
        EMathApi_GetIVector1ValuePointer IVector1Array_GetValuePointer;
        EMathApi_GetArrayLength IVector1Array_GetLength;

        EMathApi_GetType UVector1_GetType;
        EMathApi_GetType UVector1Array_GetType;
        EMathApi_CreateUVector1 UVector1_Create;
        EMathApi_CreateUVector1Array UVector1Array_Create;
        EMathApi_GetUVector1ValuePointer UVector1_GetValuePointer;
        EMathApi_GetUVector1ValuePointer UVector1Array_GetValuePointer;
        EMathApi_GetArrayLength UVector1Array_GetLength;

        EMathApi_GetType I64Vector1_GetType;
        EMathApi_GetType I64Vector1Array_GetType;
        EMathApi_CreateI64Vector1 I64Vector1_Create;
        EMathApi_CreateI64Vector1Array I64Vector1Array_Create;
        EMathApi_GetI64Vector1ValuePointer I64Vector1_GetValuePointer;
        EMathApi_GetI64Vector1ValuePointer I64Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength I64Vector1Array_GetLength;

        EMathApi_GetType U64Vector1_GetType;
        EMathApi_GetType U64Vector1Array_GetType;
        EMathApi_CreateU64Vector1 U64Vector1_Create;
        EMathApi_CreateU64Vector1Array U64Vector1Array_Create;
        EMathApi_GetU64Vector1ValuePointer U64Vector1_GetValuePointer;
        EMathApi_GetU64Vector1ValuePointer U64Vector1Array_GetValuePointer;
        EMathApi_GetArrayLength U64Vector1Array_GetLength;

        EMathApi_GetType BVector2_GetType;
        EMathApi_GetType BVector2Array_GetType;
        EMathApi_CreateBVector2 BVector2_Create;
        EMathApi_CreateBVector2Array BVector2Array_Create;
        EMathApi_GetBVector2ValuePointer BVector2_GetValuePointer;
        EMathApi_GetBVector2ValuePointer BVector2Array_GetValuePointer;
        EMathApi_GetArrayLength BVector2Array_GetLength;

        EMathApi_GetType DVector2_GetType;
        EMathApi_GetType DVector2Array_GetType;
        EMathApi_CreateDVector2 DVector2_Create;
        EMathApi_CreateDVector2Array DVector2Array_Create;
        EMathApi_GetDVector2ValuePointer DVector2_GetValuePointer;
        EMathApi_GetDVector2ValuePointer DVector2Array_GetValuePointer;
        EMathApi_GetArrayLength DVector2Array_GetLength;

        EMathApi_GetType FVector2_GetType;
        EMathApi_GetType FVector2Array_GetType;
        EMathApi_CreateFVector2 FVector2_Create;
        EMathApi_CreateFVector2Array FVector2Array_Create;
        EMathApi_GetFVector2ValuePointer FVector2_GetValuePointer;
        EMathApi_GetFVector2ValuePointer FVector2Array_GetValuePointer;
        EMathApi_GetArrayLength FVector2Array_GetLength;

        EMathApi_GetType I8Vector2_GetType;
        EMathApi_GetType I8Vector2Array_GetType;
        EMathApi_CreateI8Vector2 I8Vector2_Create;
        EMathApi_CreateI8Vector2Array I8Vector2Array_Create;
        EMathApi_GetI8Vector2ValuePointer I8Vector2_GetValuePointer;
        EMathApi_GetI8Vector2ValuePointer I8Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength I8Vector2Array_GetLength;

        EMathApi_GetType U8Vector2_GetType;
        EMathApi_GetType U8Vector2Array_GetType;
        EMathApi_CreateU8Vector2 U8Vector2_Create;
        EMathApi_CreateU8Vector2Array U8Vector2Array_Create;
        EMathApi_GetU8Vector2ValuePointer U8Vector2_GetValuePointer;
        EMathApi_GetU8Vector2ValuePointer U8Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength U8Vector2Array_GetLength;

        EMathApi_GetType I16Vector2_GetType;
        EMathApi_GetType I16Vector2Array_GetType;
        EMathApi_CreateI16Vector2 I16Vector2_Create;
        EMathApi_CreateI16Vector2Array I16Vector2Array_Create;
        EMathApi_GetI16Vector2ValuePointer I16Vector2_GetValuePointer;
        EMathApi_GetI16Vector2ValuePointer I16Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength I16Vector2Array_GetLength;

        EMathApi_GetType U16Vector2_GetType;
        EMathApi_GetType U16Vector2Array_GetType;
        EMathApi_CreateU16Vector2 U16Vector2_Create;
        EMathApi_CreateU16Vector2Array U16Vector2Array_Create;
        EMathApi_GetU16Vector2ValuePointer U16Vector2_GetValuePointer;
        EMathApi_GetU16Vector2ValuePointer U16Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength U16Vector2Array_GetLength;

        EMathApi_GetType I32Vector2_GetType;
        EMathApi_GetType I32Vector2Array_GetType;
        EMathApi_CreateI32Vector2 I32Vector2_Create;
        EMathApi_CreateI32Vector2Array I32Vector2Array_Create;
        EMathApi_GetI32Vector2ValuePointer I32Vector2_GetValuePointer;
        EMathApi_GetI32Vector2ValuePointer I32Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength I32Vector2Array_GetLength;

        EMathApi_GetType U32Vector2_GetType;
        EMathApi_GetType U32Vector2Array_GetType;
        EMathApi_CreateU32Vector2 U32Vector2_Create;
        EMathApi_CreateU32Vector2Array U32Vector2Array_Create;
        EMathApi_GetU32Vector2ValuePointer U32Vector2_GetValuePointer;
        EMathApi_GetU32Vector2ValuePointer U32Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength U32Vector2Array_GetLength;

        EMathApi_GetType IVector2_GetType;
        EMathApi_GetType IVector2Array_GetType;
        EMathApi_CreateIVector2 IVector2_Create;
        EMathApi_CreateIVector2Array IVector2Array_Create;
        EMathApi_GetIVector2ValuePointer IVector2_GetValuePointer;
        EMathApi_GetIVector2ValuePointer IVector2Array_GetValuePointer;
        EMathApi_GetArrayLength IVector2Array_GetLength;

        EMathApi_GetType UVector2_GetType;
        EMathApi_GetType UVector2Array_GetType;
        EMathApi_CreateUVector2 UVector2_Create;
        EMathApi_CreateUVector2Array UVector2Array_Create;
        EMathApi_GetUVector2ValuePointer UVector2_GetValuePointer;
        EMathApi_GetUVector2ValuePointer UVector2Array_GetValuePointer;
        EMathApi_GetArrayLength UVector2Array_GetLength;

        EMathApi_GetType I64Vector2_GetType;
        EMathApi_GetType I64Vector2Array_GetType;
        EMathApi_CreateI64Vector2 I64Vector2_Create;
        EMathApi_CreateI64Vector2Array I64Vector2Array_Create;
        EMathApi_GetI64Vector2ValuePointer I64Vector2_GetValuePointer;
        EMathApi_GetI64Vector2ValuePointer I64Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength I64Vector2Array_GetLength;

        EMathApi_GetType U64Vector2_GetType;
        EMathApi_GetType U64Vector2Array_GetType;
        EMathApi_CreateU64Vector2 U64Vector2_Create;
        EMathApi_CreateU64Vector2Array U64Vector2Array_Create;
        EMathApi_GetU64Vector2ValuePointer U64Vector2_GetValuePointer;
        EMathApi_GetU64Vector2ValuePointer U64Vector2Array_GetValuePointer;
        EMathApi_GetArrayLength U64Vector2Array_GetLength;

        EMathApi_GetType BVector3_GetType;
        EMathApi_GetType BVector3Array_GetType;
        EMathApi_CreateBVector3 BVector3_Create;
        EMathApi_CreateBVector3Array BVector3Array_Create;
        EMathApi_GetBVector3ValuePointer BVector3_GetValuePointer;
        EMathApi_GetBVector3ValuePointer BVector3Array_GetValuePointer;
        EMathApi_GetArrayLength BVector3Array_GetLength;

        EMathApi_GetType DVector3_GetType;
        EMathApi_GetType DVector3Array_GetType;
        EMathApi_CreateDVector3 DVector3_Create;
        EMathApi_CreateDVector3Array DVector3Array_Create;
        EMathApi_GetDVector3ValuePointer DVector3_GetValuePointer;
        EMathApi_GetDVector3ValuePointer DVector3Array_GetValuePointer;
        EMathApi_GetArrayLength DVector3Array_GetLength;

        EMathApi_GetType FVector3_GetType;
        EMathApi_GetType FVector3Array_GetType;
        EMathApi_CreateFVector3 FVector3_Create;
        EMathApi_CreateFVector3Array FVector3Array_Create;
        EMathApi_GetFVector3ValuePointer FVector3_GetValuePointer;
        EMathApi_GetFVector3ValuePointer FVector3Array_GetValuePointer;
        EMathApi_GetArrayLength FVector3Array_GetLength;

        EMathApi_GetType I8Vector3_GetType;
        EMathApi_GetType I8Vector3Array_GetType;
        EMathApi_CreateI8Vector3 I8Vector3_Create;
        EMathApi_CreateI8Vector3Array I8Vector3Array_Create;
        EMathApi_GetI8Vector3ValuePointer I8Vector3_GetValuePointer;
        EMathApi_GetI8Vector3ValuePointer I8Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength I8Vector3Array_GetLength;

        EMathApi_GetType U8Vector3_GetType;
        EMathApi_GetType U8Vector3Array_GetType;
        EMathApi_CreateU8Vector3 U8Vector3_Create;
        EMathApi_CreateU8Vector3Array U8Vector3Array_Create;
        EMathApi_GetU8Vector3ValuePointer U8Vector3_GetValuePointer;
        EMathApi_GetU8Vector3ValuePointer U8Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength U8Vector3Array_GetLength;

        EMathApi_GetType I16Vector3_GetType;
        EMathApi_GetType I16Vector3Array_GetType;
        EMathApi_CreateI16Vector3 I16Vector3_Create;
        EMathApi_CreateI16Vector3Array I16Vector3Array_Create;
        EMathApi_GetI16Vector3ValuePointer I16Vector3_GetValuePointer;
        EMathApi_GetI16Vector3ValuePointer I16Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength I16Vector3Array_GetLength;

        EMathApi_GetType U16Vector3_GetType;
        EMathApi_GetType U16Vector3Array_GetType;
        EMathApi_CreateU16Vector3 U16Vector3_Create;
        EMathApi_CreateU16Vector3Array U16Vector3Array_Create;
        EMathApi_GetU16Vector3ValuePointer U16Vector3_GetValuePointer;
        EMathApi_GetU16Vector3ValuePointer U16Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength U16Vector3Array_GetLength;

        EMathApi_GetType I32Vector3_GetType;
        EMathApi_GetType I32Vector3Array_GetType;
        EMathApi_CreateI32Vector3 I32Vector3_Create;
        EMathApi_CreateI32Vector3Array I32Vector3Array_Create;
        EMathApi_GetI32Vector3ValuePointer I32Vector3_GetValuePointer;
        EMathApi_GetI32Vector3ValuePointer I32Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength I32Vector3Array_GetLength;

        EMathApi_GetType U32Vector3_GetType;
        EMathApi_GetType U32Vector3Array_GetType;
        EMathApi_CreateU32Vector3 U32Vector3_Create;
        EMathApi_CreateU32Vector3Array U32Vector3Array_Create;
        EMathApi_GetU32Vector3ValuePointer U32Vector3_GetValuePointer;
        EMathApi_GetU32Vector3ValuePointer U32Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength U32Vector3Array_GetLength;

        EMathApi_GetType IVector3_GetType;
        EMathApi_GetType IVector3Array_GetType;
        EMathApi_CreateIVector3 IVector3_Create;
        EMathApi_CreateIVector3Array IVector3Array_Create;
        EMathApi_GetIVector3ValuePointer IVector3_GetValuePointer;
        EMathApi_GetIVector3ValuePointer IVector3Array_GetValuePointer;
        EMathApi_GetArrayLength IVector3Array_GetLength;

        EMathApi_GetType UVector3_GetType;
        EMathApi_GetType UVector3Array_GetType;
        EMathApi_CreateUVector3 UVector3_Create;
        EMathApi_CreateUVector3Array UVector3Array_Create;
        EMathApi_GetUVector3ValuePointer UVector3_GetValuePointer;
        EMathApi_GetUVector3ValuePointer UVector3Array_GetValuePointer;
        EMathApi_GetArrayLength UVector3Array_GetLength;

        EMathApi_GetType I64Vector3_GetType;
        EMathApi_GetType I64Vector3Array_GetType;
        EMathApi_CreateI64Vector3 I64Vector3_Create;
        EMathApi_CreateI64Vector3Array I64Vector3Array_Create;
        EMathApi_GetI64Vector3ValuePointer I64Vector3_GetValuePointer;
        EMathApi_GetI64Vector3ValuePointer I64Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength I64Vector3Array_GetLength;

        EMathApi_GetType U64Vector3_GetType;
        EMathApi_GetType U64Vector3Array_GetType;
        EMathApi_CreateU64Vector3 U64Vector3_Create;
        EMathApi_CreateU64Vector3Array U64Vector3Array_Create;
        EMathApi_GetU64Vector3ValuePointer U64Vector3_GetValuePointer;
        EMathApi_GetU64Vector3ValuePointer U64Vector3Array_GetValuePointer;
        EMathApi_GetArrayLength U64Vector3Array_GetLength;

        EMathApi_GetType BVector4_GetType;
        EMathApi_GetType BVector4Array_GetType;
        EMathApi_CreateBVector4 BVector4_Create;
        EMathApi_CreateBVector4Array BVector4Array_Create;
        EMathApi_GetBVector4ValuePointer BVector4_GetValuePointer;
        EMathApi_GetBVector4ValuePointer BVector4Array_GetValuePointer;
        EMathApi_GetArrayLength BVector4Array_GetLength;

        EMathApi_GetType DVector4_GetType;
        EMathApi_GetType DVector4Array_GetType;
        EMathApi_CreateDVector4 DVector4_Create;
        EMathApi_CreateDVector4Array DVector4Array_Create;
        EMathApi_GetDVector4ValuePointer DVector4_GetValuePointer;
        EMathApi_GetDVector4ValuePointer DVector4Array_GetValuePointer;
        EMathApi_GetArrayLength DVector4Array_GetLength;

        EMathApi_GetType FVector4_GetType;
        EMathApi_GetType FVector4Array_GetType;
        EMathApi_CreateFVector4 FVector4_Create;
        EMathApi_CreateFVector4Array FVector4Array_Create;
        EMathApi_GetFVector4ValuePointer FVector4_GetValuePointer;
        EMathApi_GetFVector4ValuePointer FVector4Array_GetValuePointer;
        EMathApi_GetArrayLength FVector4Array_GetLength;

        EMathApi_GetType I8Vector4_GetType;
        EMathApi_GetType I8Vector4Array_GetType;
        EMathApi_CreateI8Vector4 I8Vector4_Create;
        EMathApi_CreateI8Vector4Array I8Vector4Array_Create;
        EMathApi_GetI8Vector4ValuePointer I8Vector4_GetValuePointer;
        EMathApi_GetI8Vector4ValuePointer I8Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength I8Vector4Array_GetLength;

        EMathApi_GetType U8Vector4_GetType;
        EMathApi_GetType U8Vector4Array_GetType;
        EMathApi_CreateU8Vector4 U8Vector4_Create;
        EMathApi_CreateU8Vector4Array U8Vector4Array_Create;
        EMathApi_GetU8Vector4ValuePointer U8Vector4_GetValuePointer;
        EMathApi_GetU8Vector4ValuePointer U8Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength U8Vector4Array_GetLength;

        EMathApi_GetType I16Vector4_GetType;
        EMathApi_GetType I16Vector4Array_GetType;
        EMathApi_CreateI16Vector4 I16Vector4_Create;
        EMathApi_CreateI16Vector4Array I16Vector4Array_Create;
        EMathApi_GetI16Vector4ValuePointer I16Vector4_GetValuePointer;
        EMathApi_GetI16Vector4ValuePointer I16Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength I16Vector4Array_GetLength;

        EMathApi_GetType U16Vector4_GetType;
        EMathApi_GetType U16Vector4Array_GetType;
        EMathApi_CreateU16Vector4 U16Vector4_Create;
        EMathApi_CreateU16Vector4Array U16Vector4Array_Create;
        EMathApi_GetU16Vector4ValuePointer U16Vector4_GetValuePointer;
        EMathApi_GetU16Vector4ValuePointer U16Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength U16Vector4Array_GetLength;

        EMathApi_GetType I32Vector4_GetType;
        EMathApi_GetType I32Vector4Array_GetType;
        EMathApi_CreateI32Vector4 I32Vector4_Create;
        EMathApi_CreateI32Vector4Array I32Vector4Array_Create;
        EMathApi_GetI32Vector4ValuePointer I32Vector4_GetValuePointer;
        EMathApi_GetI32Vector4ValuePointer I32Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength I32Vector4Array_GetLength;

        EMathApi_GetType U32Vector4_GetType;
        EMathApi_GetType U32Vector4Array_GetType;
        EMathApi_CreateU32Vector4 U32Vector4_Create;
        EMathApi_CreateU32Vector4Array U32Vector4Array_Create;
        EMathApi_GetU32Vector4ValuePointer U32Vector4_GetValuePointer;
        EMathApi_GetU32Vector4ValuePointer U32Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength U32Vector4Array_GetLength;

        EMathApi_GetType IVector4_GetType;
        EMathApi_GetType IVector4Array_GetType;
        EMathApi_CreateIVector4 IVector4_Create;
        EMathApi_CreateIVector4Array IVector4Array_Create;
        EMathApi_GetIVector4ValuePointer IVector4_GetValuePointer;
        EMathApi_GetIVector4ValuePointer IVector4Array_GetValuePointer;
        EMathApi_GetArrayLength IVector4Array_GetLength;

        EMathApi_GetType UVector4_GetType;
        EMathApi_GetType UVector4Array_GetType;
        EMathApi_CreateUVector4 UVector4_Create;
        EMathApi_CreateUVector4Array UVector4Array_Create;
        EMathApi_GetUVector4ValuePointer UVector4_GetValuePointer;
        EMathApi_GetUVector4ValuePointer UVector4Array_GetValuePointer;
        EMathApi_GetArrayLength UVector4Array_GetLength;

        EMathApi_GetType I64Vector4_GetType;
        EMathApi_GetType I64Vector4Array_GetType;
        EMathApi_CreateI64Vector4 I64Vector4_Create;
        EMathApi_CreateI64Vector4Array I64Vector4Array_Create;
        EMathApi_GetI64Vector4ValuePointer I64Vector4_GetValuePointer;
        EMathApi_GetI64Vector4ValuePointer I64Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength I64Vector4Array_GetLength;

        EMathApi_GetType U64Vector4_GetType;
        EMathApi_GetType U64Vector4Array_GetType;
        EMathApi_CreateU64Vector4 U64Vector4_Create;
        EMathApi_CreateU64Vector4Array U64Vector4Array_Create;
        EMathApi_GetU64Vector4ValuePointer U64Vector4_GetValuePointer;
        EMathApi_GetU64Vector4ValuePointer U64Vector4Array_GetValuePointer;
        EMathApi_GetArrayLength U64Vector4Array_GetLength;


        EMathApi_GetType DMatrix2x2_GetType;
        EMathApi_GetType DMatrix2x2Array_GetType;
        EMathApi_CreateDMatrix2x2 DMatrix2x2_Create;
        EMathApi_CreateDMatrix2x2Array DMatrix2x2Array_Create;
        EMathApi_GetDMatrix2x2ValuePointer DMatrix2x2_GetValuePointer;
        EMathApi_GetDMatrix2x2ValuePointer DMatrix2x2Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix2x2Array_GetLength;

        EMathApi_GetType FMatrix2x2_GetType;
        EMathApi_GetType FMatrix2x2Array_GetType;
        EMathApi_CreateFMatrix2x2 FMatrix2x2_Create;
        EMathApi_CreateFMatrix2x2Array FMatrix2x2Array_Create;
        EMathApi_GetFMatrix2x2ValuePointer FMatrix2x2_GetValuePointer;
        EMathApi_GetFMatrix2x2ValuePointer FMatrix2x2Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix2x2Array_GetLength;

        EMathApi_GetType DMatrix2x3_GetType;
        EMathApi_GetType DMatrix2x3Array_GetType;
        EMathApi_CreateDMatrix2x3 DMatrix2x3_Create;
        EMathApi_CreateDMatrix2x3Array DMatrix2x3Array_Create;
        EMathApi_GetDMatrix2x3ValuePointer DMatrix2x3_GetValuePointer;
        EMathApi_GetDMatrix2x3ValuePointer DMatrix2x3Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix2x3Array_GetLength;

        EMathApi_GetType FMatrix2x3_GetType;
        EMathApi_GetType FMatrix2x3Array_GetType;
        EMathApi_CreateFMatrix2x3 FMatrix2x3_Create;
        EMathApi_CreateFMatrix2x3Array FMatrix2x3Array_Create;
        EMathApi_GetFMatrix2x3ValuePointer FMatrix2x3_GetValuePointer;
        EMathApi_GetFMatrix2x3ValuePointer FMatrix2x3Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix2x3Array_GetLength;

        EMathApi_GetType DMatrix2x4_GetType;
        EMathApi_GetType DMatrix2x4Array_GetType;
        EMathApi_CreateDMatrix2x4 DMatrix2x4_Create;
        EMathApi_CreateDMatrix2x4Array DMatrix2x4Array_Create;
        EMathApi_GetDMatrix2x4ValuePointer DMatrix2x4_GetValuePointer;
        EMathApi_GetDMatrix2x4ValuePointer DMatrix2x4Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix2x4Array_GetLength;

        EMathApi_GetType FMatrix2x4_GetType;
        EMathApi_GetType FMatrix2x4Array_GetType;
        EMathApi_CreateFMatrix2x4 FMatrix2x4_Create;
        EMathApi_CreateFMatrix2x4Array FMatrix2x4Array_Create;
        EMathApi_GetFMatrix2x4ValuePointer FMatrix2x4_GetValuePointer;
        EMathApi_GetFMatrix2x4ValuePointer FMatrix2x4Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix2x4Array_GetLength;

        EMathApi_GetType DMatrix3x2_GetType;
        EMathApi_GetType DMatrix3x2Array_GetType;
        EMathApi_CreateDMatrix3x2 DMatrix3x2_Create;
        EMathApi_CreateDMatrix3x2Array DMatrix3x2Array_Create;
        EMathApi_GetDMatrix3x2ValuePointer DMatrix3x2_GetValuePointer;
        EMathApi_GetDMatrix3x2ValuePointer DMatrix3x2Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix3x2Array_GetLength;

        EMathApi_GetType FMatrix3x2_GetType;
        EMathApi_GetType FMatrix3x2Array_GetType;
        EMathApi_CreateFMatrix3x2 FMatrix3x2_Create;
        EMathApi_CreateFMatrix3x2Array FMatrix3x2Array_Create;
        EMathApi_GetFMatrix3x2ValuePointer FMatrix3x2_GetValuePointer;
        EMathApi_GetFMatrix3x2ValuePointer FMatrix3x2Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix3x2Array_GetLength;

        EMathApi_GetType DMatrix3x3_GetType;
        EMathApi_GetType DMatrix3x3Array_GetType;
        EMathApi_CreateDMatrix3x3 DMatrix3x3_Create;
        EMathApi_CreateDMatrix3x3Array DMatrix3x3Array_Create;
        EMathApi_GetDMatrix3x3ValuePointer DMatrix3x3_GetValuePointer;
        EMathApi_GetDMatrix3x3ValuePointer DMatrix3x3Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix3x3Array_GetLength;

        EMathApi_GetType FMatrix3x3_GetType;
        EMathApi_GetType FMatrix3x3Array_GetType;
        EMathApi_CreateFMatrix3x3 FMatrix3x3_Create;
        EMathApi_CreateFMatrix3x3Array FMatrix3x3Array_Create;
        EMathApi_GetFMatrix3x3ValuePointer FMatrix3x3_GetValuePointer;
        EMathApi_GetFMatrix3x3ValuePointer FMatrix3x3Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix3x3Array_GetLength;

        EMathApi_GetType DMatrix3x4_GetType;
        EMathApi_GetType DMatrix3x4Array_GetType;
        EMathApi_CreateDMatrix3x4 DMatrix3x4_Create;
        EMathApi_CreateDMatrix3x4Array DMatrix3x4Array_Create;
        EMathApi_GetDMatrix3x4ValuePointer DMatrix3x4_GetValuePointer;
        EMathApi_GetDMatrix3x4ValuePointer DMatrix3x4Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix3x4Array_GetLength;

        EMathApi_GetType FMatrix3x4_GetType;
        EMathApi_GetType FMatrix3x4Array_GetType;
        EMathApi_CreateFMatrix3x4 FMatrix3x4_Create;
        EMathApi_CreateFMatrix3x4Array FMatrix3x4Array_Create;
        EMathApi_GetFMatrix3x4ValuePointer FMatrix3x4_GetValuePointer;
        EMathApi_GetFMatrix3x4ValuePointer FMatrix3x4Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix3x4Array_GetLength;

        EMathApi_GetType DMatrix4x2_GetType;
        EMathApi_GetType DMatrix4x2Array_GetType;
        EMathApi_CreateDMatrix4x2 DMatrix4x2_Create;
        EMathApi_CreateDMatrix4x2Array DMatrix4x2Array_Create;
        EMathApi_GetDMatrix4x2ValuePointer DMatrix4x2_GetValuePointer;
        EMathApi_GetDMatrix4x2ValuePointer DMatrix4x2Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix4x2Array_GetLength;

        EMathApi_GetType FMatrix4x2_GetType;
        EMathApi_GetType FMatrix4x2Array_GetType;
        EMathApi_CreateFMatrix4x2 FMatrix4x2_Create;
        EMathApi_CreateFMatrix4x2Array FMatrix4x2Array_Create;
        EMathApi_GetFMatrix4x2ValuePointer FMatrix4x2_GetValuePointer;
        EMathApi_GetFMatrix4x2ValuePointer FMatrix4x2Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix4x2Array_GetLength;

        EMathApi_GetType DMatrix4x3_GetType;
        EMathApi_GetType DMatrix4x3Array_GetType;
        EMathApi_CreateDMatrix4x3 DMatrix4x3_Create;
        EMathApi_CreateDMatrix4x3Array DMatrix4x3Array_Create;
        EMathApi_GetDMatrix4x3ValuePointer DMatrix4x3_GetValuePointer;
        EMathApi_GetDMatrix4x3ValuePointer DMatrix4x3Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix4x3Array_GetLength;

        EMathApi_GetType FMatrix4x3_GetType;
        EMathApi_GetType FMatrix4x3Array_GetType;
        EMathApi_CreateFMatrix4x3 FMatrix4x3_Create;
        EMathApi_CreateFMatrix4x3Array FMatrix4x3Array_Create;
        EMathApi_GetFMatrix4x3ValuePointer FMatrix4x3_GetValuePointer;
        EMathApi_GetFMatrix4x3ValuePointer FMatrix4x3Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix4x3Array_GetLength;

        EMathApi_GetType DMatrix4x4_GetType;
        EMathApi_GetType DMatrix4x4Array_GetType;
        EMathApi_CreateDMatrix4x4 DMatrix4x4_Create;
        EMathApi_CreateDMatrix4x4Array DMatrix4x4Array_Create;
        EMathApi_GetDMatrix4x4ValuePointer DMatrix4x4_GetValuePointer;
        EMathApi_GetDMatrix4x4ValuePointer DMatrix4x4Array_GetValuePointer;
        EMathApi_GetArrayLength DMatrix4x4Array_GetLength;

        EMathApi_GetType FMatrix4x4_GetType;
        EMathApi_GetType FMatrix4x4Array_GetType;
        EMathApi_CreateFMatrix4x4 FMatrix4x4_Create;
        EMathApi_CreateFMatrix4x4Array FMatrix4x4Array_Create;
        EMathApi_GetFMatrix4x4ValuePointer FMatrix4x4_GetValuePointer;
        EMathApi_GetFMatrix4x4ValuePointer FMatrix4x4Array_GetValuePointer;
        EMathApi_GetArrayLength FMatrix4x4Array_GetLength;


        EMathApi_GetType DQuaternion_GetType;
        EMathApi_GetType DQuaternionArray_GetType;
        EMathApi_CreateDQuaternion DQuaternion_Create;
        EMathApi_CreateDQuaternionArray DQuaternionArray_Create;
        EMathApi_GetDQuaternionValuePointer DQuaternion_GetValuePointer;
        EMathApi_GetDQuaternionValuePointer DQuaternionArray_GetValuePointer;
        EMathApi_GetArrayLength DQuaternionArray_GetLength;

        EMathApi_GetType FQuaternion_GetType;
        EMathApi_GetType FQuaternionArray_GetType;
        EMathApi_CreateFQuaternion FQuaternion_Create;
        EMathApi_CreateFQuaternionArray FQuaternionArray_Create;
        EMathApi_GetFQuaternionValuePointer FQuaternion_GetValuePointer;
        EMathApi_GetFQuaternionValuePointer FQuaternionArray_GetValuePointer;
        EMathApi_GetArrayLength FQuaternionArray_GetLength;


        EMathApi_GetType BArray_GetType;
        EMathApi_CreateBArray BArray_Create;
        EMathApi_GetBValuePointer BArray_GetValuePointer;
        EMathApi_GetArrayLength BArray_GetLength;

        EMathApi_GetType DArray_GetType;
        EMathApi_CreateDArray DArray_Create;
        EMathApi_GetDValuePointer DArray_GetValuePointer;
        EMathApi_GetArrayLength DArray_GetLength;

        EMathApi_GetType FArray_GetType;
        EMathApi_CreateFArray FArray_Create;
        EMathApi_GetFValuePointer FArray_GetValuePointer;
        EMathApi_GetArrayLength FArray_GetLength;

        EMathApi_GetType I8Array_GetType;
        EMathApi_CreateI8Array I8Array_Create;
        EMathApi_GetI8ValuePointer I8Array_GetValuePointer;
        EMathApi_GetArrayLength I8Array_GetLength;

        EMathApi_GetType U8Array_GetType;
        EMathApi_CreateU8Array U8Array_Create;
        EMathApi_GetU8ValuePointer U8Array_GetValuePointer;
        EMathApi_GetArrayLength U8Array_GetLength;

        EMathApi_GetType I16Array_GetType;
        EMathApi_CreateI16Array I16Array_Create;
        EMathApi_GetI16ValuePointer I16Array_GetValuePointer;
        EMathApi_GetArrayLength I16Array_GetLength;

        EMathApi_GetType U16Array_GetType;
        EMathApi_CreateU16Array U16Array_Create;
        EMathApi_GetU16ValuePointer U16Array_GetValuePointer;
        EMathApi_GetArrayLength U16Array_GetLength;

        EMathApi_GetType I32Array_GetType;
        EMathApi_CreateI32Array I32Array_Create;
        EMathApi_GetI32ValuePointer I32Array_GetValuePointer;
        EMathApi_GetArrayLength I32Array_GetLength;

        EMathApi_GetType U32Array_GetType;
        EMathApi_CreateU32Array U32Array_Create;
        EMathApi_GetU32ValuePointer U32Array_GetValuePointer;
        EMathApi_GetArrayLength U32Array_GetLength;

        EMathApi_GetType IArray_GetType;
        EMathApi_CreateIArray IArray_Create;
        EMathApi_GetIValuePointer IArray_GetValuePointer;
        EMathApi_GetArrayLength IArray_GetLength;

        EMathApi_GetType UArray_GetType;
        EMathApi_CreateUArray UArray_Create;
        EMathApi_GetUValuePointer UArray_GetValuePointer;
        EMathApi_GetArrayLength UArray_GetLength;

        EMathApi_GetType I64Array_GetType;
        EMathApi_CreateI64Array I64Array_Create;
        EMathApi_GetI64ValuePointer I64Array_GetValuePointer;
        EMathApi_GetArrayLength I64Array_GetLength;

        EMathApi_GetType U64Array_GetType;
        EMathApi_CreateU64Array U64Array_Create;
        EMathApi_GetU64ValuePointer U64Array_GetValuePointer;
        EMathApi_GetArrayLength U64Array_GetLength;

};

static struct EMathApi *
EMathApi_Get()
{
    if (!PyImport_ImportModule("emath._emath")){ return 0; }
    return (struct EMathApi *)PyCapsule_Import("emath._emath._api", 0);
}

static void
EMathApi_Release()
{
    PyObject *module = PyImport_ImportModule("emath._emath");
    if (!module){ return; }
    Py_DECREF(module);
    Py_DECREF(module);
}

#ifdef __cplusplus
}
#endif

#endif