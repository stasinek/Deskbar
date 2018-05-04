#ifndef LUPA_H
#define LUPA_H

#include <QDialog>
#include <QSettings>
#include <QTimer>
#include "Windows.h"

namespace Ui {
class TLupa_form;
}

class TLupa_form : public QDialog
{
    Q_OBJECT
protected:
    void showEvent(QResizeEvent *);

public:
    explicit TLupa_form(QWidget *parent = 0);
    ~TLupa_form();
    //---------------------------------------------------------------------------
    QTimer *Timer1;
    HINSTANCE hInst; LONG updateing;
    //---------------------------------------------------------------------------
    struct {
    int sizeof_options;
    RECT rect;
    int alpha,clickthrough,zoomed,visible,zorder,interval,sight,zoom,central;
    RECT clientrect;
    } options;
    QSettings *KluczRejestuSystemuWindows;
    //---------------------------------------------------------------------------
    void  __fastcall tform_Resize          (void);
    void  __fastcall tform_Align           (void);
    void  __fastcall tform_Move            (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Initialize      (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Save            (void);
    void  __fastcall tform_Load            (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Redraw          (void);
    //---------------------------------------------------------------------------
private slots:
    void on_TLupa_form_resized();
private:
    Ui::TLupa_form *ui;
};

#endif // LUPA_H
