
# generated from codegen/templates/_pydantic.py

import pydantic
import pydantic_core
from typing import Any
import emath

{% for type in vector_types %}

def {{ type }}_deserialize(value: Any) -> emath.{{ type }}:
    return emath.{{ type }}(*value)

def {{ type }}_serialize(value: emath.{{ type }}) -> Any:
    return tuple(value)


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

{% endfor %}
