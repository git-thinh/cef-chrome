#ifndef QCEFVIEWTEST_H
#define QCEFVIEWTEST_H

#include <QtWidgets/QMainWindow>
#include "customcefview.h"

#include <QLineEdit>
#include <QPushButton>
#include <QWidget>

class QCefViewTest : public QWidget
{
	Q_OBJECT

public:
	QCefViewTest(QWidget *parent = 0);
	~QCefViewTest();

private:
	void CreateUI();

	void onBackBtnClick();
	void onForwardBtnClick();
	void onReloadBtnClick();
	void onGotoBtnClick();



private:
	CustomCefView*					mpCefview;
	QPushButton*					mpBackBtn;
	QPushButton*					mpForwardBtn;
	QPushButton*					mpReloadBtn;
	QPushButton*					mpGotoBtn;
	QLineEdit*					    mpUrlEidt;
};

#endif // QCEFVIEWTEST_H
