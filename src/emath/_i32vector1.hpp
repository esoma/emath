
// generated from codegen/templates/_vector.hpp

#ifndef E_MATH_I32VECTOR1_HPP
#define E_MATH_I32VECTOR1_HPP

// stdlib
#include <limits>
#include <functional>
// python
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <structmember.h>
// glm
#include <glm/glm.hpp>
#include <glm/gtx/compatibility.hpp>
#include <glm/ext.hpp>
// emath
#include "_modulestate.hpp"
#include "_quaterniontype.hpp"
#include "_vectortype.hpp"
#include "_type.hpp"


static PyObject *
I32Vector1__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{

        int32_t c_0 = 0;


    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "I32Vector1 does accept any keyword arguments"
        );
        return 0;
    }
    auto arg_count = PyTuple_GET_SIZE(args);
    switch (PyTuple_GET_SIZE(args))
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            auto arg = PyTuple_GET_ITEM(args, 0);
            int32_t arg_c = pyobject_to_c_int32_t(arg);
            auto error_occurred = PyErr_Occurred();
            if (error_occurred){ return 0; }

                c_0 = arg_c;

            break;
        }

        default:
        {
            PyErr_Format(
                PyExc_TypeError,
                "invalid number of arguments supplied to I32Vector1, expected "
                "0, 1 or 1 (got %zd)",
                arg_count
            );
            return 0;
        }
    }

    I32Vector1 *self = (I32Vector1*)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->glm = new I32Vector1Glm(

            c_0

    );

    return (PyObject *)self;
}


static void
I32Vector1__dealloc__(I32Vector1 *self)
{
    if (self->weakreflist)
    {
        PyObject_ClearWeakRefs((PyObject *)self);
    }

    delete self->glm;

    PyTypeObject *type = Py_TYPE(self);
    type->tp_free(self);
    Py_DECREF(type);
}


// this is roughly copied from how python hashes tuples in 3.11
#if SIZEOF_PY_UHASH_T > 4
#define _HASH_XXPRIME_1 ((Py_uhash_t)11400714785074694791ULL)
#define _HASH_XXPRIME_2 ((Py_uhash_t)14029467366897019727ULL)
#define _HASH_XXPRIME_5 ((Py_uhash_t)2870177450012600261ULL)
#define _HASH_XXROTATE(x) ((x << 31) | (x >> 33))  /* Rotate left 31 bits */
#else
#define _HASH_XXPRIME_1 ((Py_uhash_t)2654435761UL)
#define _HASH_XXPRIME_2 ((Py_uhash_t)2246822519UL)
#define _HASH_XXPRIME_5 ((Py_uhash_t)374761393UL)
#define _HASH_XXROTATE(x) ((x << 13) | (x >> 19))  /* Rotate left 13 bits */
#endif

static Py_hash_t
I32Vector1__hash__(I32Vector1 *self)
{
    Py_ssize_t len = 1;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (I32Vector1Glm::length_type i = 0; i < len; i++)
    {
        Py_uhash_t lane = std::hash<int32_t>{}((*self->glm)[i]);
        acc += lane * _HASH_XXPRIME_2;
        acc = _HASH_XXROTATE(acc);
        acc *= _HASH_XXPRIME_1;
    }
    acc += len ^ (_HASH_XXPRIME_5 ^ 3527539UL);

    if (acc == (Py_uhash_t)-1) {
        return 1546275796;
    }
    return acc;
}


static PyObject *
I32Vector1__repr__(I32Vector1 *self)
{
    PyObject *result = 0;

        PyObject *py_0 = 0;



        py_0 = c_int32_t_to_pyobject((*self->glm)[0]);
        if (!py_0){ goto cleanup; }

    result = PyUnicode_FromFormat(
        "I32Vector1("

            "%R"

        ")",

            py_0

    );
cleanup:

        Py_XDECREF(py_0);

    return result;
}


static Py_ssize_t
I32Vector1__len__(I32Vector1 *self)
{
    return 1;
}


static PyObject *
I32Vector1__getitem__(I32Vector1 *self, Py_ssize_t index)
{
    if (index < 0 || index > 0)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }
    auto c = (*self->glm)[(I32Vector1Glm::length_type)index];
    return c_int32_t_to_pyobject(c);
}


