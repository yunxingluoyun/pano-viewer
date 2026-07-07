/* main.cpp for pvQt 08Sep2008
 * Copyright (C) 2008 Thomas K Sharpless
 *
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
 *
*/

#include <QApplication>

#include "MainWindow.h"
#include <QTranslator>

int main(int argc, char **argv )
{
    QApplication app(argc, argv);
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for(const QString& locale:uiLanguages)
    {
        const QString baseName = "PanoViewer_"+QLocale(locale).name();
        if(translator.load(":/i18n/"+baseName))
        {
            app.installTranslator(&translator);
            break;
        }
    }
    MainWindow *window = new MainWindow;
  // ok, run the GUI...
    window->show();
  // process commandline, abort if fails
    if( !window->postArgs(argc, argv) ) return 3;
  // event loop
    return app.exec();
}
