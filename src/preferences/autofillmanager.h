/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2010-2011  nowrep
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#ifndef AUTOFILLMANAGER_H
#define AUTOFILLMANAGER_H

#if defined(QT_NO_DEBUG) & !defined(QT_NO_DEBUG_OUTPUT)
#define QT_NO_DEBUG_OUTPUT
#endif

#include <QWidget>
#include <QDialog>
#include <QTimer>
#include <QSqlQuery>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QMessageBox>
#include <QInputDialog>

namespace Ui {
    class AutoFillManager;
}

class AutoFillManager : public QDialog
{
    Q_OBJECT

public:
    explicit AutoFillManager(QWidget *parent = 0);
    ~AutoFillManager();

    void showExceptions();

private slots:
    void loadPasswords();

    void removePass();
    void removeAllPass();
    void editPass();

    void removeExcept();
    void removeAllExcept();

private:
    Ui::AutoFillManager *ui;
};

#endif // AUTOFILLMANAGER_H
