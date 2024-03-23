



..
    _ generated from codegen/templates/api_vector_array.rst

UVector1Array
===============

Python API
----------

.. py:class:: UVector1Array

    .. py:method:: __init__(*vectors: UVector1)

        Initializes a UVector1Array composed of the vectors provided.


    .. py:method:: __hash__() -> int

        Generates a hash of the array.


    .. py:method:: __len__() -> int:

        Returns the number of vectors in the array.


    .. py:method:: __iter__() -> Iterator[int]

        Iterate over each vector in the array.


    .. py:method:: __getitem__(index: int) -> int

        Get the vector in the array at the position specified.


    .. py:method:: __getitem__(index: slice) -> intArray
        :no-index:

        Slice the array, generating a new one.


    .. py:method:: __eq__(other: Any) -> bool

        Check if this array and the other object are equal.
        The other object must also be a :py:class:`UVector1Array` in order to pass as :code:`True`.


    .. py:method:: __bool__() -> UVector1

        Returns :code:`True` if the array is not empty.


    .. py:method:: __buffer__(flags: int) -> memoryview

        Generates a read-only memory view with access to the underyling array data.
        The C data-type equivalent for the buffer is :code:`unsigned int[1 * length]`.


    .. py:method:: __release_buffer__(view: memoryview) -> None

        Releases the memory buffer returned by :py:meth:`__buffer__`.


    .. py:property:: pointer
        :type: ctypes._Pointer[ctypes.c_uint]

        :code:`ctypes` pointer to the data represented by the array.

    .. py:property:: size
        :type: int

        Return the size, in bytes, of the data represented by the array.


    .. py:method:: get_size() -> int
        :classmethod:

        Returns the size, in bytes, of the data represented by the vector.


    .. py:method:: get_component_type() -> type[UVector1]
        :classmethod:

        Returns the emath class used to create a vector for this array type.


    .. py:method:: from_buffer(buffer: Buffer, /) -> UVector1
        :classmethod:

        Create an array from an object supporting the buffer interface.
        The expected C data-type equivalent for the buffer is
        :code:`unsigned int[1 * length]`.


C API
-----

.. c:function:: PyObject *UVector1Array_Create(size_t length, const unsigned int *value)

    Returns a new :py:class:`UVector1Array` object or :code:`0` on failure.
    Data from the value pointer is copied.
    Note that the function reads :code:`1 * length` unsigned ints from the pointer.


.. c:function:: const unsigned int *UVector1Array_GetValuePointer(const PyObject *vector)

    Returns a pointer to the data represented by :py:class:`UVector1Array`. The lifetime of this
    pointer is tied to the :py:class:`UVector1Array` object.


.. c:function:: size_t UVector1Array_GetLength()

    Returns the number of vectors in the :py:class:`UVector1Array` object.


.. c:function:: PyTypeObject *UVector1Array_GetType()

    Returns the type object of :py:class:`UVector1Array`.