static PyObject *
I32Vector1__richcmp__(I32Vector1 *self, I32Vector1 *other, int op)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_LT:
        {
            for (I32Vector1Glm::length_type i = 0; i < 1; i++)
            {
                if ((*self->glm)[i] < (*other->glm)[i])
                {
                    Py_RETURN_TRUE;
                }
                if ((*self->glm)[i] != (*other->glm)[i])
                {
                    Py_RETURN_FALSE;
                }
            }
            Py_RETURN_FALSE;
        }
        case Py_LE:
        {
            for (I32Vector1Glm::length_type i = 0; i < 1; i++)
            {
                if ((*self->glm)[i] < (*other->glm)[i])
                {
                    Py_RETURN_TRUE;
                }
                if ((*self->glm)[i] != (*other->glm)[i])
                {
                    Py_RETURN_FALSE;
                }
            }
            Py_RETURN_TRUE;
        }
        case Py_EQ:
        {
            if ((*self->glm) == (*other->glm))
            {
                Py_RETURN_TRUE;
            }
            else
            {
                Py_RETURN_FALSE;
            }
        }
        case Py_NE:
        {
            if ((*self->glm) != (*other->glm))
            {
                Py_RETURN_TRUE;
            }
            else
            {
                Py_RETURN_FALSE;
            }
        }
        case Py_GE:
        {
            for (I32Vector1Glm::length_type i = 0; i < 1; i++)
            {
                if ((*self->glm)[i] > (*other->glm)[i])
                {
                    Py_RETURN_TRUE;
                }
                if ((*self->glm)[i] != (*other->glm)[i])
                {
                    Py_RETURN_FALSE;
                }
            }
            Py_RETURN_TRUE;
        }
        case Py_GT:
        {
            for (I32Vector1Glm::length_type i = 0; i < 1; i++)
            {
                if ((*self->glm)[i] > (*other->glm)[i])
                {
                    Py_RETURN_TRUE;
                }
                if ((*self->glm)[i] != (*other->glm)[i])
                {
                    Py_RETURN_FALSE;
                }
            }
            Py_RETURN_FALSE;
        }
    }
    Py_RETURN_NOTIMPLEMENTED;
}


static PyObject *
I32Vector1__add__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->I32Vector1_PyTypeObject;

    I32Vector1Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((I32Vector1 *)left)->glm) + (*((I32Vector1 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_int32_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((I32Vector1 *)left)->glm) + c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_int32_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left + (*((I32Vector1 *)right)->glm);
        }
    }

    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(

            vector[0]

    );

    return (PyObject *)result;
}


static PyObject *
I32Vector1__sub__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->I32Vector1_PyTypeObject;

    I32Vector1Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((I32Vector1 *)left)->glm) - (*((I32Vector1 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_int32_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((I32Vector1 *)left)->glm) - c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_int32_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left - (*((I32Vector1 *)right)->glm);
        }
    }

    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(

            vector[0]

    );

    return (PyObject *)result;
}


static PyObject *
I32Vector1__mul__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->I32Vector1_PyTypeObject;

    I32Vector1Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((I32Vector1 *)left)->glm) * (*((I32Vector1 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_int32_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((I32Vector1 *)left)->glm) * c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_int32_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left * (*((I32Vector1 *)right)->glm);
        }
    }

    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(

            vector[0]

    );

    return (PyObject *)result;
}







    static PyObject *
    I32Vector1__truediv__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->I32Vector1_PyTypeObject;

        I32Vector1Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {

                if (

                        (*((I32Vector1 *)right)->glm)[0] == 0

                )
                {
                    PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                    return 0;
                }

            vector = (*((I32Vector1 *)left)->glm) / (*((I32Vector1 *)right)->glm);
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_int32_t(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                    if (c_right == 0)
                    {
                        PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                        return 0;
                    }

                vector = (*((I32Vector1 *)left)->glm) / c_right;
            }
            else
            {
                auto c_left = pyobject_to_c_int32_t(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                    if (

                            (*((I32Vector1 *)right)->glm)[0] == 0

                    )
                    {
                        PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                        return 0;
                    }

                vector = c_left / (*((I32Vector1 *)right)->glm);
            }
        }

        I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector1Glm(

                vector[0]

        );

        return (PyObject *)result;
    }




    static PyObject *
    I32Vector1__neg__(I32Vector1 *self)
    {
        auto cls = Py_TYPE(self);

            I32Vector1Glm vector = -(*self->glm);


        I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector1Glm(

                vector[0]

        );

        return (PyObject *)result;
    }



