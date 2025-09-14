# generated from codegen/templates/_pydantic.py

from typing import Any

import pydantic
import pydantic_core

import emath


def BVector1_deserialize(value: Any) -> emath.BVector1:
    return emath.BVector1(*value)


def BVector1_serialize(value: emath.BVector1) -> Any:
    return tuple(value)


def BVector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        BVector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            BVector1_serialize, when_used="always"
        ),
    )


def DVector1_deserialize(value: Any) -> emath.DVector1:
    return emath.DVector1(*value)


def DVector1_serialize(value: emath.DVector1) -> Any:
    return tuple(value)


def DVector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        DVector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            DVector1_serialize, when_used="always"
        ),
    )


def FVector1_deserialize(value: Any) -> emath.FVector1:
    return emath.FVector1(*value)


def FVector1_serialize(value: emath.FVector1) -> Any:
    return tuple(value)


def FVector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        FVector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            FVector1_serialize, when_used="always"
        ),
    )


def I8Vector1_deserialize(value: Any) -> emath.I8Vector1:
    return emath.I8Vector1(*value)


def I8Vector1_serialize(value: emath.I8Vector1) -> Any:
    return tuple(value)


def I8Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I8Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I8Vector1_serialize, when_used="always"
        ),
    )


def U8Vector1_deserialize(value: Any) -> emath.U8Vector1:
    return emath.U8Vector1(*value)


def U8Vector1_serialize(value: emath.U8Vector1) -> Any:
    return tuple(value)


def U8Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U8Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U8Vector1_serialize, when_used="always"
        ),
    )


def I16Vector1_deserialize(value: Any) -> emath.I16Vector1:
    return emath.I16Vector1(*value)


def I16Vector1_serialize(value: emath.I16Vector1) -> Any:
    return tuple(value)


def I16Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I16Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I16Vector1_serialize, when_used="always"
        ),
    )


def U16Vector1_deserialize(value: Any) -> emath.U16Vector1:
    return emath.U16Vector1(*value)


def U16Vector1_serialize(value: emath.U16Vector1) -> Any:
    return tuple(value)


def U16Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U16Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U16Vector1_serialize, when_used="always"
        ),
    )


def I32Vector1_deserialize(value: Any) -> emath.I32Vector1:
    return emath.I32Vector1(*value)


def I32Vector1_serialize(value: emath.I32Vector1) -> Any:
    return tuple(value)


def I32Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I32Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I32Vector1_serialize, when_used="always"
        ),
    )


def U32Vector1_deserialize(value: Any) -> emath.U32Vector1:
    return emath.U32Vector1(*value)


def U32Vector1_serialize(value: emath.U32Vector1) -> Any:
    return tuple(value)


def U32Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U32Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U32Vector1_serialize, when_used="always"
        ),
    )


def IVector1_deserialize(value: Any) -> emath.IVector1:
    return emath.IVector1(*value)


def IVector1_serialize(value: emath.IVector1) -> Any:
    return tuple(value)


def IVector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        IVector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            IVector1_serialize, when_used="always"
        ),
    )


def UVector1_deserialize(value: Any) -> emath.UVector1:
    return emath.UVector1(*value)


def UVector1_serialize(value: emath.UVector1) -> Any:
    return tuple(value)


def UVector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        UVector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            UVector1_serialize, when_used="always"
        ),
    )


def I64Vector1_deserialize(value: Any) -> emath.I64Vector1:
    return emath.I64Vector1(*value)


def I64Vector1_serialize(value: emath.I64Vector1) -> Any:
    return tuple(value)


def I64Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I64Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I64Vector1_serialize, when_used="always"
        ),
    )


def U64Vector1_deserialize(value: Any) -> emath.U64Vector1:
    return emath.U64Vector1(*value)


def U64Vector1_serialize(value: emath.U64Vector1) -> Any:
    return tuple(value)


def U64Vector1__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U64Vector1_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U64Vector1_serialize, when_used="always"
        ),
    )


def BVector2_deserialize(value: Any) -> emath.BVector2:
    return emath.BVector2(*value)


def BVector2_serialize(value: emath.BVector2) -> Any:
    return tuple(value)


def BVector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        BVector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            BVector2_serialize, when_used="always"
        ),
    )


def DVector2_deserialize(value: Any) -> emath.DVector2:
    return emath.DVector2(*value)


def DVector2_serialize(value: emath.DVector2) -> Any:
    return tuple(value)


def DVector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        DVector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            DVector2_serialize, when_used="always"
        ),
    )


def FVector2_deserialize(value: Any) -> emath.FVector2:
    return emath.FVector2(*value)


def FVector2_serialize(value: emath.FVector2) -> Any:
    return tuple(value)


def FVector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        FVector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            FVector2_serialize, when_used="always"
        ),
    )


def I8Vector2_deserialize(value: Any) -> emath.I8Vector2:
    return emath.I8Vector2(*value)


def I8Vector2_serialize(value: emath.I8Vector2) -> Any:
    return tuple(value)


def I8Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I8Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I8Vector2_serialize, when_used="always"
        ),
    )


