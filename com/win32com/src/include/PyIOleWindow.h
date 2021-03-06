// This file declares the IOleWindow Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PYCOM_EXPORT PyIOleWindow : public PyIUnknown
{
public:
	MAKE_PYCOM_CTOR(PyIOleWindow);
	static IOleWindow *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods
	static PyObject *GetWindow(PyObject *self, PyObject *args);
	static PyObject *ContextSensitiveHelp(PyObject *self, PyObject *args);

protected:
	PyIOleWindow(IUnknown *pdisp);
	~PyIOleWindow();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PYCOM_EXPORT PyGOleWindow : public PyGatewayBase, public IOleWindow
{
protected:
	PyGOleWindow(PyObject *instance) : PyGatewayBase(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT(PyGOleWindow, IOleWindow, IID_IOleWindow)



	// IOleWindow
	STDMETHOD(GetWindow)(
		HWND __RPC_FAR * phwnd);

	STDMETHOD(ContextSensitiveHelp)(
		BOOL fEnterMode);

};
