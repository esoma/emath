



..
    _ generated from codegen/templates/api_vector.rst

FVector2
==========

Python API
----------

.. py:class:: FVector2

    .. py:method:: __init__()

        Initializes a FVector2 with :code:`0` in all component positions.


    .. py:method:: __init__(all: Number, /)
        :no-index:

        Initializes a FVector2 with :code:`all` in all component positions.


    .. py:method:: def __init__(x: Number, y: Number, /)
        :no-index:




        Initializes a FVector2.


    .. py:method:: __iter__() -> Iterator[float]

        Iterate over each component of the vector.


    .. py:method:: __hash__() -> int

        Generates a hash of the vector.


    .. py:method:: __len__() -> int:

        Returns the number of components in the vector (always :code:`2`).


    .. py:method:: __getitem__(key: int) -> float

        Get the value of the vector component at the position specified.


    .. py:method:: __eq__(other: Any) -> bool

        Check if this vector and the other object are equal.
        The other object must also be a :py:class:`FVector2` in order to pass as :code:`True`.


    .. py:method:: __lt__(other: Any) -> bool

        Check if this vector is less than the other object.
        The other object must also be a :py:class:`FVector2` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __le__(other: Any) -> bool

        Check if this vector is less than or equal to the other object.
        The other object must also be a :py:class:`FVector2` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __gt__(other: Any) -> bool

        Check if this vector is greater than the other object.
        The other object must also be a :py:class:`FVector2` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __ge__(other: Any) -> bool

        Check if this vector is greater than or equal to the other object.
        The other object must also be a :py:class:`FVector2` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __buffer__(flags: int) -> memoryview

        Generates a read-only memory view with access to the underyling vector data.
        The C data-type equivalent for the buffer is :code:`float[2]`.


    .. py:method:: __release_buffer__(view: memoryview) -> None

        Releases the memory buffer returned by :py:meth:`__buffer__`.


    .. py:method:: __add__(other: FVector2) -> FVector2

        Add the two vectors together, component-wise.


    .. py:method:: __add__(other: Number) -> FVector2
        :no-index:

        Add the number to each component of the vector.


    .. py:method:: __sub__(other: FVector2) -> FVector2

        Subtract two vectors from each other, component-wise.


    .. py:method:: __sub__(other: Number) -> FVector2
        :no-index:

        Subtract the number from each component of the vector.


    .. py:method:: __mul__(other: FVector2) -> FVector2

        Multiple the two vectors, component-wise.


    .. py:method:: __mul__(other: Number) -> FVector2
        :no-index:

        Multiply each component in the vector by the number.


    .. py:method:: __matmul__(other: FVector2) -> FVector2

        Computes the dot product of the two vectors.


    .. py:method:: __mod__(other: FVector2) -> FVector2

        Computes the modulus, component-wise.


    .. py:method:: __mod__(other: Number) -> FVector2
        :no-index:

        Computes the modulus for each component using the number.


    .. py:method:: __pow__(other: FVector2) -> FVector2

        Computes the power of each component in the vector by the other's component.


    .. py:method:: __pow__(other: Number) -> FVector2
        :no-index:

        Computes the power of each component in the vector by the number.



    .. py:method:: __truediv__(other: FVector2) -> FVector2

        Divide the two vectors, component-wise.


    .. py:method:: __truediv__(other: Number) -> FVector2
        :no-index:

        Divide each component in the vector by the number.




    .. py:method:: __abs__() -> FVector2

        Returns a new vector with each component's sign made positive.


    .. py:method:: __bool__() -> FVector2

        Returns :code:`True` if all components of the vector are not :code:`0`.


    .. py:property:: magnitude
        :type: float

        The magnitude of the vector.



    .. py:method:: normalize() -> FVector2

        Computes a normalized vector.


    .. py:method:: distance(other: FVector2, /) -> float

        Computes the distance between the two vectors.


    .. py:method:: lerp(other: FVector2, t: float, /) -> FVector2

        Calculate the point on the linear interpolant between the two vectors using t as the
        time between the two vectors. Note that t is not bound between :code:`0` and :code:`1`.
        That is, this method may be used to extrapolate.


    .. py:method:: min(n: Number, /) -> FVector2

        Creates a vector where each component is at most equal to the input.


    .. py:method:: max(n: Number, /) -> FVector2

        Creates a vector where each component is at least equal to the input.


    .. py:method:: clamp(min: Number, max: Number, /) -> FVector2

        Creates a vector where each component is at most equal to min and at least equal to max.


    .. py:method:: get_limits() -> tuple[float, float]
        :classmethod:

        Returns a tuple describing the minimum and maximum (respectively) values that vector can
        store per component.


    .. py:property:: pointer
        :type: ctypes._Pointer[ctypes.c_float]

        :code:`ctypes` pointer to the data represented by the vector.


    .. py:method:: get_size() -> int
        :classmethod:

        Returns the size, in bytes, of the data represented by the vector.


    .. py:method:: get_array_type() -> type[FVector2Array]
        :classmethod:

        Returns the emath class used to create an array of this vector type.


    .. py:method:: from_buffer(buffer: Buffer, /) -> FVector2
        :classmethod:

        Create a vector from an object supporting the buffer interface.
        The expected C data-type equivalent for the buffer is
        :code:`float[2]`.


C API
-----

.. c:function:: PyObject *FVector2_Create(const float *value)

    Returns a new :py:class:`FVector2` object or :code:`0` on failure.
    Data from the value pointer is copied.
    Note that the function reads 2 floats from the pointer.


.. c:function:: const float *FVector2_GetValuePointer(const PyObject *vector)

    Returns a pointer to the data represented by :py:class:`FVector2`. The lifetime of this
    pointer is tied to the :py:class:`FVector2` object.


.. c:function:: PyTypeObject *FVector2_GetType()

    Returns the type object of :py:class:`FVector2`.



