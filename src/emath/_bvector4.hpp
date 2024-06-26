
// generated from codegen/templates/_vector.hpp

#ifndef E_MATH_BVECTOR4_HPP
#define E_MATH_BVECTOR4_HPP

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
BVector4__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{

        bool c_0 = 0;

        bool c_1 = 0;

        bool c_2 = 0;

        bool c_3 = 0;


    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "BVector4 does accept any keyword arguments"
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
            bool arg_c = pyobject_to_c_bool(arg);
            auto error_occurred = PyErr_Occurred();
            if (error_occurred){ return 0; }

                c_0 = arg_c;

                c_1 = arg_c;

                c_2 = arg_c;

                c_3 = arg_c;

            break;
        }

            case 4:
            {

                {
                    auto arg = PyTuple_GET_ITEM(args, 0);
                    c_0 = pyobject_to_c_bool(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 1);
                    c_1 = pyobject_to_c_bool(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 2);
                    c_2 = pyobject_to_c_bool(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 3);
                    c_3 = pyobject_to_c_bool(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                break;
            }

        default:
        {
            PyErr_Format(
                PyExc_TypeError,
                "invalid number of arguments supplied to BVector4, expected "
                "0, 1 or 4 (got %zd)",
                arg_count
            );
            return 0;
        }
    }

    BVector4 *self = (BVector4*)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->glm = new BVector4Glm(

            c_0,

            c_1,

            c_2,

            c_3

    );

    return (PyObject *)self;
}


