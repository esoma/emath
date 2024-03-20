



..
    _ generated from codegen/templates/api_vector.rst

UVector3
==========

Python API
----------

.. py:class:: UVector3

    .. py:method:: __init__()

        Initializes a UVector3 with :code:`0` in all component positions.


    .. py:method:: __init__(all: Number, /)
        :no-index:

        Initializes a UVector3 with :code:`all` in all component positions.



    .. py:method:: __init__(x: Number, y: Number, z: Number, /)
        :no-index:



        Initializes a UVector3.


    .. py:method:: __iter__() -> Iterator[int]

        Iterate over each component of the vector.


    .. py:method:: __hash__() -> int

        Generates a hash of the vector.


    .. py:method:: __len__() -> int:

        Returns the number of components in the vector (always :code:`3`).


    .. py:method:: __getitem__(key: int) -> int

        Get the value of the vector component at the position specified.


    .. py:method:: __eq__(other: Any) -> bool

        Check if this vector and the other object are equal.
        The other object must also be a :py:class:`UVector3` in order to pass as :code:`True`.


    .. py:method:: __lt__(other: Any) -> bool

        Check if this vector is less than the other object.
        The other object must also be a :py:class:`UVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __le__(other: Any) -> bool

        Check if this vector is less than or equal to the other object.
        The other object must also be a :py:class:`UVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __gt__(other: Any) -> bool

        Check if this vector is greater than the other object.
        The other object must also be a :py:class:`UVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __ge__(other: Any) -> bool

        Check if this vector is greater than or equal to the other object.
        The other object must also be a :py:class:`UVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __buffer__(flags: int) -> memoryview

        Generates a read-only memory view with access to the underyling vector data.
        The C data-type equivalent for the buffer is :code:`unsigned int[3]`.


    .. py:method:: __release_buffer__(view: memoryview) -> None

        Releases the memory buffer returned by :py:meth:`__buffer__`.


    .. py:method:: __add__(other: UVector3) -> UVector3

        Add the two vectors together, component-wise.


    .. py:method:: __add__(other: Number) -> UVector3
        :no-index:

        Add the number to each component of the vector.


    .. py:method:: __sub__(other: UVector3) -> UVector3

        Subtract two vectors from each other, component-wise.


    .. py:method:: __sub__(other: Number) -> UVector3
        :no-index:

        Subtract the number from each component of the vector.


    .. py:method:: __mul__(other: UVector3) -> UVector3

        Multiple the two vectors, component-wise.


    .. py:method:: __mul__(other: Number) -> UVector3
        :no-index:

        Multiply each component in the vector by the number.




    .. py:method:: __truediv__(other: UVector3) -> UVector3

        Divide the two vectors, component-wise.


    .. py:method:: __truediv__(other: Number) -> UVector3
        :no-index:

        Divide each component in the vector by the number.



    .. py:method:: __neg__() -> UVector3

        Returns a new vector with each component's sign flipped.


    .. py:method:: __abs__() -> UVector3

        Returns a new vector with each component's sign made positive.


    .. py:method:: __bool__() -> UVector3

        Returns :code:`True` if all components of the vector are not :code:`0`.



    .. py:method:: min(n: Number, /) -> UVector3

        Creates a vector where each component is at most equal to the input.


    .. py:method:: max(n: Number, /) -> UVector3

        Creates a vector where each component is at least equal to the input.


    .. py:method:: clamp(min: Number, max: Number, /) -> UVector3

        Creates a vector where each component is at most equal to min and at least equal to max.


    .. py:method:: get_limits() -> tuple[int, int]
        :classmethod:

        Returns a tuple describing the minimum and maximum (respectively) values that vector can
        store per component.


    .. py:property:: pointer
        :type: ctypes._Pointer[ctypes.c_uint]

        :code:`ctypes` pointer to the data represented by the vector.


    .. py:method:: get_size() -> int
        :classmethod:

        Returns the size, in bytes, of the data represented by the vector.


    .. py:method:: get_array_type() -> type[UVector3Array]
        :classmethod:

        Returns the emath class used to create an array of this vector type.


    .. py:method:: from_buffer(buffer: Buffer, /) -> UVector3
        :classmethod:

        Create a vector from an object supporting the buffer interface.
        The expected C data-type equivalent for the buffer is
        :code:`unsigned int[3]`.


C API
-----

.. c:function:: PyObject *UVector3_Create(const unsigned int *value)

    Returns a new :py:class:`UVector3` object or :code:`0` on failure.
    Data from the value pointer is copied.
    Note that the function reads 3 unsigned ints from the pointer.


.. c:function:: const unsigned int *UVector3_GetValuePointer(const PyObject *vector)

    Returns a pointer to the data represented by :py:class:`UVector3`. The lifetime of this
    pointer is tied to the :py:class:`UVector3` object.


.. c:function:: PyTypeObject *UVector3_GetType()

    Returns the type object of :py:class:`UVector3`.



