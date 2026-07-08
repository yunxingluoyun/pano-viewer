/*
 (C) copyright 2008, 209 Thomas K Sharpless

 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef MouseModes_H
#define MouseModes_H

#include "ui_ShowText.h"

class pvQtMouseModes
    : public QDialog, public Ui_ShowText
{
    Q_OBJECT
public:
    pvQtMouseModes( QWidget * parent = 0 )
    : QDialog(parent) {
        setupUi( this );
        retranslateText();
    }

    void retranslateText(){
        setWindowTitle(tr("Mouse Modes"));
        plainTextEdit->setPlainText( tr(
"  Key\tButtons\tHorizontal\tVertical\n"
"          left\t  Yaw\t  Pitch\n"
"          right\t  EyeZ\t  Zoom\n"
"          both\t  Roll\t  Pitch\n"
"  Shift\t  left\t  FrameX\t  FrameY\n"
"  Shift\t  right\t  EyeX\t  EyeY\n"
"  Shift\t  both\t  hFov\t  vFov\n"
"  \n"
"  Hold Control key for horizontal-only\n"
"  Hold Alt key for vertical-only\n"
"  \n"
"  Scroll wheel: Zoom ") );
    }
protected:
    void resizeEvent( QResizeEvent * ev ){
        int r = ev->size().width(),
            b = ev->size().height();
        plainTextEdit->setGeometry(QRect(10, 10, r - 18, b - 18));
    }

};

#endif  //ndef MouseModes_H