static PyObject *
I32Vector1__abs__(I32Vector1 *self)
{
    auto cls = Py_TYPE(self);
    I32Vector1Glm vector = glm::abs(*self->glm);

    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(

            vector[0]

    );

    return (PyObject *)result;
}


static int
I32Vector1__bool__(I32Vector1 *self)
{

        if ((*self->glm)[0] == 0)
        {
            return 0;
        }

    return 1;
}


static int
I32Vector1_getbufferproc(I32Vector1 *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_TypeError, "I32Vector1 is read only");
        view->obj = 0;
        return -1;
    }
    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(int32_t) * 1;
    view->readonly = 1;
    view->itemsize = sizeof(int32_t);
    view->ndim = 1;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "=i";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        static Py_ssize_t shape = 1;
        view->shape = &shape;
    }
    else
    {
        view->shape = 0;
    }
    if (flags & PyBUF_STRIDES)
    {
        view->strides = &view->itemsize;
    }
    else
    {
        view->strides = 0;
    }
    view->suboffsets = 0;
    view->internal = 0;
    Py_INCREF(self);
    return 0;
}



    static PyObject *
    I32Vector1_Getter_0(I32Vector1 *self, void *)
    {
        auto c = (*self->glm)[0];
        return c_int32_t_to_pyobject(c);
    }






