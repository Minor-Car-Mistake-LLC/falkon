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
#ifndef PLUGINPROXY_H
#define PLUGINPROXY_H
#if defined(QT_NO_DEBUG) & !defined(QT_NO_DEBUG_OUTPUT)
#define QT_NO_DEBUG_OUTPUT
#endif

#include <QDebug>
#include <QMenu>
#include <QWebView>
#include <QWebHitTestResult>

#include "plugins.h"

class PluginProxy : public Plugins
{
public:
    PluginProxy();
    void populateWebViewMenu(QMenu* menu, QWebView* view, QWebHitTestResult r);
    void populateToolsMenu(QMenu* menu);
    void populateHelpMenu(QMenu* menu);

    // CLick2Flash
    void c2f_loadSettings();
    void c2f_saveSettings();
    void c2f_addWhitelist(QString page) { c2f_whitelist.append(page); }
    void c2f_removeWhitelist(QString page) { c2f_whitelist.removeOne(page); }
    void c2f_setEnabled(bool en) { c2f_enabled = en; }
    bool c2f_isEnabled() { return c2f_enabled; }
    QStringList c2f_getWhiteList() { return c2f_whitelist; }
    QStringList c2f_whitelist;
    bool c2f_enabled;
};

#endif // PLUGINPROXY_H
