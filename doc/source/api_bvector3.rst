



..
    _ generated from codegen/templates/api_vector.rst

BVector3
==========

Python API
----------

.. py:class:: BVector3

    .. py:method:: __init__()

        Initializes a BVector3 with :code:`0` in all component positions.


    .. py:method:: __init__(all: Number, /)
        :no-index:

        Initializes a BVector3 with :code:`all` in all component positions.



    .. py:method:: __init__(x: Number, y: Number, z: Number, /)
        :no-index:



        Initializes a BVector3.


    .. py:method:: __iter__() -> Iterator[bool]

        Iterate over each component of the vector.


    .. py:method:: __hash__() -> int

        Generates a hash of the vector.


    .. py:method:: __len__() -> int:

        Returns the number of components in the vector (always :code:`3`).


    .. py:method:: __getitem__(key: int) -> bool

        Get the value of the vector component at the position specified.


    .. py:method:: __eq__(other: Any) -> bool

        Check if this vector and the other object are equal.
        The other object must also be a :py:class:`BVector3` in order to pass as :code:`True`.


    .. py:method:: __lt__(other: Any) -> bool

        Check if this vector is less than the other object.
        The other object must also be a :py:class:`BVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __le__(other: Any) -> bool

        Check if this vector is less than or equal to the other object.
        The other object must also be a :py:class:`BVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __gt__(other: Any) -> bool

        Check if this vector is greater than the other object.
        The other object must also be a :py:class:`BVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __ge__(other: Any) -> bool

        Check if this vector is greater than or equal to the other object.
        The other object must also be a :py:class:`BVector3` in order to pass as :code:`True`.
        Note this comparison operates the same as other Python container types.


    .. py:method:: __buffer__(flags: int) -> memoryview

        Generates a read-only memory view with access to the underyling vector data.
        The C data-type equivalent for the buffer is :code:`bool[3]`.


    .. py:method:: __release_buffer__(view: memoryview) -> None

        Releases the memory buffer returned by :py:meth:`__buffer__`.


    .. py:method:: __add__(other: BVector3) -> BVector3

        Add the two vectors together, component-wise.


    .. py:method:: __add__(other: Number) -> BVector3
        :no-index:

        Add the number to each component of the vector.


    .. py:method:: __sub__(other: BVector3) -> BVector3

        Subtract two vectors from each other, component-wise.


    .. py:method:: __sub__(other: Number) -> BVector3
        :no-index:

        Subtract the number from each component of the vector.


    .. py:method:: __mul__(other: BVector3) -> BVector3

        Multiple the two vectors, component-wise.


    .. py:method:: __mul__(other: Number) -> BVector3
        :no-index:

        Multiply each component in the vector by the number.







    .. py:method:: __abs__() -> BVector3

        Returns a new vector with each component's sign made positive.


    .. py:method:: __bool__() -> BVector3

        Returns :code:`True` if all components of the vector are not :code:`0`.



    .. py:method:: min(n: Number, /) -> BVector3

        Creates a vector where each component is at most equal to the input.


    .. py:method:: max(n: Number, /) -> BVector3

        Creates a vector where each component is at least equal to the input.


    .. py:method:: clamp(min: Number, max: Number, /) -> BVector3

        Creates a vector where each component is at most equal to min and at least equal to max.


    .. py:method:: get_limits() -> tuple[bool, bool]
        :classmethod:

        Returns a tuple describing the minimum and maximum (respectively) values that vector can
        store per component.


    .. py:property:: pointer
        :type: ctypes._Pointer[ctypes.c_bool]

        :code:`ctypes` pointer to the data represented by the vector.


    .. py:method:: get_size() -> int
        :classmethod:

        Returns the size, in bytes, of the data represented by the vector.


    .. py:method:: get_array_type() -> type[BVector3Array]
        :classmethod:

        Returns the emath class used to create an array of this vector type.


    .. py:method:: from_buffer(buffer: Buffer, /) -> BVector3
        :classmethod:

        Create a vector from an object supporting the buffer interface.
        The expected C data-type equivalent for the buffer is
        :code:`bool[3]`.


C API
-----

.. c:function:: PyObject *BVector3_Create(const bool *value)

    Returns a new :py:class:`BVector3` object or :code:`0` on failure.
    Data from the value pointer is copied.
    Note that the function reads 3 bools from the pointer.


.. c:function:: const bool *BVector3_GetValuePointer(const PyObject *vector)

    Returns a pointer to the data represented by :py:class:`BVector3`. The lifetime of this
    pointer is tied to the :py:class:`BVector3` object.


.. c:function:: PyTypeObject *BVector3_GetType()

    Returns the type object of :py:class:`BVector3`.