def U8Vector2_deserialize(value: Any) -> emath.U8Vector2:
    return emath.U8Vector2(*value)


def U8Vector2_serialize(value: emath.U8Vector2) -> Any:
    return tuple(value)


def U8Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U8Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U8Vector2_serialize, when_used="always"
        ),
    )


def I16Vector2_deserialize(value: Any) -> emath.I16Vector2:
    return emath.I16Vector2(*value)


def I16Vector2_serialize(value: emath.I16Vector2) -> Any:
    return tuple(value)


def I16Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I16Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I16Vector2_serialize, when_used="always"
        ),
    )


def U16Vector2_deserialize(value: Any) -> emath.U16Vector2:
    return emath.U16Vector2(*value)


def U16Vector2_serialize(value: emath.U16Vector2) -> Any:
    return tuple(value)


def U16Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U16Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U16Vector2_serialize, when_used="always"
        ),
    )


def I32Vector2_deserialize(value: Any) -> emath.I32Vector2:
    return emath.I32Vector2(*value)


def I32Vector2_serialize(value: emath.I32Vector2) -> Any:
    return tuple(value)


def I32Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I32Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I32Vector2_serialize, when_used="always"
        ),
    )


def U32Vector2_deserialize(value: Any) -> emath.U32Vector2:
    return emath.U32Vector2(*value)


def U32Vector2_serialize(value: emath.U32Vector2) -> Any:
    return tuple(value)


def U32Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U32Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U32Vector2_serialize, when_used="always"
        ),
    )


def IVector2_deserialize(value: Any) -> emath.IVector2:
    return emath.IVector2(*value)


def IVector2_serialize(value: emath.IVector2) -> Any:
    return tuple(value)


def IVector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        IVector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            IVector2_serialize, when_used="always"
        ),
    )


def UVector2_deserialize(value: Any) -> emath.UVector2:
    return emath.UVector2(*value)


def UVector2_serialize(value: emath.UVector2) -> Any:
    return tuple(value)


def UVector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        UVector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            UVector2_serialize, when_used="always"
        ),
    )


def I64Vector2_deserialize(value: Any) -> emath.I64Vector2:
    return emath.I64Vector2(*value)


def I64Vector2_serialize(value: emath.I64Vector2) -> Any:
    return tuple(value)


def I64Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I64Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I64Vector2_serialize, when_used="always"
        ),
    )


def U64Vector2_deserialize(value: Any) -> emath.U64Vector2:
    return emath.U64Vector2(*value)


def U64Vector2_serialize(value: emath.U64Vector2) -> Any:
    return tuple(value)


def U64Vector2__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U64Vector2_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U64Vector2_serialize, when_used="always"
        ),
    )


def BVector3_deserialize(value: Any) -> emath.BVector3:
    return emath.BVector3(*value)


def BVector3_serialize(value: emath.BVector3) -> Any:
    return tuple(value)


def BVector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        BVector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            BVector3_serialize, when_used="always"
        ),
    )


def DVector3_deserialize(value: Any) -> emath.DVector3:
    return emath.DVector3(*value)


def DVector3_serialize(value: emath.DVector3) -> Any:
    return tuple(value)


def DVector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        DVector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            DVector3_serialize, when_used="always"
        ),
    )


def FVector3_deserialize(value: Any) -> emath.FVector3:
    return emath.FVector3(*value)


def FVector3_serialize(value: emath.FVector3) -> Any:
    return tuple(value)


def FVector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        FVector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            FVector3_serialize, when_used="always"
        ),
    )


def I8Vector3_deserialize(value: Any) -> emath.I8Vector3:
    return emath.I8Vector3(*value)


def I8Vector3_serialize(value: emath.I8Vector3) -> Any:
    return tuple(value)


def I8Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I8Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I8Vector3_serialize, when_used="always"
        ),
    )


def U8Vector3_deserialize(value: Any) -> emath.U8Vector3:
    return emath.U8Vector3(*value)


def U8Vector3_serialize(value: emath.U8Vector3) -> Any:
    return tuple(value)


def U8Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U8Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U8Vector3_serialize, when_used="always"
        ),
    )


def I16Vector3_deserialize(value: Any) -> emath.I16Vector3:
    return emath.I16Vector3(*value)


def I16Vector3_serialize(value: emath.I16Vector3) -> Any:
    return tuple(value)


def I16Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I16Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I16Vector3_serialize, when_used="always"
        ),
    )


def U16Vector3_deserialize(value: Any) -> emath.U16Vector3:
    return emath.U16Vector3(*value)


def U16Vector3_serialize(value: emath.U16Vector3) -> Any:
    return tuple(value)


def U16Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U16Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U16Vector3_serialize, when_used="always"
        ),
    )


def I32Vector3_deserialize(value: Any) -> emath.I32Vector3:
    return emath.I32Vector3(*value)


def I32Vector3_serialize(value: emath.I32Vector3) -> Any:
    return tuple(value)


def I32Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I32Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I32Vector3_serialize, when_used="always"
        ),
    )


def U32Vector3_deserialize(value: Any) -> emath.U32Vector3:
    return emath.U32Vector3(*value)


def U32Vector3_serialize(value: emath.U32Vector3) -> Any:
    return tuple(value)


