
// generated from codegen/templates/_vector.hpp

#ifndef E_MATH_FVECTOR2_HPP
#define E_MATH_FVECTOR2_HPP

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
FVector2__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{

        float c_0 = 0;

        float c_1 = 0;


    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "FVector2 does accept any keyword arguments"
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
            float arg_c = pyobject_to_c_float(arg);
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
                    c_0 = pyobject_to_c_float(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 1);
                    c_1 = pyobject_to_c_float(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                break;
            }

        default:
        {
            PyErr_Format(
                PyExc_TypeError,
                "invalid number of arguments supplied to FVector2, expected "
                "0, 1 or 2 (got %zd)",
                arg_count
            );
            return 0;
        }
    }

    FVector2 *self = (FVector2*)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->glm = new FVector2Glm(

            c_0,

            c_1

    );

    return (PyObject *)self;
}


static void
FVector2__dealloc__(FVector2 *self)
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
FVector2__hash__(FVector2 *self)
{
    Py_ssize_t len = 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (FVector2Glm::length_type i = 0; i < len; i++)
    {
        Py_uhash_t lane = std::hash<float>{}((*self->glm)[i]);
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
FVector2__repr__(FVector2 *self)
{
    PyObject *result = 0;

        PyObject *py_0 = 0;

        PyObject *py_1 = 0;



        py_0 = c_float_to_pyobject((*self->glm)[0]);
        if (!py_0){ goto cleanup; }

        py_1 = c_float_to_pyobject((*self->glm)[1]);
        if (!py_1){ goto cleanup; }

    result = PyUnicode_FromFormat(
        "FVector2("

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
FVector2__len__(FVector2 *self)
{
    return 2;
}


static PyObject *
FVector2__getitem__(FVector2 *self, Py_ssize_t index)
{
    if (index < 0 || index > 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }
    auto c = (*self->glm)[(FVector2Glm::length_type)index];
    return c_float_to_pyobject(c);
}


static PyObject *
FVector2__richcmp__(FVector2 *self, FVector2 *other, int op)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_LT:
        {
            for (FVector2Glm::length_type i = 0; i < 2; i++)
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
            for (FVector2Glm::length_type i = 0; i < 2; i++)
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
            for (FVector2Glm::length_type i = 0; i < 2; i++)
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
            for (FVector2Glm::length_type i = 0; i < 2; i++)
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
FVector2__add__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->FVector2_PyTypeObject;

    FVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((FVector2 *)left)->glm) + (*((FVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_float(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((FVector2 *)left)->glm) + c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_float(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left + (*((FVector2 *)right)->glm);
        }
    }

    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
FVector2__sub__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->FVector2_PyTypeObject;

    FVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((FVector2 *)left)->glm) - (*((FVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_float(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((FVector2 *)left)->glm) - c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_float(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left - (*((FVector2 *)right)->glm);
        }
    }

    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
FVector2__mul__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->FVector2_PyTypeObject;

    FVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((FVector2 *)left)->glm) * (*((FVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_float(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((FVector2 *)left)->glm) * c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_float(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left * (*((FVector2 *)right)->glm);
        }
    }

    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}



    static PyObject *
    FVector2__matmul__(FVector2 *left, FVector2 *right)
    {
        auto cls = Py_TYPE(left);
        if (Py_TYPE(left) != Py_TYPE(right)){ Py_RETURN_NOTIMPLEMENTED; }
        auto c_result = glm::dot(*left->glm, *right->glm);
        return c_float_to_pyobject(c_result);
    }


    static PyObject *
    FVector2__mod__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->FVector2_PyTypeObject;

        FVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {
            vector = glm::mod(
                *((FVector2 *)left)->glm,
                *((FVector2 *)right)->glm
            );
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_float(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::mod(*((FVector2 *)left)->glm, c_right);
            }
            else
            {
                auto c_left = pyobject_to_c_float(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::mod(FVector2Glm(c_left), *((FVector2 *)right)->glm);
            }
        }

        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }


    static PyObject *
    FVector2__pow__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->FVector2_PyTypeObject;

        FVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {
            vector = glm::pow(
                *((FVector2 *)left)->glm,
                *((FVector2 *)right)->glm
            );
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_float(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::pow(*((FVector2 *)left)->glm, FVector2Glm(c_right));
            }
            else
            {
                auto c_left = pyobject_to_c_float(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::pow(FVector2Glm(c_left), *((FVector2 *)right)->glm);
            }
        }

        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }





    static PyObject *
    FVector2__truediv__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->FVector2_PyTypeObject;

        FVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {

            vector = (*((FVector2 *)left)->glm) / (*((FVector2 *)right)->glm);
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_float(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                vector = (*((FVector2 *)left)->glm) / c_right;
            }
            else
            {
                auto c_left = pyobject_to_c_float(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                vector = c_left / (*((FVector2 *)right)->glm);
            }
        }

        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }




    static PyObject *
    FVector2__neg__(FVector2 *self)
    {
        auto cls = Py_TYPE(self);

            FVector2Glm vector = -(*self->glm);


        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }



static PyObject *
FVector2__abs__(FVector2 *self)
{
    auto cls = Py_TYPE(self);
    FVector2Glm vector = glm::abs(*self->glm);

    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static int
FVector2__bool__(FVector2 *self)
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
FVector2_getbufferproc(FVector2 *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_TypeError, "FVector2 is read only");
        view->obj = 0;
        return -1;
    }
    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(float) * 2;
    view->readonly = 1;
    view->itemsize = sizeof(float);
    view->ndim = 1;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "f";
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
    FVector2_Getter_0(FVector2 *self, void *)
    {
        auto c = (*self->glm)[0];
        return c_float_to_pyobject(c);
    }

    static PyObject *
    FVector2_Getter_1(FVector2 *self, void *)
    {
        auto c = (*self->glm)[1];
        return c_float_to_pyobject(c);
    }




    static PyObject *
    FVector2_magnitude(FVector2 *self, void *)
    {
        auto magnitude = glm::length(*self->glm);
        return c_float_to_pyobject(magnitude);
    }



static PyObject *
FVector2_pointer(FVector2 *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_float_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyGetSetDef FVector2_PyGetSetDef[] = {
    {"x", (getter)FVector2_Getter_0, 0, 0, 0},
    {"r", (getter)FVector2_Getter_0, 0, 0, 0},
    {"s", (getter)FVector2_Getter_0, 0, 0, 0},
    {"u", (getter)FVector2_Getter_0, 0, 0, 0},

        {"y", (getter)FVector2_Getter_1, 0, 0, 0},
        {"g", (getter)FVector2_Getter_1, 0, 0, 0},
        {"t", (getter)FVector2_Getter_1, 0, 0, 0},
        {"v", (getter)FVector2_Getter_1, 0, 0, 0},




        {"magnitude", (getter)FVector2_magnitude, 0, 0, 0},

    {"pointer", (getter)FVector2_pointer, 0, 0, 0},
    {0, 0, 0, 0, 0}
};



    static PyObject *
    swizzle_2_FVector2(FVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        FVector2Glm vec;
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
        auto cls = module_state->FVector2_PyTypeObject;

        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_3_FVector2(FVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        FVector3Glm vec;
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
        auto cls = module_state->FVector3_PyTypeObject;

        FVector3 *result = (FVector3 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector3Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_4_FVector2(FVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        FVector4Glm vec;
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
        auto cls = module_state->FVector4_PyTypeObject;

        FVector4 *result = (FVector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector4Glm(vec);

        return (PyObject *)result;
    }




static PyObject *
FVector2__getattr__(FVector2 *self, PyObject *py_attr)
{
    PyObject *result = PyObject_GenericGetAttr((PyObject *)self, py_attr);
    if (result != 0){ return result; }

    auto attr_length = PyUnicode_GET_LENGTH(py_attr);
    switch(attr_length)
    {
        case 2:
        {
            PyErr_Clear();
            return swizzle_2_FVector2(self, py_attr);
        }
        case 3:
        {
            PyErr_Clear();
            return swizzle_3_FVector2(self, py_attr);
        }
        case 4:
        {
            PyErr_Clear();
            return swizzle_4_FVector2(self, py_attr);
        }
    }
    return 0;
}


static PyMemberDef FVector2_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(FVector2, weakreflist), READONLY},
    {0}
};






    static PyObject *
    FVector2_lerp(FVector2 *self, PyObject *const *args, Py_ssize_t nargs)
    {
        if (nargs != 2)
        {
            PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
            return 0;
        }

        auto cls = Py_TYPE(self);
        if (Py_TYPE(args[0]) != cls)
        {
            PyErr_Format(PyExc_TypeError, "%R is not FVector2", args[0]);
            return 0;
        }
        auto other = (FVector2 *)args[0];

        auto c_x = pyobject_to_c_float(args[1]);
        if (PyErr_Occurred()){ return 0; }


            auto vector = glm::lerp(*self->glm, *other->glm, c_x);

        auto result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(vector);
        return (PyObject *)result;
    }


    static FVector2 *
    FVector2_normalize(FVector2 *self, void*)
    {
        auto cls = Py_TYPE(self);
        auto vector = glm::normalize(*self->glm);
        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(

                vector[0],

                vector[1]

        );
        return result;
    }

    static PyObject *
    FVector2_distance(FVector2 *self, FVector2 *other)
    {
        auto cls = Py_TYPE(self);
        if (Py_TYPE(other) != cls)
        {
            PyErr_Format(PyExc_TypeError, "%R is not FVector2", other);
            return 0;
        }
        auto result = glm::distance(*self->glm, *other->glm);
        return c_float_to_pyobject(result);
    }




static PyObject *
FVector2_min(FVector2 *self, PyObject *min)
{
    auto c_min = pyobject_to_c_float(min);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::min(*self->glm, c_min);
    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
FVector2_max(FVector2 *self, PyObject *max)
{
    auto c_max = pyobject_to_c_float(max);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::max(*self->glm, c_max);
    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
FVector2_clamp(FVector2 *self, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 2)
    {
        PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
        return 0;
    }
    auto c_min = pyobject_to_c_float(args[0]);
    if (PyErr_Occurred()){ return 0; }
    auto c_max = pyobject_to_c_float(args[1]);
    if (PyErr_Occurred()){ return 0; }

    auto cls = Py_TYPE(self);
    auto vector = glm::clamp(*self->glm, c_min, c_max);
    FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
FVector2_get_size(FVector2 *cls, void *)
{
    return PyLong_FromSize_t(sizeof(float) * 2);
}


static PyObject *
FVector2_get_limits(FVector2 *cls, void *)
{
    auto c_min = std::numeric_limits<float>::lowest();
    auto c_max = std::numeric_limits<float>::max();
    auto py_min = c_float_to_pyobject(c_min);
    if (!py_min){ return 0; }
    auto py_max = c_float_to_pyobject(c_max);
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
FVector2_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(float) * 2;
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length < expected_size)
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer of size %zd, got %zd", expected_size, view_length);
        return 0;
    }

    auto *result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->glm = new FVector2Glm();
    std::memcpy(result->glm, view.buf, expected_size);
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
FVector2_get_array_type(PyTypeObject *cls, void*)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto array_type = module_state->FVector2Array_PyTypeObject;
    Py_INCREF(array_type);
    return (PyObject *)array_type;
}


static PyMethodDef FVector2_PyMethodDef[] = {


        {"lerp", (PyCFunction)FVector2_lerp, METH_FASTCALL, 0},
        {"normalize", (PyCFunction)FVector2_normalize, METH_NOARGS, 0},
        {"distance", (PyCFunction)FVector2_distance, METH_O, 0},

    {"min", (PyCFunction)FVector2_min, METH_O, 0},
    {"max", (PyCFunction)FVector2_max, METH_O, 0},
    {"clamp", (PyCFunction)FVector2_clamp, METH_FASTCALL, 0},
    {"get_limits", (PyCFunction)FVector2_get_limits, METH_NOARGS | METH_STATIC, 0},
    {"get_size", (PyCFunction)FVector2_get_size, METH_NOARGS | METH_STATIC, 0},
    {"get_array_type", (PyCFunction)FVector2_get_array_type, METH_NOARGS | METH_STATIC, 0},
    {"from_buffer", (PyCFunction)FVector2_from_buffer, METH_O | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot FVector2_PyType_Slots [] = {
    {Py_tp_new, (void*)FVector2__new__},
    {Py_tp_dealloc, (void*)FVector2__dealloc__},
    {Py_tp_hash, (void*)FVector2__hash__},
    {Py_tp_repr, (void*)FVector2__repr__},
    {Py_sq_length, (void*)FVector2__len__},
    {Py_sq_item, (void*)FVector2__getitem__},
    {Py_tp_richcompare, (void*)FVector2__richcmp__},
    {Py_nb_add, (void*)FVector2__add__},
    {Py_nb_subtract, (void*)FVector2__sub__},
    {Py_nb_multiply, (void*)FVector2__mul__},

        {Py_nb_matrix_multiply, (void*)FVector2__matmul__},
        {Py_nb_remainder, (void*)FVector2__mod__},
        {Py_nb_power, (void*)FVector2__pow__},


        {Py_nb_true_divide, (void*)FVector2__truediv__},


        {Py_nb_negative, (void*)FVector2__neg__},

    {Py_nb_absolute, (void*)FVector2__abs__},
    {Py_nb_bool, (void*)FVector2__bool__},
    {Py_bf_getbuffer, (void*)FVector2_getbufferproc},
    {Py_tp_getset, (void*)FVector2_PyGetSetDef},
    {Py_tp_getattro, (void*)FVector2__getattr__},
    {Py_tp_members, (void*)FVector2_PyMemberDef},
    {Py_tp_methods, (void*)FVector2_PyMethodDef},
    {0, 0},
};


static PyType_Spec FVector2_PyTypeSpec = {
    "emath.FVector2",
    sizeof(FVector2),
    0,
    Py_TPFLAGS_DEFAULT,
    FVector2_PyType_Slots
};


static PyTypeObject *
define_FVector2_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &FVector2_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "FVector2", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


    static FVector2 *
    create_FVector2_from_glm(const FVector2Glm& glm)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->FVector2_PyTypeObject;

        FVector2 *result = (FVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(glm);

        return result;
    }



static PyObject *
FVector2Array__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->FVector2_PyTypeObject;

    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "FVector2 does accept any keyword arguments"
        );
        return 0;
    }

    auto arg_count = PyTuple_GET_SIZE(args);
    if (arg_count == 0)
    {
        auto self = (FVector2Array *)cls->tp_alloc(cls, 0);
        if (!self){ return 0; }
        self->length = 0;
        self->glm = 0;
        return (PyObject *)self;
    }

    auto *self = (FVector2Array *)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->length = arg_count;
    self->glm = new FVector2Glm[arg_count];

    for (int i = 0; i < arg_count; i++)
    {
        auto arg = PyTuple_GET_ITEM(args, i);
        if (Py_TYPE(arg) == element_cls)
        {
            self->glm[i] = *(((FVector2*)arg)->glm);
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
FVector2Array__dealloc__(FVector2Array *self)
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
FVector2Array__hash__(FVector2Array *self)
{
    Py_ssize_t len = self->length * 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (Py_ssize_t i = 0; i < (Py_ssize_t)self->length; i++)
    {
        for (FVector2Glm::length_type j = 0; j < 2; j++)
        {
            Py_uhash_t lane = std::hash<float>{}(self->glm[i][j]);
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
FVector2Array__repr__(FVector2Array *self)
{
    return PyUnicode_FromFormat("FVector2Array[%zu]", self->length);
}


static Py_ssize_t
FVector2Array__len__(FVector2Array *self)
{
    return self->length;
}


static PyObject *
FVector2Array__sq_getitem__(FVector2Array *self, Py_ssize_t index)
{
    if (index < 0 || index > (Py_ssize_t)self->length - 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }

    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->FVector2_PyTypeObject;

    FVector2 *result = (FVector2 *)element_cls->tp_alloc(element_cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(self->glm[index]);

    return (PyObject *)result;
}


static PyObject *
FVector2Array__mp_getitem__(FVector2Array *self, PyObject *key)
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
        auto *result = (FVector2Array *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        if (length == 0)
        {
            result->length = 0;
            result->glm = 0;
        }
        else
        {
            result->length = length;
            result->glm = new FVector2Glm[length];
            for (FVector2Glm::length_type i = 0; i < length; i++)
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
        auto element_cls = module_state->FVector2_PyTypeObject;

        FVector2 *result = (FVector2 *)element_cls->tp_alloc(element_cls, 0);
        if (!result){ return 0; }
        result->glm = new FVector2Glm(self->glm[index]);

        return (PyObject *)result;
    }
    PyErr_Format(PyExc_TypeError, "expected int or slice");
    return 0;
}


static PyObject *
FVector2Array__richcmp__(
    FVector2Array *self,
    FVector2Array *other,
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
FVector2Array__bool__(FVector2Array *self)
{
    return self->length ? 1 : 0;
}


static int
FVector2Array_getbufferproc(FVector2Array *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_BufferError, "FVector2 is read only");
        view->obj = 0;
        return -1;
    }

        if ((!(flags & PyBUF_C_CONTIGUOUS)) && flags & PyBUF_F_CONTIGUOUS)
        {
            PyErr_SetString(PyExc_BufferError, "FVector2 cannot be made Fortran contiguous");
            view->obj = 0;
            return -1;
        }

    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(float) * 2 * self->length;
    view->readonly = 1;
    view->itemsize = sizeof(float);
    view->ndim = 2;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "f";
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
            sizeof(float) * 2,
            sizeof(float)
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
FVector2Array_releasebufferproc(FVector2Array *self, Py_buffer *view)
{
    delete view->shape;
}


static PyMemberDef FVector2Array_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(FVector2Array, weakreflist), READONLY},
    {0}
};


static PyObject *
FVector2Array_pointer(FVector2Array *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_float_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyObject *
FVector2Array_size(FVector2Array *self, void *)
{
    return PyLong_FromSize_t(sizeof(float) * 2 * self->length);
}


static PyGetSetDef FVector2Array_PyGetSetDef[] = {
    {"pointer", (getter)FVector2Array_pointer, 0, 0, 0},
    {"size", (getter)FVector2Array_size, 0, 0, 0},
    {0, 0, 0, 0, 0}
};


static PyObject *
FVector2Array_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(float);
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length % (sizeof(float) * 2))
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer evenly divisible by %zd, got %zd", sizeof(float), view_length);
        return 0;
    }
    auto array_length = view_length / (sizeof(float) * 2);

    auto *result = (FVector2Array *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->length = array_length;
    if (array_length > 0)
    {
        result->glm = new FVector2Glm[array_length];
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
FVector2Array_get_component_type(PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 0)
    {
        PyErr_Format(PyExc_TypeError, "expected 0 arguments, got %zi", nargs);
        return 0;
    }
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto component_type = module_state->FVector2_PyTypeObject;
    Py_INCREF(component_type);
    return (PyObject *)component_type;
}


static PyMethodDef FVector2Array_PyMethodDef[] = {
    {"from_buffer", (PyCFunction)FVector2Array_from_buffer, METH_O | METH_CLASS, 0},
    {"get_component_type", (PyCFunction)FVector2Array_get_component_type, METH_FASTCALL | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot FVector2Array_PyType_Slots [] = {
    {Py_tp_new, (void*)FVector2Array__new__},
    {Py_tp_dealloc, (void*)FVector2Array__dealloc__},
    {Py_tp_hash, (void*)FVector2Array__hash__},
    {Py_tp_repr, (void*)FVector2Array__repr__},
    {Py_sq_length, (void*)FVector2Array__len__},
    {Py_sq_item, (void*)FVector2Array__sq_getitem__},
    {Py_mp_subscript, (void*)FVector2Array__mp_getitem__},
    {Py_tp_richcompare, (void*)FVector2Array__richcmp__},
    {Py_nb_bool, (void*)FVector2Array__bool__},
    {Py_bf_getbuffer, (void*)FVector2Array_getbufferproc},
    {Py_bf_releasebuffer, (void*)FVector2Array_releasebufferproc},
    {Py_tp_getset, (void*)FVector2Array_PyGetSetDef},
    {Py_tp_members, (void*)FVector2Array_PyMemberDef},
    {Py_tp_methods, (void*)FVector2Array_PyMethodDef},
    {0, 0},
};


static PyType_Spec FVector2Array_PyTypeSpec = {
    "emath.FVector2Array",
    sizeof(FVector2Array),
    0,
    Py_TPFLAGS_DEFAULT,
    FVector2Array_PyType_Slots
};


static PyTypeObject *
define_FVector2Array_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &FVector2Array_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "FVector2Array", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


static PyTypeObject *
get_FVector2_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->FVector2_PyTypeObject;
}


static PyTypeObject *
get_FVector2Array_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->FVector2Array_PyTypeObject;
}


static PyObject *
create_FVector2(const float *value)
{
    auto cls = get_FVector2_type();
    auto result = (FVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new FVector2Glm(*(FVector2Glm *)value);
    return (PyObject *)result;
}


static PyObject *
create_FVector2Array(size_t length, const float *value)
{
    auto cls = get_FVector2Array_type();
    auto result = (FVector2Array *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->length = length;
    if (length > 0)
    {
        result->glm = new FVector2Glm[length];
        for (size_t i = 0; i < length; i++)
        {
            result->glm[i] = ((FVector2Glm *)value)[i];
        }
    }
    else
    {
        result->glm = 0;
    }
    return (PyObject *)result;
}


static const float *
get_FVector2_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_FVector2_type())
    {
        PyErr_Format(PyExc_TypeError, "expected FVector2, got %R", self);
        return 0;
    }
    return (float *)((FVector2 *)self)->glm;
}


static const float *
get_FVector2Array_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_FVector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected FVector2Array, got %R",
            self
        );
        return 0;
    }
    return (float *)((FVector2Array *)self)->glm;
}


static size_t
get_FVector2Array_length(const PyObject *self)
{
    if (Py_TYPE(self) != get_FVector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected FVector2Array, got %R",
            self
        );
        return 0;
    }
    return ((FVector2Array *)self)->length;
}

#endif