static PyObject *
I32Vector1_pointer(I32Vector1 *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_int32_t_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyGetSetDef I32Vector1_PyGetSetDef[] = {
    {"x", (getter)I32Vector1_Getter_0, 0, 0, 0},
    {"r", (getter)I32Vector1_Getter_0, 0, 0, 0},
    {"s", (getter)I32Vector1_Getter_0, 0, 0, 0},
    {"u", (getter)I32Vector1_Getter_0, 0, 0, 0},




    {"pointer", (getter)I32Vector1_pointer, 0, 0, 0},
    {0, 0, 0, 0, 0}
};



    static PyObject *
    swizzle_2_I32Vector1(I32Vector1 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        I32Vector2Glm vec;
        for (int i = 0; i < 2; i++)
        {
            char c_name = attr[i];
            int glm_index;
            switch(c_name)
            {
                case 'o':
                    vec[i] = 0;
                    continue;
                case 'l':
                    vec[i] = 1;
                    continue;
                case 'x':
                case 'r':
                case 's':
                case 'u':
                    glm_index = 0;
                    break;



                default:
                {
                    PyErr_Format(
                        PyExc_AttributeError,
                        "invalid swizzle: %R", py_attr
                    );
                    return 0;
                }
            }
            vec[i] = (*self->glm)[glm_index];
        }

        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->I32Vector2_PyTypeObject;

        I32Vector2 *result = (I32Vector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector2Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_3_I32Vector1(I32Vector1 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        I32Vector3Glm vec;
        for (int i = 0; i < 3; i++)
        {
            char c_name = attr[i];
            int glm_index;
            switch(c_name)
            {
                case 'o':
                    vec[i] = 0;
                    continue;
                case 'l':
                    vec[i] = 1;
                    continue;
                case 'x':
                case 'r':
                case 's':
                case 'u':
                    glm_index = 0;
                    break;



                default:
                {
                    PyErr_Format(
                        PyExc_AttributeError,
                        "invalid swizzle: %R", py_attr
                    );
                    return 0;
                }
            }
            vec[i] = (*self->glm)[glm_index];
        }

        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->I32Vector3_PyTypeObject;

        I32Vector3 *result = (I32Vector3 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector3Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_4_I32Vector1(I32Vector1 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        I32Vector4Glm vec;
        for (int i = 0; i < 4; i++)
        {
            char c_name = attr[i];
            int glm_index;
            switch(c_name)
            {
                case 'o':
                    vec[i] = 0;
                    continue;
                case 'l':
                    vec[i] = 1;
                    continue;
                case 'x':
                case 'r':
                case 's':
                case 'u':
                    glm_index = 0;
                    break;



                default:
                {
                    PyErr_Format(
                        PyExc_AttributeError,
                        "invalid swizzle: %R", py_attr
                    );
                    return 0;
                }
            }
            vec[i] = (*self->glm)[glm_index];
        }

        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->I32Vector4_PyTypeObject;

        I32Vector4 *result = (I32Vector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector4Glm(vec);

        return (PyObject *)result;
    }




static PyObject *
I32Vector1__getattr__(I32Vector1 *self, PyObject *py_attr)
{
    PyObject *result = PyObject_GenericGetAttr((PyObject *)self, py_attr);
    if (result != 0){ return result; }

    auto attr_length = PyUnicode_GET_LENGTH(py_attr);
    switch(attr_length)
    {
        case 2:
        {
            PyErr_Clear();
            return swizzle_2_I32Vector1(self, py_attr);
        }
        case 3:
        {
            PyErr_Clear();
            return swizzle_3_I32Vector1(self, py_attr);
        }
        case 4:
        {
            PyErr_Clear();
            return swizzle_4_I32Vector1(self, py_attr);
        }
    }
    return 0;
}


static PyMemberDef I32Vector1_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(I32Vector1, weakreflist), READONLY},
    {0}
};





static PyObject *
I32Vector1_min(I32Vector1 *self, PyObject *min)
{
    auto c_min = pyobject_to_c_int32_t(min);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::min(*self->glm, c_min);
    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(vector);
    return (PyObject *)result;
}


static PyObject *
I32Vector1_max(I32Vector1 *self, PyObject *max)
{
    auto c_max = pyobject_to_c_int32_t(max);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::max(*self->glm, c_max);
    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(vector);
    return (PyObject *)result;
}


static PyObject *
I32Vector1_clamp(I32Vector1 *self, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 2)
    {
        PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
        return 0;
    }
    auto c_min = pyobject_to_c_int32_t(args[0]);
    if (PyErr_Occurred()){ return 0; }
    auto c_max = pyobject_to_c_int32_t(args[1]);
    if (PyErr_Occurred()){ return 0; }

    auto cls = Py_TYPE(self);
    auto vector = glm::clamp(*self->glm, c_min, c_max);
    I32Vector1 *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(vector);
    return (PyObject *)result;
}


static PyObject *
I32Vector1_get_size(I32Vector1 *cls, void *)
{
    return PyLong_FromSize_t(sizeof(int32_t) * 1);
}


static PyObject *
I32Vector1_get_limits(I32Vector1 *cls, void *)
{
    auto c_min = std::numeric_limits<int32_t>::lowest();
    auto c_max = std::numeric_limits<int32_t>::max();
    auto py_min = c_int32_t_to_pyobject(c_min);
    if (!py_min){ return 0; }
    auto py_max = c_int32_t_to_pyobject(c_max);
    if (!py_max)
    {
        Py_DECREF(py_min);
        return 0;
    }
    auto result = PyTuple_New(2);
    if (!result)
    {
        Py_DECREF(py_min);
        Py_DECREF(py_max);
        return 0;
    }
    PyTuple_SET_ITEM(result, 0, py_min);
    PyTuple_SET_ITEM(result, 1, py_max);
    return result;
}


static PyObject *
I32Vector1_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(int32_t) * 1;
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length < expected_size)
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer of size %zd, got %zd", expected_size, view_length);
        return 0;
    }

    auto *result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->glm = new I32Vector1Glm();
    std::memcpy(result->glm, view.buf, expected_size);
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
I32Vector1_get_array_type(PyTypeObject *cls, void*)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto array_type = module_state->I32Vector1Array_PyTypeObject;
    Py_INCREF(array_type);
    return (PyObject *)array_type;
}