static void
BVector4__dealloc__(BVector4 *self)
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
BVector4__hash__(BVector4 *self)
{
    Py_ssize_t len = 4;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (BVector4Glm::length_type i = 0; i < len; i++)
    {
        Py_uhash_t lane = std::hash<bool>{}((*self->glm)[i]);
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
BVector4__repr__(BVector4 *self)
{
    PyObject *result = 0;

        PyObject *py_0 = 0;

        PyObject *py_1 = 0;

        PyObject *py_2 = 0;

        PyObject *py_3 = 0;



        py_0 = c_bool_to_pyobject((*self->glm)[0]);
        if (!py_0){ goto cleanup; }

        py_1 = c_bool_to_pyobject((*self->glm)[1]);
        if (!py_1){ goto cleanup; }

        py_2 = c_bool_to_pyobject((*self->glm)[2]);
        if (!py_2){ goto cleanup; }

        py_3 = c_bool_to_pyobject((*self->glm)[3]);
        if (!py_3){ goto cleanup; }

    result = PyUnicode_FromFormat(
        "BVector4("

            "%R, "

            "%R, "

            "%R, "

            "%R"

        ")",

            py_0,

            py_1,

            py_2,

            py_3

    );
cleanup:

        Py_XDECREF(py_0);

        Py_XDECREF(py_1);

        Py_XDECREF(py_2);

        Py_XDECREF(py_3);

    return result;
}


static Py_ssize_t
BVector4__len__(BVector4 *self)
{
    return 4;
}


static PyObject *
BVector4__getitem__(BVector4 *self, Py_ssize_t index)
{
    if (index < 0 || index > 3)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }
    auto c = (*self->glm)[(BVector4Glm::length_type)index];
    return c_bool_to_pyobject(c);
}


static PyObject *
BVector4__richcmp__(BVector4 *self, BVector4 *other, int op)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_LT:
        {
            for (BVector4Glm::length_type i = 0; i < 4; i++)
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
            for (BVector4Glm::length_type i = 0; i < 4; i++)
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
            for (BVector4Glm::length_type i = 0; i < 4; i++)
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
            for (BVector4Glm::length_type i = 0; i < 4; i++)
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
BVector4__add__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->BVector4_PyTypeObject;

    BVector4Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((BVector4 *)left)->glm) + (*((BVector4 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_bool(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((BVector4 *)left)->glm) + c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_bool(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left + (*((BVector4 *)right)->glm);
        }
    }

    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(

            vector[0],

            vector[1],

            vector[2],

            vector[3]

    );

    return (PyObject *)result;
}


static PyObject *
BVector4__sub__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->BVector4_PyTypeObject;

    BVector4Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((BVector4 *)left)->glm) - (*((BVector4 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_bool(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((BVector4 *)left)->glm) - c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_bool(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left - (*((BVector4 *)right)->glm);
        }
    }

    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(

            vector[0],

            vector[1],

            vector[2],

            vector[3]

    );

    return (PyObject *)result;
}


static PyObject *
BVector4__mul__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->BVector4_PyTypeObject;

    BVector4Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((BVector4 *)left)->glm) * (*((BVector4 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_bool(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((BVector4 *)left)->glm) * c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_bool(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left * (*((BVector4 *)right)->glm);
        }
    }

    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(

            vector[0],

            vector[1],

            vector[2],

            vector[3]

    );

    return (PyObject *)result;
}









    static PyObject *
    BVector4__neg__(BVector4 *self)
    {
        auto cls = Py_TYPE(self);

            BVector4Glm vector = (*self->glm);


        BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new BVector4Glm(

                vector[0],

                vector[1],

                vector[2],

                vector[3]

        );

        return (PyObject *)result;
    }



static PyObject *
BVector4__abs__(BVector4 *self)
{
    auto cls = Py_TYPE(self);
    BVector4Glm vector = glm::abs(*self->glm);

    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(

            vector[0],

            vector[1],

            vector[2],

            vector[3]

    );

    return (PyObject *)result;
}


static int
BVector4__bool__(BVector4 *self)
{

        if ((*self->glm)[0] == 0)
        {
            return 0;
        }

        if ((*self->glm)[1] == 0)
        {
            return 0;
        }

        if ((*self->glm)[2] == 0)
        {
            return 0;
        }

        if ((*self->glm)[3] == 0)
        {
            return 0;
        }

    return 1;
}


static int
BVector4_getbufferproc(BVector4 *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_TypeError, "BVector4 is read only");
        view->obj = 0;
        return -1;
    }
    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(bool) * 4;
    view->readonly = 1;
    view->itemsize = sizeof(bool);
    view->ndim = 1;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "?";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        static Py_ssize_t shape = 4;
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
    BVector4_Getter_0(BVector4 *self, void *)
    {
        auto c = (*self->glm)[0];
        return c_bool_to_pyobject(c);
    }

    static PyObject *
    BVector4_Getter_1(BVector4 *self, void *)
    {
        auto c = (*self->glm)[1];
        return c_bool_to_pyobject(c);
    }

    static PyObject *
    BVector4_Getter_2(BVector4 *self, void *)
    {
        auto c = (*self->glm)[2];
        return c_bool_to_pyobject(c);
    }

    static PyObject *
    BVector4_Getter_3(BVector4 *self, void *)
    {
        auto c = (*self->glm)[3];
        return c_bool_to_pyobject(c);
    }






static PyObject *
BVector4_pointer(BVector4 *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_bool_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyGetSetDef BVector4_PyGetSetDef[] = {
    {"x", (getter)BVector4_Getter_0, 0, 0, 0},
    {"r", (getter)BVector4_Getter_0, 0, 0, 0},
    {"s", (getter)BVector4_Getter_0, 0, 0, 0},
    {"u", (getter)BVector4_Getter_0, 0, 0, 0},

        {"y", (getter)BVector4_Getter_1, 0, 0, 0},
        {"g", (getter)BVector4_Getter_1, 0, 0, 0},
        {"t", (getter)BVector4_Getter_1, 0, 0, 0},
        {"v", (getter)BVector4_Getter_1, 0, 0, 0},


        {"z", (getter)BVector4_Getter_2, 0, 0, 0},
        {"b", (getter)BVector4_Getter_2, 0, 0, 0},
        {"p", (getter)BVector4_Getter_2, 0, 0, 0},


        {"w", (getter)BVector4_Getter_3, 0, 0, 0},
        {"a", (getter)BVector4_Getter_3, 0, 0, 0},
        {"q", (getter)BVector4_Getter_3, 0, 0, 0},


    {"pointer", (getter)BVector4_pointer, 0, 0, 0},
    {0, 0, 0, 0, 0}
};



    static PyObject *
    swizzle_2_BVector4(BVector4 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        BVector2Glm vec;
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


                    case 'z':
                    case 'b':
                    case 'p':
                        glm_index = 2;
                        break;


                    case 'w':
                    case 'a':
                    case 'q':
                        glm_index = 3;
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
        auto cls = module_state->BVector2_PyTypeObject;

        BVector2 *result = (BVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new BVector2Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_3_BVector4(BVector4 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        BVector3Glm vec;
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


                    case 'z':
                    case 'b':
                    case 'p':
                        glm_index = 2;
                        break;


                    case 'w':
                    case 'a':
                    case 'q':
                        glm_index = 3;
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
        auto cls = module_state->BVector3_PyTypeObject;

        BVector3 *result = (BVector3 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new BVector3Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_4_BVector4(BVector4 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        BVector4Glm vec;
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


                    case 'z':
                    case 'b':
                    case 'p':
                        glm_index = 2;
                        break;


                    case 'w':
                    case 'a':
                    case 'q':
                        glm_index = 3;
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
        auto cls = module_state->BVector4_PyTypeObject;

        BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new BVector4Glm(vec);

        return (PyObject *)result;
    }




static PyObject *
BVector4__getattr__(BVector4 *self, PyObject *py_attr)
{
    PyObject *result = PyObject_GenericGetAttr((PyObject *)self, py_attr);
    if (result != 0){ return result; }

    auto attr_length = PyUnicode_GET_LENGTH(py_attr);
    switch(attr_length)
    {
        case 2:
        {
            PyErr_Clear();
            return swizzle_2_BVector4(self, py_attr);
        }
        case 3:
        {
            PyErr_Clear();
            return swizzle_3_BVector4(self, py_attr);
        }
        case 4:
        {
            PyErr_Clear();
            return swizzle_4_BVector4(self, py_attr);
        }
    }
    return 0;
}


static PyMemberDef BVector4_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(BVector4, weakreflist), READONLY},
    {0}
};





static PyObject *
BVector4_min(BVector4 *self, PyObject *min)
{
    auto c_min = pyobject_to_c_bool(min);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::min(*self->glm, c_min);
    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(vector);
    return (PyObject *)result;
}


static PyObject *
BVector4_max(BVector4 *self, PyObject *max)
{
    auto c_max = pyobject_to_c_bool(max);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::max(*self->glm, c_max);
    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(vector);
    return (PyObject *)result;
}


static PyObject *
BVector4_clamp(BVector4 *self, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 2)
    {
        PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
        return 0;
    }
    auto c_min = pyobject_to_c_bool(args[0]);
    if (PyErr_Occurred()){ return 0; }
    auto c_max = pyobject_to_c_bool(args[1]);
    if (PyErr_Occurred()){ return 0; }

    auto cls = Py_TYPE(self);
    auto vector = glm::clamp(*self->glm, c_min, c_max);
    BVector4 *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(vector);
    return (PyObject *)result;
}


static PyObject *
BVector4_get_size(BVector4 *cls, void *)
{
    return PyLong_FromSize_t(sizeof(bool) * 4);
}


static PyObject *
BVector4_get_limits(BVector4 *cls, void *)
{
    auto c_min = std::numeric_limits<bool>::lowest();
    auto c_max = std::numeric_limits<bool>::max();
    auto py_min = c_bool_to_pyobject(c_min);
    if (!py_min){ return 0; }
    auto py_max = c_bool_to_pyobject(c_max);
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
BVector4_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(bool) * 4;
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length < expected_size)
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer of size %zd, got %zd", expected_size, view_length);
        return 0;
    }

    auto *result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->glm = new BVector4Glm();
    std::memcpy(result->glm, view.buf, expected_size);
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
BVector4_get_array_type(PyTypeObject *cls, void*)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto array_type = module_state->BVector4Array_PyTypeObject;
    Py_INCREF(array_type);
    return (PyObject *)array_type;
}


static PyMethodDef BVector4_PyMethodDef[] = {

    {"min", (PyCFunction)BVector4_min, METH_O, 0},
    {"max", (PyCFunction)BVector4_max, METH_O, 0},
    {"clamp", (PyCFunction)BVector4_clamp, METH_FASTCALL, 0},
    {"get_limits", (PyCFunction)BVector4_get_limits, METH_NOARGS | METH_STATIC, 0},
    {"get_size", (PyCFunction)BVector4_get_size, METH_NOARGS | METH_STATIC, 0},
    {"get_array_type", (PyCFunction)BVector4_get_array_type, METH_NOARGS | METH_STATIC, 0},
    {"from_buffer", (PyCFunction)BVector4_from_buffer, METH_O | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot BVector4_PyType_Slots [] = {
    {Py_tp_new, (void*)BVector4__new__},
    {Py_tp_dealloc, (void*)BVector4__dealloc__},
    {Py_tp_hash, (void*)BVector4__hash__},
    {Py_tp_repr, (void*)BVector4__repr__},
    {Py_sq_length, (void*)BVector4__len__},
    {Py_sq_item, (void*)BVector4__getitem__},
    {Py_tp_richcompare, (void*)BVector4__richcmp__},
    {Py_nb_add, (void*)BVector4__add__},
    {Py_nb_subtract, (void*)BVector4__sub__},
    {Py_nb_multiply, (void*)BVector4__mul__},



        {Py_nb_negative, (void*)BVector4__neg__},

    {Py_nb_absolute, (void*)BVector4__abs__},
    {Py_nb_bool, (void*)BVector4__bool__},
    {Py_bf_getbuffer, (void*)BVector4_getbufferproc},
    {Py_tp_getset, (void*)BVector4_PyGetSetDef},
    {Py_tp_getattro, (void*)BVector4__getattr__},
    {Py_tp_members, (void*)BVector4_PyMemberDef},
    {Py_tp_methods, (void*)BVector4_PyMethodDef},
    {0, 0},
};


static PyType_Spec BVector4_PyTypeSpec = {
    "emath.BVector4",
    sizeof(BVector4),
    0,
    Py_TPFLAGS_DEFAULT,
    BVector4_PyType_Slots
};


static PyTypeObject *
define_BVector4_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &BVector4_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "BVector4", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}




static PyObject *
BVector4Array__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->BVector4_PyTypeObject;

    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "BVector4 does accept any keyword arguments"
        );
        return 0;
    }

    auto arg_count = PyTuple_GET_SIZE(args);
    if (arg_count == 0)
    {
        auto self = (BVector4Array *)cls->tp_alloc(cls, 0);
        if (!self){ return 0; }
        self->length = 0;
        self->glm = 0;
        return (PyObject *)self;
    }

    auto *self = (BVector4Array *)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->length = arg_count;
    self->glm = new BVector4Glm[arg_count];

    for (int i = 0; i < arg_count; i++)
    {
        auto arg = PyTuple_GET_ITEM(args, i);
        if (Py_TYPE(arg) == element_cls)
        {
            self->glm[i] = *(((BVector4*)arg)->glm);
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
BVector4Array__dealloc__(BVector4Array *self)
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
BVector4Array__hash__(BVector4Array *self)
{
    Py_ssize_t len = self->length * 4;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (Py_ssize_t i = 0; i < (Py_ssize_t)self->length; i++)
    {
        for (BVector4Glm::length_type j = 0; j < 4; j++)
        {
            Py_uhash_t lane = std::hash<bool>{}(self->glm[i][j]);
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
BVector4Array__repr__(BVector4Array *self)
{
    return PyUnicode_FromFormat("BVector4Array[%zu]", self->length);
}


static Py_ssize_t
BVector4Array__len__(BVector4Array *self)
{
    return self->length;
}


static PyObject *
BVector4Array__sq_getitem__(BVector4Array *self, Py_ssize_t index)
{
    if (index < 0 || index > (Py_ssize_t)self->length - 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }

    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->BVector4_PyTypeObject;

    BVector4 *result = (BVector4 *)element_cls->tp_alloc(element_cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(self->glm[index]);

    return (PyObject *)result;
}


static PyObject *
BVector4Array__mp_getitem__(BVector4Array *self, PyObject *key)
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
        auto *result = (BVector4Array *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        if (length == 0)
        {
            result->length = 0;
            result->glm = 0;
        }
        else
        {
            result->length = length;
            result->glm = new BVector4Glm[length];
            for (BVector4Glm::length_type i = 0; i < length; i++)
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
        auto element_cls = module_state->BVector4_PyTypeObject;

        BVector4 *result = (BVector4 *)element_cls->tp_alloc(element_cls, 0);
        if (!result){ return 0; }
        result->glm = new BVector4Glm(self->glm[index]);

        return (PyObject *)result;
    }
    PyErr_Format(PyExc_TypeError, "expected int or slice");
    return 0;
}


static PyObject *
BVector4Array__richcmp__(
    BVector4Array *self,
    BVector4Array *other,
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
BVector4Array__bool__(BVector4Array *self)
{
    return self->length ? 1 : 0;
}


static int
BVector4Array_getbufferproc(BVector4Array *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_BufferError, "BVector4 is read only");
        view->obj = 0;
        return -1;
    }

        if ((!(flags & PyBUF_C_CONTIGUOUS)) && flags & PyBUF_F_CONTIGUOUS)
        {
            PyErr_SetString(PyExc_BufferError, "BVector4 cannot be made Fortran contiguous");
            view->obj = 0;
            return -1;
        }

    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(bool) * 4 * self->length;
    view->readonly = 1;
    view->itemsize = sizeof(bool);
    view->ndim = 2;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "?";
    }
    else
    {
        view->format = 0;
    }
    if (flags & PyBUF_ND)
    {
        view->shape = new Py_ssize_t[2] {
            (Py_ssize_t)self->length,
            4
        };
    }
    else
    {
        view->shape = 0;
    }
    if (flags & PyBUF_STRIDES)
    {
        static Py_ssize_t strides[] = {
            sizeof(bool) * 4,
            sizeof(bool)
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
BVector4Array_releasebufferproc(BVector4Array *self, Py_buffer *view)
{
    delete view->shape;
}


static PyMemberDef BVector4Array_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(BVector4Array, weakreflist), READONLY},
    {0}
};


static PyObject *
BVector4Array_pointer(BVector4Array *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_bool_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyObject *
BVector4Array_size(BVector4Array *self, void *)
{
    return PyLong_FromSize_t(sizeof(bool) * 4 * self->length);
}


static PyGetSetDef BVector4Array_PyGetSetDef[] = {
    {"pointer", (getter)BVector4Array_pointer, 0, 0, 0},
    {"size", (getter)BVector4Array_size, 0, 0, 0},
    {0, 0, 0, 0, 0}
};


static PyObject *
BVector4Array_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(bool);
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length % (sizeof(bool) * 4))
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer evenly divisible by %zd, got %zd", sizeof(bool), view_length);
        return 0;
    }
    auto array_length = view_length / (sizeof(bool) * 4);

    auto *result = (BVector4Array *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->length = array_length;
    if (array_length > 0)
    {
        result->glm = new BVector4Glm[array_length];
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
BVector4Array_get_component_type(PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 0)
    {
        PyErr_Format(PyExc_TypeError, "expected 0 arguments, got %zi", nargs);
        return 0;
    }
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto component_type = module_state->BVector4_PyTypeObject;
    Py_INCREF(component_type);
    return (PyObject *)component_type;
}


static PyMethodDef BVector4Array_PyMethodDef[] = {
    {"from_buffer", (PyCFunction)BVector4Array_from_buffer, METH_O | METH_CLASS, 0},
    {"get_component_type", (PyCFunction)BVector4Array_get_component_type, METH_FASTCALL | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot BVector4Array_PyType_Slots [] = {
    {Py_tp_new, (void*)BVector4Array__new__},
    {Py_tp_dealloc, (void*)BVector4Array__dealloc__},
    {Py_tp_hash, (void*)BVector4Array__hash__},
    {Py_tp_repr, (void*)BVector4Array__repr__},
    {Py_sq_length, (void*)BVector4Array__len__},
    {Py_sq_item, (void*)BVector4Array__sq_getitem__},
    {Py_mp_subscript, (void*)BVector4Array__mp_getitem__},
    {Py_tp_richcompare, (void*)BVector4Array__richcmp__},
    {Py_nb_bool, (void*)BVector4Array__bool__},
    {Py_bf_getbuffer, (void*)BVector4Array_getbufferproc},
    {Py_bf_releasebuffer, (void*)BVector4Array_releasebufferproc},
    {Py_tp_getset, (void*)BVector4Array_PyGetSetDef},
    {Py_tp_members, (void*)BVector4Array_PyMemberDef},
    {Py_tp_methods, (void*)BVector4Array_PyMethodDef},
    {0, 0},
};


static PyType_Spec BVector4Array_PyTypeSpec = {
    "emath.BVector4Array",
    sizeof(BVector4Array),
    0,
    Py_TPFLAGS_DEFAULT,
    BVector4Array_PyType_Slots
};


static PyTypeObject *
define_BVector4Array_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &BVector4Array_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "BVector4Array", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


static PyTypeObject *
get_BVector4_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->BVector4_PyTypeObject;
}


static PyTypeObject *
get_BVector4Array_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->BVector4Array_PyTypeObject;
}


static PyObject *
create_BVector4(const bool *value)
{
    auto cls = get_BVector4_type();
    auto result = (BVector4 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new BVector4Glm(*(BVector4Glm *)value);
    return (PyObject *)result;
}


static PyObject *
create_BVector4Array(size_t length, const bool *value)
{
    auto cls = get_BVector4Array_type();
    auto result = (BVector4Array *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->length = length;
    if (length > 0)
    {
        result->glm = new BVector4Glm[length];
        for (size_t i = 0; i < length; i++)
        {
            result->glm[i] = ((BVector4Glm *)value)[i];
        }
    }
    else
    {
        result->glm = 0;
    }
    return (PyObject *)result;
}


static const bool *
get_BVector4_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_BVector4_type())
    {
        PyErr_Format(PyExc_TypeError, "expected BVector4, got %R", self);
        return 0;
    }
    return (bool *)((BVector4 *)self)->glm;
}


static const bool *
get_BVector4Array_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_BVector4Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected BVector4Array, got %R",
            self
        );
        return 0;
    }
    return (bool *)((BVector4Array *)self)->glm;
}


static size_t
get_BVector4Array_length(const PyObject *self)
{
    if (Py_TYPE(self) != get_BVector4Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected BVector4Array, got %R",
            self
        );
        return 0;
    }
    return ((BVector4Array *)self)->length;
}

#endif