// Init qApp macro to None.
if (qApp) {
    PyObject* pyApp = Shiboken::Converter<QApplication*>::toPython(qApp);
    Py_INCREF(pyApp);
    PyModule_AddObject(module, "qApp", pyApp);
} else {
    Py_INCREF(Py_None);
    PyModule_AddObject(module, "qApp", Py_None);
}
moduleQtGui = module;