static PyMethodDef I32Vector1_PyMethodDef[] = {

    {"min", (PyCFunction)I32Vector1_min, METH_O, 0},
    {"max", (PyCFunction)I32Vector1_max, METH_O, 0},
    {"clamp", (PyCFunction)I32Vector1_clamp, METH_FASTCALL, 0},
    {"get_limits", (PyCFunction)I32Vector1_get_limits, METH_NOARGS | METH_STATIC, 0},
    {"get_size", (PyCFunction)I32Vector1_get_size, METH_NOARGS | METH_STATIC, 0},
    {"get_array_type", (PyCFunction)I32Vector1_get_array_type, METH_NOARGS | METH_STATIC, 0},
    {"from_buffer", (PyCFunction)I32Vector1_from_buffer, METH_O | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot I32Vector1_PyType_Slots [] = {
    {Py_tp_new, (void*)I32Vector1__new__},
    {Py_tp_dealloc, (void*)I32Vector1__dealloc__},
    {Py_tp_hash, (void*)I32Vector1__hash__},
    {Py_tp_repr, (void*)I32Vector1__repr__},
    {Py_sq_length, (void*)I32Vector1__len__},
    {Py_sq_item, (void*)I32Vector1__getitem__},
    {Py_tp_richcompare, (void*)I32Vector1__richcmp__},
    {Py_nb_add, (void*)I32Vector1__add__},
    {Py_nb_subtract, (void*)I32Vector1__sub__},
    {Py_nb_multiply, (void*)I32Vector1__mul__},


        {Py_nb_true_divide, (void*)I32Vector1__truediv__},


        {Py_nb_negative, (void*)I32Vector1__neg__},

    {Py_nb_absolute, (void*)I32Vector1__abs__},
    {Py_nb_bool, (void*)I32Vector1__bool__},
    {Py_bf_getbuffer, (void*)I32Vector1_getbufferproc},
    {Py_tp_getset, (void*)I32Vector1_PyGetSetDef},
    {Py_tp_getattro, (void*)I32Vector1__getattr__},
    {Py_tp_members, (void*)I32Vector1_PyMemberDef},
    {Py_tp_methods, (void*)I32Vector1_PyMethodDef},
    {0, 0},
};


static PyType_Spec I32Vector1_PyTypeSpec = {
    "emath.I32Vector1",
    sizeof(I32Vector1),
    0,
    Py_TPFLAGS_DEFAULT,
    I32Vector1_PyType_Slots
};


static PyTypeObject *
define_I32Vector1_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &I32Vector1_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "I32Vector1", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}




static PyObject *
I32Vector1Array__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->I32Vector1_PyTypeObject;

    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "I32Vector1 does accept any keyword arguments"
        );
        return 0;
    }

    auto arg_count = PyTuple_GET_SIZE(args);
    if (arg_count == 0)
    {
        auto self = (I32Vector1Array *)cls->tp_alloc(cls, 0);
        if (!self){ return 0; }
        self->length = 0;
        self->glm = 0;
        return (PyObject *)self;
    }

    auto *self = (I32Vector1Array *)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->length = arg_count;
    self->glm = new I32Vector1Glm[arg_count];

    for (int i = 0; i < arg_count; i++)
    {
        auto arg = PyTuple_GET_ITEM(args, i);
        if (Py_TYPE(arg) == element_cls)
        {
            self->glm[i] = *(((I32Vector1*)arg)->glm);
        }
        else
        {
            Py_DECREF(self);
            PyErr_Format(
                PyExc_TypeError,
                "invalid type %R, expected %R",
                arg,
                element_cls
            );
            return 0;
        }
    }

    return (PyObject *)self;
}


static void
I32Vector1Array__dealloc__(I32Vector1Array *self)
{
    if (self->weakreflist)
    {
        PyObject_ClearWeakRefs((PyObject *)self);
    }

    delete self->glm;

    PyTypeObject *type = Py_TYPE(self);
    type->tp_free(self);
    Py_DECREF(type);
}


static Py_hash_t
I32Vector1Array__hash__(I32Vector1Array *self)
{
    Py_ssize_t len = self->length * 1;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (Py_ssize_t i = 0; i < (Py_ssize_t)self->length; i++)
    {
        for (I32Vector1Glm::length_type j = 0; j < 1; j++)
        {
            Py_uhash_t lane = std::hash<int32_t>{}(self->glm[i][j]);
            acc += lane * _HASH_XXPRIME_2;
            acc = _HASH_XXROTATE(acc);
            acc *= _HASH_XXPRIME_1;
        }
        acc += len ^ (_HASH_XXPRIME_5 ^ 3527539UL);
    }

    if (acc == (Py_uhash_t)-1) {
        return 1546275796;
    }
    return acc;
}


static PyObject *
I32Vector1Array__repr__(I32Vector1Array *self)
{
    return PyUnicode_FromFormat("I32Vector1Array[%zu]", self->length);
}


static Py_ssize_t
I32Vector1Array__len__(I32Vector1Array *self)
{
    return self->length;
}


