# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

# This is a reminder that you are using a generated .pro file.
# Remove it when you are finished editing this file.
message("attention---QCefView.dll depend on libcef_dll_wrapper.lib and libcef.lib, QCefViewHelper.exe and QCefViewTest.exe depend on QCefView.dll")

TEMPLATE = subdirs
CONFIG += ordered 
SUBDIRS += src/QCefView \
	src/QCefViewHelper \
    test/QCefViewTest \
	