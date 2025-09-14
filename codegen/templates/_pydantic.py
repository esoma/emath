
# generated from codegen/templates/_pydantic.py

import pydantic
import pydantic_core
from typing import Any
import emath

{% for type in vector_types %}

def {{ type }}_deserialize(value: Any) -> emath.{{ type }}:
    return emath.{{ type }}.from_buffer(value)

def {{ type }}_serialize(value: emath.{{ type }}) -> Any:
    return bytes(value)


def {{ type }}__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}_serialize, when_used="always"
        ),
    )


def {{ type }}Array_deserialize(value: Any) -> emath.{{ type }}Array:
    return emath.{{ type }}Array.from_buffer(value)

def {{ type }}Array_serialize(value: emath.{{ type }}Array) -> Any:
    return bytes(value)


def {{ type }}Array__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}Array_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}Array_serialize, when_used="always"
        ),
    )

{% endfor %}

{% for type in matrix_types %}

def {{ type }}_deserialize(value: Any) -> emath.{{ type }}:
    return emath.{{ type }}.from_buffer(value)

def {{ type }}_serialize(value: emath.{{ type }}) -> Any:
    return bytes(value)


def {{ type }}__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}_serialize, when_used="always"
        ),
    )


def {{ type }}Array_deserialize(value: Any) -> emath.{{ type }}Array:
    return emath.{{ type }}Array.from_buffer(value)

def {{ type }}Array_serialize(value: emath.{{ type }}Array) -> Any:
    return bytes(value)


def {{ type }}Array__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}Array_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}Array_serialize, when_used="always"
        ),
    )

{% endfor %}

{% for type in quaternion_types %}

def {{ type }}_deserialize(value: Any) -> emath.{{ type }}:
    return emath.{{ type }}.from_buffer(value)

def {{ type }}_serialize(value: emath.{{ type }}) -> Any:
    return bytes(value)


def {{ type }}__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}_serialize, when_used="always"
        ),
    )


def {{ type }}Array_deserialize(value: Any) -> emath.{{ type }}Array:
    return emath.{{ type }}Array.from_buffer(value)

def {{ type }}Array_serialize(value: emath.{{ type }}Array) -> Any:
    return bytes(value)


def {{ type }}Array__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}Array_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}Array_serialize, when_used="always"
        ),
    )

{% endfor %}

{% for type in pod_types %}

def {{ type }}Array_deserialize(value: Any) -> emath.{{ type }}Array:
    return emath.{{ type }}Array.from_buffer(value)

def {{ type }}Array_serialize(value: emath.{{ type }}Array) -> Any:
    return bytes(value)


def {{ type }}Array__get_pydantic_core_schema__(
    source_type: Any, handler: pydantic.GetCoreSchemaHandler
) -> pydantic_core.CoreSchema:
    return pydantic_core.core_schema.no_info_after_validator_function(
        {{ type }}Array_deserialize,
        pydantic_core.core_schema.any_schema(),
        serialization=pydantic_core.core_schema.plain_serializer_function_ser_schema(
            {{ type }}Array_serialize, when_used="always"
        ),
    )

{% endfor %}