static PyObject *
I32Vector1Array__sq_getitem__(I32Vector1Array *self, Py_ssize_t index)
{
    if (index < 0 || index > (Py_ssize_t)self->length - 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }

    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->I32Vector1_PyTypeObject;

    I32Vector1 *result = (I32Vector1 *)element_cls->tp_alloc(element_cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(self->glm[index]);

    return (PyObject *)result;
}


static PyObject *
I32Vector1Array__mp_getitem__(I32Vector1Array *self, PyObject *key)
{
    if (PySlice_Check(key))
    {
        Py_ssize_t start;
        Py_ssize_t stop;
        Py_ssize_t step;
        Py_ssize_t length;
        if (PySlice_GetIndicesEx(key, self->length, &start, &stop, &step, &length) != 0)
        {
            return 0;
        }
        auto cls = Py_TYPE(self);
        auto *result = (I32Vector1Array *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        if (length == 0)
        {
            result->length = 0;
            result->glm = 0;
        }
        else
        {
            result->length = length;
            result->glm = new I32Vector1Glm[length];
            for (I32Vector1Glm::length_type i = 0; i < length; i++)
            {
                result->glm[i] = self->glm[start + (i * step)];
            }
        }
        return (PyObject *)result;
    }
    else if (PyLong_Check(key))
    {
        auto index = PyLong_AsSsize_t(key);
        if (PyErr_Occurred()){ return 0; }
        if (index < 0)
        {
            index = (Py_ssize_t)self->length + index;
        }
        if (index < 0 || index > (Py_ssize_t)self->length - 1)
        {
            PyErr_Format(PyExc_IndexError, "index out of range");
            return 0;
        }
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto element_cls = module_state->I32Vector1_PyTypeObject;

        I32Vector1 *result = (I32Vector1 *)element_cls->tp_alloc(element_cls, 0);
        if (!result){ return 0; }
        result->glm = new I32Vector1Glm(self->glm[index]);

        return (PyObject *)result;
    }
    PyErr_Format(PyExc_TypeError, "expected int or slice");
    return 0;
}


static PyObject *
I32Vector1Array__richcmp__(
    I32Vector1Array *self,
    I32Vector1Array *other,
    int op
)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_EQ:
        {
            if (self->length == other->length)
            {
                for (size_t i = 0; i < self->length; i++)
                {
                    if (self->glm[i] != other->glm[i])
                    {
                        Py_RETURN_FALSE;
                    }
                }
                Py_RETURN_TRUE;
            }
            else
            {
                Py_RETURN_FALSE;
            }
        }
        case Py_NE:
        {
            if (self->length != other->length)
            {
                Py_RETURN_TRUE;
            }
            else
            {
                for (size_t i = 0; i < self->length; i++)
                {
                    if (self->glm[i] != other->glm[i])
                    {
                        Py_RETURN_TRUE;
                    }
                }
                Py_RETURN_FALSE;
            }
        }
    }
    Py_RETURN_NOTIMPLEMENTED;
}


static int
I32Vector1Array__bool__(I32Vector1Array *self)
{
    return self->length ? 1 : 0;
}


static int
I32Vector1Array_getbufferproc(I32Vector1Array *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_BufferError, "I32Vector1 is read only");
        view->obj = 0;
        return -1;
    }

    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(int32_t) * 1 * self->length;
    view->readonly = 1;
    view->itemsize = sizeof(int32_t);
    view->ndim = 2;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "=i";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        view->shape = new Py_ssize_t[2] {
            (Py_ssize_t)self->length,
            1
        };
    }
    else
    {
        view->shape = 0;
    }
    if (flags & PyBUF_STRIDES)
    {
        static Py_ssize_t strides[] = {
            sizeof(int32_t) * 1,
            sizeof(int32_t)
        };
        view->strides = &strides[0];
    }
    else
    {
        view->strides = 0;
    }
    view->suboffsets = 0;
    view->internal = 0;
    Py_INCREF(self);
    return 0;
}


static void
I32Vector1Array_releasebufferproc(I32Vector1Array *self, Py_buffer *view)
{
    delete view->shape;
}


static PyMemberDef I32Vector1Array_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(I32Vector1Array, weakreflist), READONLY},
    {0}
};


