
// generated from codegen/templates/_vector.hpp

#ifndef E_MATH_U64VECTOR2_HPP
#define E_MATH_U64VECTOR2_HPP

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
U64Vector2__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{

        uint64_t c_0 = 0;

        uint64_t c_1 = 0;


    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "U64Vector2 does accept any keyword arguments"
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
            uint64_t arg_c = pyobject_to_c_uint64_t(arg);
            auto error_occurred = PyErr_Occurred();
            if (error_occurred){ return 0; }

                c_0 = arg_c;

                c_1 = arg_c;

            break;
        }

            case 2:
            {

                {
                    auto arg = PyTuple_GET_ITEM(args, 0);
                    c_0 = pyobject_to_c_uint64_t(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 1);
                    c_1 = pyobject_to_c_uint64_t(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                break;
            }

        default:
        {
            PyErr_Format(
                PyExc_TypeError,
                "invalid number of arguments supplied to U64Vector2, expected "
                "0, 1 or 2 (got %zd)",
                arg_count
            );
            return 0;
        }
    }

    U64Vector2 *self = (U64Vector2*)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->glm = new U64Vector2Glm(

            c_0,

            c_1

    );

    return (PyObject *)self;
}


static void
U64Vector2__dealloc__(U64Vector2 *self)
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
U64Vector2__hash__(U64Vector2 *self)
{
    Py_ssize_t len = 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (U64Vector2Glm::length_type i = 0; i < len; i++)
    {
        Py_uhash_t lane = std::hash<uint64_t>{}((*self->glm)[i]);
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
U64Vector2__repr__(U64Vector2 *self)
{
    PyObject *result = 0;

        PyObject *py_0 = 0;

        PyObject *py_1 = 0;



        py_0 = c_uint64_t_to_pyobject((*self->glm)[0]);
        if (!py_0){ goto cleanup; }

        py_1 = c_uint64_t_to_pyobject((*self->glm)[1]);
        if (!py_1){ goto cleanup; }

    result = PyUnicode_FromFormat(
        "U64Vector2("

            "%R, "

            "%R"

        ")",

            py_0,

            py_1

    );
cleanup:

        Py_XDECREF(py_0);

        Py_XDECREF(py_1);

    return result;
}


static Py_ssize_t
U64Vector2__len__(U64Vector2 *self)
{
    return 2;
}


static PyObject *
U64Vector2__getitem__(U64Vector2 *self, Py_ssize_t index)
{
    if (index < 0 || index > 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }
    auto c = (*self->glm)[(U64Vector2Glm::length_type)index];
    return c_uint64_t_to_pyobject(c);
}


static PyObject *
U64Vector2__richcmp__(U64Vector2 *self, U64Vector2 *other, int op)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_LT:
        {
            for (U64Vector2Glm::length_type i = 0; i < 2; i++)
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
            for (U64Vector2Glm::length_type i = 0; i < 2; i++)
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
            for (U64Vector2Glm::length_type i = 0; i < 2; i++)
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
            for (U64Vector2Glm::length_type i = 0; i < 2; i++)
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
U64Vector2__add__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->U64Vector2_PyTypeObject;

    U64Vector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((U64Vector2 *)left)->glm) + (*((U64Vector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_uint64_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((U64Vector2 *)left)->glm) + c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_uint64_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left + (*((U64Vector2 *)right)->glm);
        }
    }

    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
U64Vector2__sub__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->U64Vector2_PyTypeObject;

    U64Vector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((U64Vector2 *)left)->glm) - (*((U64Vector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_uint64_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((U64Vector2 *)left)->glm) - c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_uint64_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left - (*((U64Vector2 *)right)->glm);
        }
    }

    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
U64Vector2__mul__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->U64Vector2_PyTypeObject;

    U64Vector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((U64Vector2 *)left)->glm) * (*((U64Vector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_uint64_t(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((U64Vector2 *)left)->glm) * c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_uint64_t(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left * (*((U64Vector2 *)right)->glm);
        }
    }

    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}







    static PyObject *
    U64Vector2__truediv__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->U64Vector2_PyTypeObject;

        U64Vector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {

                if (

                        (*((U64Vector2 *)right)->glm)[0] == 0 ||

                        (*((U64Vector2 *)right)->glm)[1] == 0

                )
                {
                    PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                    return 0;
                }

            vector = (*((U64Vector2 *)left)->glm) / (*((U64Vector2 *)right)->glm);
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_uint64_t(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                    if (c_right == 0)
                    {
                        PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                        return 0;
                    }

                vector = (*((U64Vector2 *)left)->glm) / c_right;
            }
            else
            {
                auto c_left = pyobject_to_c_uint64_t(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                    if (

                            (*((U64Vector2 *)right)->glm)[0] == 0 ||

                            (*((U64Vector2 *)right)->glm)[1] == 0

                    )
                    {
                        PyErr_SetString(PyExc_ZeroDivisionError, "divide by zero");
                        return 0;
                    }

                vector = c_left / (*((U64Vector2 *)right)->glm);
            }
        }

        U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new U64Vector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }






static PyObject *
U64Vector2__abs__(U64Vector2 *self)
{
    auto cls = Py_TYPE(self);
    U64Vector2Glm vector = glm::abs(*self->glm);

    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static int
U64Vector2__bool__(U64Vector2 *self)
{

        if ((*self->glm)[0] == 0)
        {
            return 0;
        }

        if ((*self->glm)[1] == 0)
        {
            return 0;
        }

    return 1;
}


static int
U64Vector2_getbufferproc(U64Vector2 *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_TypeError, "U64Vector2 is read only");
        view->obj = 0;
        return -1;
    }
    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(uint64_t) * 2;
    view->readonly = 1;
    view->itemsize = sizeof(uint64_t);
    view->ndim = 1;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "=Q";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        static Py_ssize_t shape = 2;
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
    U64Vector2_Getter_0(U64Vector2 *self, void *)
    {
        auto c = (*self->glm)[0];
        return c_uint64_t_to_pyobject(c);
    }

    static PyObject *
    U64Vector2_Getter_1(U64Vector2 *self, void *)
    {
        auto c = (*self->glm)[1];
        return c_uint64_t_to_pyobject(c);
    }






static PyObject *
U64Vector2_pointer(U64Vector2 *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_uint64_t_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyGetSetDef U64Vector2_PyGetSetDef[] = {
    {"x", (getter)U64Vector2_Getter_0, 0, 0, 0},
    {"r", (getter)U64Vector2_Getter_0, 0, 0, 0},
    {"s", (getter)U64Vector2_Getter_0, 0, 0, 0},
    {"u", (getter)U64Vector2_Getter_0, 0, 0, 0},

        {"y", (getter)U64Vector2_Getter_1, 0, 0, 0},
        {"g", (getter)U64Vector2_Getter_1, 0, 0, 0},
        {"t", (getter)U64Vector2_Getter_1, 0, 0, 0},
        {"v", (getter)U64Vector2_Getter_1, 0, 0, 0},




    {"pointer", (getter)U64Vector2_pointer, 0, 0, 0},
    {0, 0, 0, 0, 0}
};



    static PyObject *
    swizzle_2_U64Vector2(U64Vector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        U64Vector2Glm vec;
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

                    case 'y':
                    case 'g':
                    case 't':
                    case 'v':
                        glm_index = 1;
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
        auto cls = module_state->U64Vector2_PyTypeObject;

        U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new U64Vector2Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_3_U64Vector2(U64Vector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        U64Vector3Glm vec;
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

                    case 'y':
                    case 'g':
                    case 't':
                    case 'v':
                        glm_index = 1;
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
        auto cls = module_state->U64Vector3_PyTypeObject;

        U64Vector3 *result = (U64Vector3 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new U64Vector3Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_4_U64Vector2(U64Vector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        U64Vector4Glm vec;
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

                    case 'y':
                    case 'g':
                    case 't':
                    case 'v':
                        glm_index = 1;
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
        auto cls = module_state->U64Vector4_PyTypeObject;

        U64Vector4 *result = (U64Vector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new U64Vector4Glm(vec);

        return (PyObject *)result;
    }




static PyObject *
U64Vector2__getattr__(U64Vector2 *self, PyObject *py_attr)
{
    PyObject *result = PyObject_GenericGetAttr((PyObject *)self, py_attr);
    if (result != 0){ return result; }

    auto attr_length = PyUnicode_GET_LENGTH(py_attr);
    switch(attr_length)
    {
        case 2:
        {
            PyErr_Clear();
            return swizzle_2_U64Vector2(self, py_attr);
        }
        case 3:
        {
            PyErr_Clear();
            return swizzle_3_U64Vector2(self, py_attr);
        }
        case 4:
        {
            PyErr_Clear();
            return swizzle_4_U64Vector2(self, py_attr);
        }
    }
    return 0;
}


static PyMemberDef U64Vector2_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(U64Vector2, weakreflist), READONLY},
    {0}
};





static PyObject *
U64Vector2_min(U64Vector2 *self, PyObject *min)
{
    auto c_min = pyobject_to_c_uint64_t(min);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::min(*self->glm, c_min);
    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
U64Vector2_max(U64Vector2 *self, PyObject *max)
{
    auto c_max = pyobject_to_c_uint64_t(max);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::max(*self->glm, c_max);
    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
U64Vector2_clamp(U64Vector2 *self, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 2)
    {
        PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
        return 0;
    }
    auto c_min = pyobject_to_c_uint64_t(args[0]);
    if (PyErr_Occurred()){ return 0; }
    auto c_max = pyobject_to_c_uint64_t(args[1]);
    if (PyErr_Occurred()){ return 0; }

    auto cls = Py_TYPE(self);
    auto vector = glm::clamp(*self->glm, c_min, c_max);
    U64Vector2 *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
U64Vector2_get_size(U64Vector2 *cls, void *)
{
    return PyLong_FromSize_t(sizeof(uint64_t) * 2);
}


static PyObject *
U64Vector2_get_limits(U64Vector2 *cls, void *)
{
    auto c_min = std::numeric_limits<uint64_t>::lowest();
    auto c_max = std::numeric_limits<uint64_t>::max();
    auto py_min = c_uint64_t_to_pyobject(c_min);
    if (!py_min){ return 0; }
    auto py_max = c_uint64_t_to_pyobject(c_max);
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
U64Vector2_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(uint64_t) * 2;
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length < expected_size)
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer of size %zd, got %zd", expected_size, view_length);
        return 0;
    }

    auto *result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->glm = new U64Vector2Glm();
    std::memcpy(result->glm, view.buf, expected_size);
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
U64Vector2_get_array_type(PyTypeObject *cls, void*)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto array_type = module_state->U64Vector2Array_PyTypeObject;
    Py_INCREF(array_type);
    return (PyObject *)array_type;
}


static PyMethodDef U64Vector2_PyMethodDef[] = {

    {"min", (PyCFunction)U64Vector2_min, METH_O, 0},
    {"max", (PyCFunction)U64Vector2_max, METH_O, 0},
    {"clamp", (PyCFunction)U64Vector2_clamp, METH_FASTCALL, 0},
    {"get_limits", (PyCFunction)U64Vector2_get_limits, METH_NOARGS | METH_STATIC, 0},
    {"get_size", (PyCFunction)U64Vector2_get_size, METH_NOARGS | METH_STATIC, 0},
    {"get_array_type", (PyCFunction)U64Vector2_get_array_type, METH_NOARGS | METH_STATIC, 0},
    {"from_buffer", (PyCFunction)U64Vector2_from_buffer, METH_O | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot U64Vector2_PyType_Slots [] = {
    {Py_tp_new, (void*)U64Vector2__new__},
    {Py_tp_dealloc, (void*)U64Vector2__dealloc__},
    {Py_tp_hash, (void*)U64Vector2__hash__},
    {Py_tp_repr, (void*)U64Vector2__repr__},
    {Py_sq_length, (void*)U64Vector2__len__},
    {Py_sq_item, (void*)U64Vector2__getitem__},
    {Py_tp_richcompare, (void*)U64Vector2__richcmp__},
    {Py_nb_add, (void*)U64Vector2__add__},
    {Py_nb_subtract, (void*)U64Vector2__sub__},
    {Py_nb_multiply, (void*)U64Vector2__mul__},


        {Py_nb_true_divide, (void*)U64Vector2__truediv__},


    {Py_nb_absolute, (void*)U64Vector2__abs__},
    {Py_nb_bool, (void*)U64Vector2__bool__},
    {Py_bf_getbuffer, (void*)U64Vector2_getbufferproc},
    {Py_tp_getset, (void*)U64Vector2_PyGetSetDef},
    {Py_tp_getattro, (void*)U64Vector2__getattr__},
    {Py_tp_members, (void*)U64Vector2_PyMemberDef},
    {Py_tp_methods, (void*)U64Vector2_PyMethodDef},
    {0, 0},
};


static PyType_Spec U64Vector2_PyTypeSpec = {
    "emath.U64Vector2",
    sizeof(U64Vector2),
    0,
    Py_TPFLAGS_DEFAULT,
    U64Vector2_PyType_Slots
};


static PyTypeObject *
define_U64Vector2_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &U64Vector2_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "U64Vector2", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}




static PyObject *
U64Vector2Array__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->U64Vector2_PyTypeObject;

    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "U64Vector2 does accept any keyword arguments"
        );
        return 0;
    }

    auto arg_count = PyTuple_GET_SIZE(args);
    if (arg_count == 0)
    {
        auto self = (U64Vector2Array *)cls->tp_alloc(cls, 0);
        if (!self){ return 0; }
        self->length = 0;
        self->glm = 0;
        return (PyObject *)self;
    }

    auto *self = (U64Vector2Array *)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->length = arg_count;
    self->glm = new U64Vector2Glm[arg_count];

    for (int i = 0; i < arg_count; i++)
    {
        auto arg = PyTuple_GET_ITEM(args, i);
        if (Py_TYPE(arg) == element_cls)
        {
            self->glm[i] = *(((U64Vector2*)arg)->glm);
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
U64Vector2Array__dealloc__(U64Vector2Array *self)
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
U64Vector2Array__hash__(U64Vector2Array *self)
{
    Py_ssize_t len = self->length * 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (Py_ssize_t i = 0; i < (Py_ssize_t)self->length; i++)
    {
        for (U64Vector2Glm::length_type j = 0; j < 2; j++)
        {
            Py_uhash_t lane = std::hash<uint64_t>{}(self->glm[i][j]);
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
U64Vector2Array__repr__(U64Vector2Array *self)
{
    return PyUnicode_FromFormat("U64Vector2Array[%zu]", self->length);
}


static Py_ssize_t
U64Vector2Array__len__(U64Vector2Array *self)
{
    return self->length;
}


static PyObject *
U64Vector2Array__sq_getitem__(U64Vector2Array *self, Py_ssize_t index)
{
    if (index < 0 || index > (Py_ssize_t)self->length - 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }

    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->U64Vector2_PyTypeObject;

    U64Vector2 *result = (U64Vector2 *)element_cls->tp_alloc(element_cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(self->glm[index]);

    return (PyObject *)result;
}


static PyObject *
U64Vector2Array__mp_getitem__(U64Vector2Array *self, PyObject *key)
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
        auto *result = (U64Vector2Array *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        if (length == 0)
        {
            result->length = 0;
            result->glm = 0;
        }
        else
        {
            result->length = length;
            result->glm = new U64Vector2Glm[length];
            for (U64Vector2Glm::length_type i = 0; i < length; i++)
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
        auto element_cls = module_state->U64Vector2_PyTypeObject;

        U64Vector2 *result = (U64Vector2 *)element_cls->tp_alloc(element_cls, 0);
        if (!result){ return 0; }
        result->glm = new U64Vector2Glm(self->glm[index]);

        return (PyObject *)result;
    }
    PyErr_Format(PyExc_TypeError, "expected int or slice");
    return 0;
}


static PyObject *
U64Vector2Array__richcmp__(
    U64Vector2Array *self,
    U64Vector2Array *other,
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
U64Vector2Array__bool__(U64Vector2Array *self)
{
    return self->length ? 1 : 0;
}


static int
U64Vector2Array_getbufferproc(U64Vector2Array *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_BufferError, "U64Vector2 is read only");
        view->obj = 0;
        return -1;
    }

        if ((!(flags & PyBUF_C_CONTIGUOUS)) && flags & PyBUF_F_CONTIGUOUS)
        {
            PyErr_SetString(PyExc_BufferError, "U64Vector2 cannot be made Fortran contiguous");
            view->obj = 0;
            return -1;
        }

    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(uint64_t) * 2 * self->length;
    view->readonly = 1;
    view->itemsize = sizeof(uint64_t);
    view->ndim = 2;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "=Q";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        view->shape = new Py_ssize_t[2] {
            (Py_ssize_t)self->length,
            2
        };
    }
    else
    {
        view->shape = 0;
    }
    if (flags & PyBUF_STRIDES)
    {
        static Py_ssize_t strides[] = {
            sizeof(uint64_t) * 2,
            sizeof(uint64_t)
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
U64Vector2Array_releasebufferproc(U64Vector2Array *self, Py_buffer *view)
{
    delete view->shape;
}


static PyMemberDef U64Vector2Array_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(U64Vector2Array, weakreflist), READONLY},
    {0}
};


static PyObject *
U64Vector2Array_pointer(U64Vector2Array *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_uint64_t_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyObject *
U64Vector2Array_size(U64Vector2Array *self, void *)
{
    return PyLong_FromSize_t(sizeof(uint64_t) * 2 * self->length);
}


static PyGetSetDef U64Vector2Array_PyGetSetDef[] = {
    {"pointer", (getter)U64Vector2Array_pointer, 0, 0, 0},
    {"size", (getter)U64Vector2Array_size, 0, 0, 0},
    {0, 0, 0, 0, 0}
};


static PyObject *
U64Vector2Array_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(uint64_t);
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length % (sizeof(uint64_t) * 2))
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer evenly divisible by %zd, got %zd", sizeof(uint64_t), view_length);
        return 0;
    }
    auto array_length = view_length / (sizeof(uint64_t) * 2);

    auto *result = (U64Vector2Array *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->length = array_length;
    if (array_length > 0)
    {
        result->glm = new U64Vector2Glm[array_length];
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
U64Vector2Array_get_component_type(PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 0)
    {
        PyErr_Format(PyExc_TypeError, "expected 0 arguments, got %zi", nargs);
        return 0;
    }
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto component_type = module_state->U64Vector2_PyTypeObject;
    Py_INCREF(component_type);
    return (PyObject *)component_type;
}


static PyMethodDef U64Vector2Array_PyMethodDef[] = {
    {"from_buffer", (PyCFunction)U64Vector2Array_from_buffer, METH_O | METH_CLASS, 0},
    {"get_component_type", (PyCFunction)U64Vector2Array_get_component_type, METH_FASTCALL | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot U64Vector2Array_PyType_Slots [] = {
    {Py_tp_new, (void*)U64Vector2Array__new__},
    {Py_tp_dealloc, (void*)U64Vector2Array__dealloc__},
    {Py_tp_hash, (void*)U64Vector2Array__hash__},
    {Py_tp_repr, (void*)U64Vector2Array__repr__},
    {Py_sq_length, (void*)U64Vector2Array__len__},
    {Py_sq_item, (void*)U64Vector2Array__sq_getitem__},
    {Py_mp_subscript, (void*)U64Vector2Array__mp_getitem__},
    {Py_tp_richcompare, (void*)U64Vector2Array__richcmp__},
    {Py_nb_bool, (void*)U64Vector2Array__bool__},
    {Py_bf_getbuffer, (void*)U64Vector2Array_getbufferproc},
    {Py_bf_releasebuffer, (void*)U64Vector2Array_releasebufferproc},
    {Py_tp_getset, (void*)U64Vector2Array_PyGetSetDef},
    {Py_tp_members, (void*)U64Vector2Array_PyMemberDef},
    {Py_tp_methods, (void*)U64Vector2Array_PyMethodDef},
    {0, 0},
};


static PyType_Spec U64Vector2Array_PyTypeSpec = {
    "emath.U64Vector2Array",
    sizeof(U64Vector2Array),
    0,
    Py_TPFLAGS_DEFAULT,
    U64Vector2Array_PyType_Slots
};


static PyTypeObject *
define_U64Vector2Array_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &U64Vector2Array_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "U64Vector2Array", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


static PyTypeObject *
get_U64Vector2_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->U64Vector2_PyTypeObject;
}


static PyTypeObject *
get_U64Vector2Array_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->U64Vector2Array_PyTypeObject;
}


static PyObject *
create_U64Vector2(const uint64_t *value)
{
    auto cls = get_U64Vector2_type();
    auto result = (U64Vector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new U64Vector2Glm(*(U64Vector2Glm *)value);
    return (PyObject *)result;
}


static PyObject *
create_U64Vector2Array(size_t length, const uint64_t *value)
{
    auto cls = get_U64Vector2Array_type();
    auto result = (U64Vector2Array *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->length = length;
    if (length > 0)
    {
        result->glm = new U64Vector2Glm[length];
        for (size_t i = 0; i < length; i++)
        {
            result->glm[i] = ((U64Vector2Glm *)value)[i];
        }
    }
    else
    {
        result->glm = 0;
    }
    return (PyObject *)result;
}


static const uint64_t *
get_U64Vector2_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_U64Vector2_type())
    {
        PyErr_Format(PyExc_TypeError, "expected U64Vector2, got %R", self);
        return 0;
    }
    return (uint64_t *)((U64Vector2 *)self)->glm;
}


static const uint64_t *
get_U64Vector2Array_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_U64Vector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected U64Vector2Array, got %R",
            self
        );
        return 0;
    }
    return (uint64_t *)((U64Vector2Array *)self)->glm;
}


static size_t
get_U64Vector2Array_length(const PyObject *self)
{
    if (Py_TYPE(self) != get_U64Vector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected U64Vector2Array, got %R",
            self
        );
        return 0;
    }
    return ((U64Vector2Array *)self)->length;
}

#endif