
// generated from codegen/templates/_vector.hpp

#ifndef E_MATH_DVECTOR2_HPP
#define E_MATH_DVECTOR2_HPP

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
DVector2__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{

        double c_0 = 0;

        double c_1 = 0;


    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "DVector2 does accept any keyword arguments"
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
            double arg_c = pyobject_to_c_double(arg);
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
                    c_0 = pyobject_to_c_double(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                {
                    auto arg = PyTuple_GET_ITEM(args, 1);
                    c_1 = pyobject_to_c_double(arg);
                    auto error_occurred = PyErr_Occurred();
                    if (error_occurred){ return 0; }
                }

                break;
            }

        default:
        {
            PyErr_Format(
                PyExc_TypeError,
                "invalid number of arguments supplied to DVector2, expected "
                "0, 1 or 2 (got %zd)",
                arg_count
            );
            return 0;
        }
    }

    DVector2 *self = (DVector2*)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->glm = new DVector2Glm(

            c_0,

            c_1

    );

    return (PyObject *)self;
}


static void
DVector2__dealloc__(DVector2 *self)
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
DVector2__hash__(DVector2 *self)
{
    Py_ssize_t len = 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (DVector2Glm::length_type i = 0; i < len; i++)
    {
        Py_uhash_t lane = std::hash<double>{}((*self->glm)[i]);
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
DVector2__repr__(DVector2 *self)
{
    PyObject *result = 0;

        PyObject *py_0 = 0;

        PyObject *py_1 = 0;



        py_0 = c_double_to_pyobject((*self->glm)[0]);
        if (!py_0){ goto cleanup; }

        py_1 = c_double_to_pyobject((*self->glm)[1]);
        if (!py_1){ goto cleanup; }

    result = PyUnicode_FromFormat(
        "DVector2("

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
DVector2__len__(DVector2 *self)
{
    return 2;
}


static PyObject *
DVector2__getitem__(DVector2 *self, Py_ssize_t index)
{
    if (index < 0 || index > 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }
    auto c = (*self->glm)[(DVector2Glm::length_type)index];
    return c_double_to_pyobject(c);
}


static PyObject *
DVector2__richcmp__(DVector2 *self, DVector2 *other, int op)
{
    if (Py_TYPE(self) != Py_TYPE(other))
    {
        Py_RETURN_NOTIMPLEMENTED;
    }

    switch(op)
    {
        case Py_LT:
        {
            for (DVector2Glm::length_type i = 0; i < 2; i++)
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
            for (DVector2Glm::length_type i = 0; i < 2; i++)
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
            for (DVector2Glm::length_type i = 0; i < 2; i++)
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
            for (DVector2Glm::length_type i = 0; i < 2; i++)
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
DVector2__add__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->DVector2_PyTypeObject;

    DVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((DVector2 *)left)->glm) + (*((DVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_double(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((DVector2 *)left)->glm) + c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_double(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left + (*((DVector2 *)right)->glm);
        }
    }

    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
DVector2__sub__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->DVector2_PyTypeObject;

    DVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((DVector2 *)left)->glm) - (*((DVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_double(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((DVector2 *)left)->glm) - c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_double(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left - (*((DVector2 *)right)->glm);
        }
    }

    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static PyObject *
DVector2__mul__(PyObject *left, PyObject *right)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto cls = module_state->DVector2_PyTypeObject;

    DVector2Glm vector;
    if (Py_TYPE(left) == Py_TYPE(right))
    {
        vector = (*((DVector2 *)left)->glm) * (*((DVector2 *)right)->glm);
    }
    else
    {
        if (Py_TYPE(left) == cls)
        {
            auto c_right = pyobject_to_c_double(right);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = (*((DVector2 *)left)->glm) * c_right;
        }
        else
        {
            auto c_left = pyobject_to_c_double(left);
            if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
            vector = c_left * (*((DVector2 *)right)->glm);
        }
    }

    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}



    static PyObject *
    DVector2__matmul__(DVector2 *left, DVector2 *right)
    {
        auto cls = Py_TYPE(left);
        if (Py_TYPE(left) != Py_TYPE(right)){ Py_RETURN_NOTIMPLEMENTED; }
        auto c_result = glm::dot(*left->glm, *right->glm);
        return c_double_to_pyobject(c_result);
    }


    static PyObject *
    DVector2__mod__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->DVector2_PyTypeObject;

        DVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {
            vector = glm::mod(
                *((DVector2 *)left)->glm,
                *((DVector2 *)right)->glm
            );
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_double(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::mod(*((DVector2 *)left)->glm, c_right);
            }
            else
            {
                auto c_left = pyobject_to_c_double(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::mod(DVector2Glm(c_left), *((DVector2 *)right)->glm);
            }
        }

        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }


    static PyObject *
    DVector2__pow__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->DVector2_PyTypeObject;

        DVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {
            vector = glm::pow(
                *((DVector2 *)left)->glm,
                *((DVector2 *)right)->glm
            );
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_double(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::pow(*((DVector2 *)left)->glm, DVector2Glm(c_right));
            }
            else
            {
                auto c_left = pyobject_to_c_double(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }
                vector = glm::pow(DVector2Glm(c_left), *((DVector2 *)right)->glm);
            }
        }

        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }





    static PyObject *
    DVector2__truediv__(PyObject *left, PyObject *right)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->DVector2_PyTypeObject;

        DVector2Glm vector;
        if (Py_TYPE(left) == Py_TYPE(right))
        {

            vector = (*((DVector2 *)left)->glm) / (*((DVector2 *)right)->glm);
        }
        else
        {
            if (Py_TYPE(left) == cls)
            {
                auto c_right = pyobject_to_c_double(right);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                vector = (*((DVector2 *)left)->glm) / c_right;
            }
            else
            {
                auto c_left = pyobject_to_c_double(left);
                if (PyErr_Occurred()){ PyErr_Clear(); Py_RETURN_NOTIMPLEMENTED; }

                vector = c_left / (*((DVector2 *)right)->glm);
            }
        }

        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }




    static PyObject *
    DVector2__neg__(DVector2 *self)
    {
        auto cls = Py_TYPE(self);

            DVector2Glm vector = -(*self->glm);


        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(

                vector[0],

                vector[1]

        );

        return (PyObject *)result;
    }



static PyObject *
DVector2__abs__(DVector2 *self)
{
    auto cls = Py_TYPE(self);
    DVector2Glm vector = glm::abs(*self->glm);

    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(

            vector[0],

            vector[1]

    );

    return (PyObject *)result;
}


static int
DVector2__bool__(DVector2 *self)
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
DVector2_getbufferproc(DVector2 *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_TypeError, "DVector2 is read only");
        view->obj = 0;
        return -1;
    }
    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(double) * 2;
    view->readonly = 1;
    view->itemsize = sizeof(double);
    view->ndim = 1;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "d";
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
    DVector2_Getter_0(DVector2 *self, void *)
    {
        auto c = (*self->glm)[0];
        return c_double_to_pyobject(c);
    }

    static PyObject *
    DVector2_Getter_1(DVector2 *self, void *)
    {
        auto c = (*self->glm)[1];
        return c_double_to_pyobject(c);
    }




    static PyObject *
    DVector2_magnitude(DVector2 *self, void *)
    {
        auto magnitude = glm::length(*self->glm);
        return c_double_to_pyobject(magnitude);
    }



static PyObject *
DVector2_pointer(DVector2 *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_double_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyGetSetDef DVector2_PyGetSetDef[] = {
    {"x", (getter)DVector2_Getter_0, 0, 0, 0},
    {"r", (getter)DVector2_Getter_0, 0, 0, 0},
    {"s", (getter)DVector2_Getter_0, 0, 0, 0},
    {"u", (getter)DVector2_Getter_0, 0, 0, 0},

        {"y", (getter)DVector2_Getter_1, 0, 0, 0},
        {"g", (getter)DVector2_Getter_1, 0, 0, 0},
        {"t", (getter)DVector2_Getter_1, 0, 0, 0},
        {"v", (getter)DVector2_Getter_1, 0, 0, 0},




        {"magnitude", (getter)DVector2_magnitude, 0, 0, 0},

    {"pointer", (getter)DVector2_pointer, 0, 0, 0},
    {0, 0, 0, 0, 0}
};



    static PyObject *
    swizzle_2_DVector2(DVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        DVector2Glm vec;
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
        auto cls = module_state->DVector2_PyTypeObject;

        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_3_DVector2(DVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        DVector3Glm vec;
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
        auto cls = module_state->DVector3_PyTypeObject;

        DVector3 *result = (DVector3 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector3Glm(vec);

        return (PyObject *)result;
    }



    static PyObject *
    swizzle_4_DVector2(DVector2 *self, PyObject *py_attr)
    {
        const char *attr = PyUnicode_AsUTF8(py_attr);
        if (!attr){ return 0; }

        DVector4Glm vec;
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
        auto cls = module_state->DVector4_PyTypeObject;

        DVector4 *result = (DVector4 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector4Glm(vec);

        return (PyObject *)result;
    }




static PyObject *
DVector2__getattr__(DVector2 *self, PyObject *py_attr)
{
    PyObject *result = PyObject_GenericGetAttr((PyObject *)self, py_attr);
    if (result != 0){ return result; }

    auto attr_length = PyUnicode_GET_LENGTH(py_attr);
    switch(attr_length)
    {
        case 2:
        {
            PyErr_Clear();
            return swizzle_2_DVector2(self, py_attr);
        }
        case 3:
        {
            PyErr_Clear();
            return swizzle_3_DVector2(self, py_attr);
        }
        case 4:
        {
            PyErr_Clear();
            return swizzle_4_DVector2(self, py_attr);
        }
    }
    return 0;
}


static PyMemberDef DVector2_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(DVector2, weakreflist), READONLY},
    {0}
};






    static PyObject *
    DVector2_lerp(DVector2 *self, PyObject *const *args, Py_ssize_t nargs)
    {
        if (nargs != 2)
        {
            PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
            return 0;
        }

        auto cls = Py_TYPE(self);
        if (Py_TYPE(args[0]) != cls)
        {
            PyErr_Format(PyExc_TypeError, "%R is not DVector2", args[0]);
            return 0;
        }
        auto other = (DVector2 *)args[0];

        auto c_x = pyobject_to_c_double(args[1]);
        if (PyErr_Occurred()){ return 0; }


            auto vector = glm::lerp(*self->glm, *other->glm, c_x);

        auto result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(vector);
        return (PyObject *)result;
    }


    static DVector2 *
    DVector2_normalize(DVector2 *self, void*)
    {
        auto cls = Py_TYPE(self);
        auto vector = glm::normalize(*self->glm);
        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(

                vector[0],

                vector[1]

        );
        return result;
    }

    static PyObject *
    DVector2_distance(DVector2 *self, DVector2 *other)
    {
        auto cls = Py_TYPE(self);
        if (Py_TYPE(other) != cls)
        {
            PyErr_Format(PyExc_TypeError, "%R is not DVector2", other);
            return 0;
        }
        auto result = glm::distance(*self->glm, *other->glm);
        return c_double_to_pyobject(result);
    }




static PyObject *
DVector2_min(DVector2 *self, PyObject *min)
{
    auto c_min = pyobject_to_c_double(min);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::min(*self->glm, c_min);
    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
DVector2_max(DVector2 *self, PyObject *max)
{
    auto c_max = pyobject_to_c_double(max);
    if (PyErr_Occurred()){ return 0; }
    auto cls = Py_TYPE(self);
    auto vector = glm::max(*self->glm, c_max);
    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
DVector2_clamp(DVector2 *self, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 2)
    {
        PyErr_Format(PyExc_TypeError, "expected 2 arguments, got %zi", nargs);
        return 0;
    }
    auto c_min = pyobject_to_c_double(args[0]);
    if (PyErr_Occurred()){ return 0; }
    auto c_max = pyobject_to_c_double(args[1]);
    if (PyErr_Occurred()){ return 0; }

    auto cls = Py_TYPE(self);
    auto vector = glm::clamp(*self->glm, c_min, c_max);
    DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(vector);
    return (PyObject *)result;
}


static PyObject *
DVector2_get_size(DVector2 *cls, void *)
{
    return PyLong_FromSize_t(sizeof(double) * 2);
}


static PyObject *
DVector2_get_limits(DVector2 *cls, void *)
{
    auto c_min = std::numeric_limits<double>::lowest();
    auto c_max = std::numeric_limits<double>::max();
    auto py_min = c_double_to_pyobject(c_min);
    if (!py_min){ return 0; }
    auto py_max = c_double_to_pyobject(c_max);
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
DVector2_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(double) * 2;
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length < expected_size)
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer of size %zd, got %zd", expected_size, view_length);
        return 0;
    }

    auto *result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->glm = new DVector2Glm();
    std::memcpy(result->glm, view.buf, expected_size);
    PyBuffer_Release(&view);
    return (PyObject *)result;
}


static PyObject *
DVector2_get_array_type(PyTypeObject *cls, void*)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto array_type = module_state->DVector2Array_PyTypeObject;
    Py_INCREF(array_type);
    return (PyObject *)array_type;
}


static PyMethodDef DVector2_PyMethodDef[] = {


        {"lerp", (PyCFunction)DVector2_lerp, METH_FASTCALL, 0},
        {"normalize", (PyCFunction)DVector2_normalize, METH_NOARGS, 0},
        {"distance", (PyCFunction)DVector2_distance, METH_O, 0},

    {"min", (PyCFunction)DVector2_min, METH_O, 0},
    {"max", (PyCFunction)DVector2_max, METH_O, 0},
    {"clamp", (PyCFunction)DVector2_clamp, METH_FASTCALL, 0},
    {"get_limits", (PyCFunction)DVector2_get_limits, METH_NOARGS | METH_STATIC, 0},
    {"get_size", (PyCFunction)DVector2_get_size, METH_NOARGS | METH_STATIC, 0},
    {"get_array_type", (PyCFunction)DVector2_get_array_type, METH_NOARGS | METH_STATIC, 0},
    {"from_buffer", (PyCFunction)DVector2_from_buffer, METH_O | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot DVector2_PyType_Slots [] = {
    {Py_tp_new, (void*)DVector2__new__},
    {Py_tp_dealloc, (void*)DVector2__dealloc__},
    {Py_tp_hash, (void*)DVector2__hash__},
    {Py_tp_repr, (void*)DVector2__repr__},
    {Py_sq_length, (void*)DVector2__len__},
    {Py_sq_item, (void*)DVector2__getitem__},
    {Py_tp_richcompare, (void*)DVector2__richcmp__},
    {Py_nb_add, (void*)DVector2__add__},
    {Py_nb_subtract, (void*)DVector2__sub__},
    {Py_nb_multiply, (void*)DVector2__mul__},

        {Py_nb_matrix_multiply, (void*)DVector2__matmul__},
        {Py_nb_remainder, (void*)DVector2__mod__},
        {Py_nb_power, (void*)DVector2__pow__},


        {Py_nb_true_divide, (void*)DVector2__truediv__},


        {Py_nb_negative, (void*)DVector2__neg__},

    {Py_nb_absolute, (void*)DVector2__abs__},
    {Py_nb_bool, (void*)DVector2__bool__},
    {Py_bf_getbuffer, (void*)DVector2_getbufferproc},
    {Py_tp_getset, (void*)DVector2_PyGetSetDef},
    {Py_tp_getattro, (void*)DVector2__getattr__},
    {Py_tp_members, (void*)DVector2_PyMemberDef},
    {Py_tp_methods, (void*)DVector2_PyMethodDef},
    {0, 0},
};


static PyType_Spec DVector2_PyTypeSpec = {
    "emath.DVector2",
    sizeof(DVector2),
    0,
    Py_TPFLAGS_DEFAULT,
    DVector2_PyType_Slots
};


static PyTypeObject *
define_DVector2_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &DVector2_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "DVector2", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


    static DVector2 *
    create_DVector2_from_glm(const DVector2Glm& glm)
    {
        auto module_state = get_module_state();
        if (!module_state){ return 0; }
        auto cls = module_state->DVector2_PyTypeObject;

        DVector2 *result = (DVector2 *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(glm);

        return result;
    }



static PyObject *
DVector2Array__new__(PyTypeObject *cls, PyObject *args, PyObject *kwds)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->DVector2_PyTypeObject;

    if (kwds && PyDict_Size(kwds) != 0)
    {
        PyErr_SetString(
            PyExc_TypeError,
            "DVector2 does accept any keyword arguments"
        );
        return 0;
    }

    auto arg_count = PyTuple_GET_SIZE(args);
    if (arg_count == 0)
    {
        auto self = (DVector2Array *)cls->tp_alloc(cls, 0);
        if (!self){ return 0; }
        self->length = 0;
        self->glm = 0;
        return (PyObject *)self;
    }

    auto *self = (DVector2Array *)cls->tp_alloc(cls, 0);
    if (!self){ return 0; }
    self->length = arg_count;
    self->glm = new DVector2Glm[arg_count];

    for (int i = 0; i < arg_count; i++)
    {
        auto arg = PyTuple_GET_ITEM(args, i);
        if (Py_TYPE(arg) == element_cls)
        {
            self->glm[i] = *(((DVector2*)arg)->glm);
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
DVector2Array__dealloc__(DVector2Array *self)
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
DVector2Array__hash__(DVector2Array *self)
{
    Py_ssize_t len = self->length * 2;
    Py_uhash_t acc = _HASH_XXPRIME_5;
    for (Py_ssize_t i = 0; i < (Py_ssize_t)self->length; i++)
    {
        for (DVector2Glm::length_type j = 0; j < 2; j++)
        {
            Py_uhash_t lane = std::hash<double>{}(self->glm[i][j]);
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
DVector2Array__repr__(DVector2Array *self)
{
    return PyUnicode_FromFormat("DVector2Array[%zu]", self->length);
}


static Py_ssize_t
DVector2Array__len__(DVector2Array *self)
{
    return self->length;
}


static PyObject *
DVector2Array__sq_getitem__(DVector2Array *self, Py_ssize_t index)
{
    if (index < 0 || index > (Py_ssize_t)self->length - 1)
    {
        PyErr_Format(PyExc_IndexError, "index out of range");
        return 0;
    }

    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto element_cls = module_state->DVector2_PyTypeObject;

    DVector2 *result = (DVector2 *)element_cls->tp_alloc(element_cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(self->glm[index]);

    return (PyObject *)result;
}


static PyObject *
DVector2Array__mp_getitem__(DVector2Array *self, PyObject *key)
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
        auto *result = (DVector2Array *)cls->tp_alloc(cls, 0);
        if (!result){ return 0; }
        if (length == 0)
        {
            result->length = 0;
            result->glm = 0;
        }
        else
        {
            result->length = length;
            result->glm = new DVector2Glm[length];
            for (DVector2Glm::length_type i = 0; i < length; i++)
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
        auto element_cls = module_state->DVector2_PyTypeObject;

        DVector2 *result = (DVector2 *)element_cls->tp_alloc(element_cls, 0);
        if (!result){ return 0; }
        result->glm = new DVector2Glm(self->glm[index]);

        return (PyObject *)result;
    }
    PyErr_Format(PyExc_TypeError, "expected int or slice");
    return 0;
}


static PyObject *
DVector2Array__richcmp__(
    DVector2Array *self,
    DVector2Array *other,
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
DVector2Array__bool__(DVector2Array *self)
{
    return self->length ? 1 : 0;
}


static int
DVector2Array_getbufferproc(DVector2Array *self, Py_buffer *view, int flags)
{
    if (flags & PyBUF_WRITABLE)
    {
        PyErr_SetString(PyExc_BufferError, "DVector2 is read only");
        view->obj = 0;
        return -1;
    }

        if ((!(flags & PyBUF_C_CONTIGUOUS)) && flags & PyBUF_F_CONTIGUOUS)
        {
            PyErr_SetString(PyExc_BufferError, "DVector2 cannot be made Fortran contiguous");
            view->obj = 0;
            return -1;
        }

    view->buf = self->glm;
    view->obj = (PyObject *)self;
    view->len = sizeof(double) * 2 * self->length;
    view->readonly = 1;
    view->itemsize = sizeof(double);
    view->ndim = 2;
    if (flags & PyBUF_FORMAT)
    {
        view->format = "d";
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
            sizeof(double) * 2,
            sizeof(double)
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
DVector2Array_releasebufferproc(DVector2Array *self, Py_buffer *view)
{
    delete view->shape;
}


static PyMemberDef DVector2Array_PyMemberDef[] = {
    {"__weaklistoffset__", T_PYSSIZET, offsetof(DVector2Array, weakreflist), READONLY},
    {0}
};


static PyObject *
DVector2Array_pointer(DVector2Array *self, void *)
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto c_p = module_state->ctypes_c_double_p;
    return PyObject_CallMethod(c_p, "from_address", "n", (Py_ssize_t)&self->glm);
}


static PyObject *
DVector2Array_size(DVector2Array *self, void *)
{
    return PyLong_FromSize_t(sizeof(double) * 2 * self->length);
}


static PyGetSetDef DVector2Array_PyGetSetDef[] = {
    {"pointer", (getter)DVector2Array_pointer, 0, 0, 0},
    {"size", (getter)DVector2Array_size, 0, 0, 0},
    {0, 0, 0, 0, 0}
};


static PyObject *
DVector2Array_from_buffer(PyTypeObject *cls, PyObject *buffer)
{
    static Py_ssize_t expected_size = sizeof(double);
    Py_buffer view;
    if (PyObject_GetBuffer(buffer, &view, PyBUF_SIMPLE) == -1){ return 0; }
    auto view_length = view.len;
    if (view_length % (sizeof(double) * 2))
    {
        PyBuffer_Release(&view);
        PyErr_Format(PyExc_BufferError, "expected buffer evenly divisible by %zd, got %zd", sizeof(double), view_length);
        return 0;
    }
    auto array_length = view_length / (sizeof(double) * 2);

    auto *result = (DVector2Array *)cls->tp_alloc(cls, 0);
    if (!result)
    {
        PyBuffer_Release(&view);
        return 0;
    }
    result->length = array_length;
    if (array_length > 0)
    {
        result->glm = new DVector2Glm[array_length];
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
DVector2Array_get_component_type(PyTypeObject *cls, PyObject *const *args, Py_ssize_t nargs)
{
    if (nargs != 0)
    {
        PyErr_Format(PyExc_TypeError, "expected 0 arguments, got %zi", nargs);
        return 0;
    }
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    auto component_type = module_state->DVector2_PyTypeObject;
    Py_INCREF(component_type);
    return (PyObject *)component_type;
}


static PyMethodDef DVector2Array_PyMethodDef[] = {
    {"from_buffer", (PyCFunction)DVector2Array_from_buffer, METH_O | METH_CLASS, 0},
    {"get_component_type", (PyCFunction)DVector2Array_get_component_type, METH_FASTCALL | METH_CLASS, 0},
    {0, 0, 0, 0}
};


static PyType_Slot DVector2Array_PyType_Slots [] = {
    {Py_tp_new, (void*)DVector2Array__new__},
    {Py_tp_dealloc, (void*)DVector2Array__dealloc__},
    {Py_tp_hash, (void*)DVector2Array__hash__},
    {Py_tp_repr, (void*)DVector2Array__repr__},
    {Py_sq_length, (void*)DVector2Array__len__},
    {Py_sq_item, (void*)DVector2Array__sq_getitem__},
    {Py_mp_subscript, (void*)DVector2Array__mp_getitem__},
    {Py_tp_richcompare, (void*)DVector2Array__richcmp__},
    {Py_nb_bool, (void*)DVector2Array__bool__},
    {Py_bf_getbuffer, (void*)DVector2Array_getbufferproc},
    {Py_bf_releasebuffer, (void*)DVector2Array_releasebufferproc},
    {Py_tp_getset, (void*)DVector2Array_PyGetSetDef},
    {Py_tp_members, (void*)DVector2Array_PyMemberDef},
    {Py_tp_methods, (void*)DVector2Array_PyMethodDef},
    {0, 0},
};


static PyType_Spec DVector2Array_PyTypeSpec = {
    "emath.DVector2Array",
    sizeof(DVector2Array),
    0,
    Py_TPFLAGS_DEFAULT,
    DVector2Array_PyType_Slots
};


static PyTypeObject *
define_DVector2Array_type(PyObject *module)
{
    PyTypeObject *type = (PyTypeObject *)PyType_FromModuleAndSpec(
        module,
        &DVector2Array_PyTypeSpec,
        0
    );
    if (!type){ return 0; }
    // Note:
    // Unlike other functions that steal references, PyModule_AddObject() only
    // decrements the reference count of value on success.
    if (PyModule_AddObject(module, "DVector2Array", (PyObject *)type) < 0)
    {
        Py_DECREF(type);
        return 0;
    }
    return type;
}


static PyTypeObject *
get_DVector2_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->DVector2_PyTypeObject;
}


static PyTypeObject *
get_DVector2Array_type()
{
    auto module_state = get_module_state();
    if (!module_state){ return 0; }
    return module_state->DVector2Array_PyTypeObject;
}


static PyObject *
create_DVector2(const double *value)
{
    auto cls = get_DVector2_type();
    auto result = (DVector2 *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->glm = new DVector2Glm(*(DVector2Glm *)value);
    return (PyObject *)result;
}


static PyObject *
create_DVector2Array(size_t length, const double *value)
{
    auto cls = get_DVector2Array_type();
    auto result = (DVector2Array *)cls->tp_alloc(cls, 0);
    if (!result){ return 0; }
    result->length = length;
    if (length > 0)
    {
        result->glm = new DVector2Glm[length];
        for (size_t i = 0; i < length; i++)
        {
            result->glm[i] = ((DVector2Glm *)value)[i];
        }
    }
    else
    {
        result->glm = 0;
    }
    return (PyObject *)result;
}


static const double *
get_DVector2_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_DVector2_type())
    {
        PyErr_Format(PyExc_TypeError, "expected DVector2, got %R", self);
        return 0;
    }
    return (double *)((DVector2 *)self)->glm;
}


static const double *
get_DVector2Array_value_ptr(const PyObject *self)
{
    if (Py_TYPE(self) != get_DVector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected DVector2Array, got %R",
            self
        );
        return 0;
    }
    return (double *)((DVector2Array *)self)->glm;
}


static size_t
get_DVector2Array_length(const PyObject *self)
{
    if (Py_TYPE(self) != get_DVector2Array_type())
    {
        PyErr_Format(
            PyExc_TypeError,
            "expected DVector2Array, got %R",
            self
        );
        return 0;
    }
    return ((DVector2Array *)self)->length;
}

#endif