static PyObject *
I32Vector1Array_pointer(I32Vector1Array *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_int32_t_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyObject *
I32Vector1Array_size(I32Vector1Array *self, void *)
{
    return PyLong_FromSize_t(sizeof(int32_t) * 1 * self->length);
}


static PyGetSetDef I32Vector1Array_PyGetSetDef[] = {
    {"pointer", (getter)I32Vector1Array_pointer, 0, 0, 0},
    {"size", (getter)I32Vector1Array_size, 0, 0, 0},
    {0, 0, 0, 0, 0}
};


static PyObject *
I32Vector1Array_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(int32_t);
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length % (sizeof(int32_t) * 1))
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer evenly divisible by %zd, got %zd", sizeof(int32_t), view_length);
        return 0;
    }
    auto array_length = view_length / (sizeof(int32_t) * 1);

    auto *result = (I32Vector1Array *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->length = array_length;
    if (array_length > 0)
    {
        result->glm = new I32Vector1Glm[array_length];
        std::memcpy(result->glm, view.buf, view_length);
    }
    else
    {
        result->glm = 0;
    }
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
I32Vector1Array_get_component_type(PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 0)
    {
        PyErr_Format(PyExc_TypeError, "expected 0 arguments, got %zi", nargs);
        return 0;
    }
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto component_type = module_state->I32Vector1_PyTypeObject;
    Py_INCREF(component_type);
    return (PyObject *)component_type;
}


static PyMethodDef I32Vector1Array_PyMethodDef[] = {
    {"from_buffer", (PyCFunction)I32Vector1Array_from_buffer, METH_O | METH_CLASS, 0},
    {"get_component_type", (PyCFunction)I32Vector1Array_get_component_type, METH_FASTCALL | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot I32Vector1Array_PyType_Slots [] = {
    {Py_tp_new, (void*)I32Vector1Array__new__},
    {Py_tp_dealloc, (void*)I32Vector1Array__dealloc__},
    {Py_tp_hash, (void*)I32Vector1Array__hash__},
    {Py_tp_repr, (void*)I32Vector1Array__repr__},
    {Py_sq_length, (void*)I32Vector1Array__len__},
    {Py_sq_item, (void*)I32Vector1Array__sq_getitem__},
    {Py_mp_subscript, (void*)I32Vector1Array__mp_getitem__},
    {Py_tp_richcompare, (void*)I32Vector1Array__richcmp__},
    {Py_nb_bool, (void*)I32Vector1Array__bool__},
    {Py_bf_getbuffer, (void*)I32Vector1Array_getbufferproc},
    {Py_bf_releasebuffer, (void*)I32Vector1Array_releasebufferproc},
    {Py_tp_getset, (void*)I32Vector1Array_PyGetSetDef},
    {Py_tp_members, (void*)I32Vector1Array_PyMemberDef},
    {Py_tp_methods, (void*)I32Vector1Array_PyMethodDef},
    {0, 0},
};


static PyType_Spec I32Vector1Array_PyTypeSpec = {
    "emath.I32Vector1Array",
    sizeof(I32Vector1Array),
    0,
    Py_TPFLAGS_DEFAULT,
    I32Vector1Array_PyType_Slots
};


static PyTypeObject *
define_I32Vector1Array_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &I32Vector1Array_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "I32Vector1Array", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


static PyTypeObject *
get_I32Vector1_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->I32Vector1_PyTypeObject;
}


static PyTypeObject *
get_I32Vector1Array_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->I32Vector1Array_PyTypeObject;
}


static PyObject *
create_I32Vector1(const int32_t *value)
{
    auto cls = get_I32Vector1_type();
    auto result = (I32Vector1 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new I32Vector1Glm(*(I32Vector1Glm *)value);
    return (PyObject *)result;
}


static PyObject *
create_I32Vector1Array(size_t length, const int32_t *value)
{
    auto cls = get_I32Vector1Array_type();
    auto result = (I32Vector1Array *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->length = length;
    if (length > 0)
    {
        result->glm = new I32Vector1Glm[length];
        for (size_t i = 0; i < length; i++)
        {
            result->glm[i] = ((I32Vector1Glm *)value)[i];
        }
    }
    else
    {
        result->glm = 0;
    }
    return (PyObject *)result;
}


static const int32_t *
get_I32Vector1_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_I32Vector1_type())
    {
        PyErr_Format(PyExc_TypeError, "expected I32Vector1, got %R", self);
        return 0;
    }
    return (int32_t *)((I32Vector1 *)self)->glm;
}


static const int32_t *
get_I32Vector1Array_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_I32Vector1Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected I32Vector1Array, got %R",
            self
        );
        return 0;
    }
    return (int32_t *)((I32Vector1Array *)self)->glm;
}


static size_t
get_I32Vector1Array_length(const PyObject *self)
{
    if (Py_TYPE(self) != get_I32Vector1Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected I32Vector1Array, got %R",
            self
        );
        return 0;
    }
    return ((I32Vector1Array *)self)->length;
}

#endif