def U32Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U32Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U32Vector3_serialize, when_used="always"
        ),
    )


def IVector3_deserialize(value: Any) -> emath.IVector3:
    return emath.IVector3(*value)


def IVector3_serialize(value: emath.IVector3) -> Any:
    return tuple(value)


def IVector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        IVector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            IVector3_serialize, when_used="always"
        ),
    )


def UVector3_deserialize(value: Any) -> emath.UVector3:
    return emath.UVector3(*value)


def UVector3_serialize(value: emath.UVector3) -> Any:
    return tuple(value)


def UVector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        UVector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            UVector3_serialize, when_used="always"
        ),
    )


def I64Vector3_deserialize(value: Any) -> emath.I64Vector3:
    return emath.I64Vector3(*value)


def I64Vector3_serialize(value: emath.I64Vector3) -> Any:
    return tuple(value)


def I64Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I64Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I64Vector3_serialize, when_used="always"
        ),
    )


def U64Vector3_deserialize(value: Any) -> emath.U64Vector3:
    return emath.U64Vector3(*value)


def U64Vector3_serialize(value: emath.U64Vector3) -> Any:
    return tuple(value)


def U64Vector3__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U64Vector3_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U64Vector3_serialize, when_used="always"
        ),
    )


def BVector4_deserialize(value: Any) -> emath.BVector4:
    return emath.BVector4(*value)


def BVector4_serialize(value: emath.BVector4) -> Any:
    return tuple(value)


def BVector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        BVector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            BVector4_serialize, when_used="always"
        ),
    )


def DVector4_deserialize(value: Any) -> emath.DVector4:
    return emath.DVector4(*value)


def DVector4_serialize(value: emath.DVector4) -> Any:
    return tuple(value)


def DVector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        DVector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            DVector4_serialize, when_used="always"
        ),
    )


def FVector4_deserialize(value: Any) -> emath.FVector4:
    return emath.FVector4(*value)


def FVector4_serialize(value: emath.FVector4) -> Any:
    return tuple(value)


def FVector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        FVector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            FVector4_serialize, when_used="always"
        ),
    )


def I8Vector4_deserialize(value: Any) -> emath.I8Vector4:
    return emath.I8Vector4(*value)


def I8Vector4_serialize(value: emath.I8Vector4) -> Any:
    return tuple(value)


def I8Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I8Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I8Vector4_serialize, when_used="always"
        ),
    )


def U8Vector4_deserialize(value: Any) -> emath.U8Vector4:
    return emath.U8Vector4(*value)


def U8Vector4_serialize(value: emath.U8Vector4) -> Any:
    return tuple(value)


def U8Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U8Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U8Vector4_serialize, when_used="always"
        ),
    )


def I16Vector4_deserialize(value: Any) -> emath.I16Vector4:
    return emath.I16Vector4(*value)


def I16Vector4_serialize(value: emath.I16Vector4) -> Any:
    return tuple(value)


def I16Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I16Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I16Vector4_serialize, when_used="always"
        ),
    )


def U16Vector4_deserialize(value: Any) -> emath.U16Vector4:
    return emath.U16Vector4(*value)


def U16Vector4_serialize(value: emath.U16Vector4) -> Any:
    return tuple(value)


def U16Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U16Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U16Vector4_serialize, when_used="always"
        ),
    )


def I32Vector4_deserialize(value: Any) -> emath.I32Vector4:
    return emath.I32Vector4(*value)


def I32Vector4_serialize(value: emath.I32Vector4) -> Any:
    return tuple(value)


def I32Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I32Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I32Vector4_serialize, when_used="always"
        ),
    )


def U32Vector4_deserialize(value: Any) -> emath.U32Vector4:
    return emath.U32Vector4(*value)


def U32Vector4_serialize(value: emath.U32Vector4) -> Any:
    return tuple(value)


def U32Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U32Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U32Vector4_serialize, when_used="always"
        ),
    )


def IVector4_deserialize(value: Any) -> emath.IVector4:
    return emath.IVector4(*value)


def IVector4_serialize(value: emath.IVector4) -> Any:
    return tuple(value)


def IVector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        IVector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            IVector4_serialize, when_used="always"
        ),
    )


def UVector4_deserialize(value: Any) -> emath.UVector4:
    return emath.UVector4(*value)


def UVector4_serialize(value: emath.UVector4) -> Any:
    return tuple(value)


def UVector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        UVector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            UVector4_serialize, when_used="always"
        ),
    )


def I64Vector4_deserialize(value: Any) -> emath.I64Vector4:
    return emath.I64Vector4(*value)


def I64Vector4_serialize(value: emath.I64Vector4) -> Any:
    return tuple(value)


def I64Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        I64Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            I64Vector4_serialize, when_used="always"
        ),
    )


def U64Vector4_deserialize(value: Any) -> emath.U64Vector4:
    return emath.U64Vector4(*value)


def U64Vector4_serialize(value: emath.U64Vector4) -> Any:
    return tuple(value)


def U64Vector4__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        U64Vector4_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            U64Vector4_serialize, when_used="always"
        ),
    )
