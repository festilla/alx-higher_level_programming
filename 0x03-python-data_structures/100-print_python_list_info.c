#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python_list_info - Display basic information
 * @python_list: PyObject representing a Python list
 *
 * Return: Void
 */
void print_python_list_info(PyObject *python_list)
{
    PyObject *list_item;
    PyListObject *list = (PyListObject *)python_list;
    int index, list_size, allocation_size;
    list_size = Py_SIZE(python_list);
    allocation_size = list->allocated;
    printf("[*] Size of the Python List = %d\n", list_size);
    printf("[*] Allocated = %d\n", allocation_size);
    for (index = 0; index < list_size; index++)
    {
    list_item = PyList_GetItem(python_list, index);
    printf("Element %d: %s\n", index, Py_TYPE(list_item)->tp_name);
    }
}
