/******************************************************************************
*   Copyright 2007-2009 by Aaron Seigo <aseigo@kde.org>                       *
*   Copyright 2013 by Sebastian Kügler <sebas@kde.org>                        *
*                                                                             *
*   This library is free software; you can redistribute it and/or             *
*   modify it under the terms of the GNU Library General Public               *
*   License as published by the Free Software Foundation; either              *
*   version 2 of the License, or (at your option) any later version.          *
*                                                                             *
*   This library is distributed in the hope that it will be useful,           *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of            *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU          *
*   Library General Public License for more details.                          *
*                                                                             *
*   You should have received a copy of the GNU Library General Public License *
*   along with this library; see the file COPYING.LIB.  If not, write to      *
*   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,      *
*   Boston, MA 02110-1301, USA.                                               *
*******************************************************************************/

#include "lookandfeelpackage.h"

#include <KLocalizedString>

#include <Plasma/Package>


void LookAndFeelPackageStructure::initPackage(Plasma::Package *package)
{
    // http://community.kde.org/Plasma/lookAndFeelPackage#

    package->setDefaultPackageRoot("plasma/look-and-feel/");

    //Directories
    package->addDirectoryDefinition("previews", "previews", i18n("Preview Images"));
    package->addFileDefinition("loginmanagerpreview", "previews/loginmanager.png", i18n("Preview for the Login Manager"));
    package->addFileDefinition("lockscreenpreview", "previews/lockscreen.png", i18n("Preview for the Lock Screen"));
    package->addFileDefinition("userswitcherpreview", "previews/userswitcher.png", i18n("Preview for the Userswitcher"));
    package->addFileDefinition("desktopswitcherpreview", "previews/desktopswitcher.png", i18n("Preview for the Virtual Desktop Switcher"));
    package->addFileDefinition("splashpreview", "previews/splash.png", i18n("Preview for Splash Screen"));
    package->addFileDefinition("runcommandpreview", "previews/runcommand.png", i18n("Preview for KRunner"));
    package->addFileDefinition("windowdecorationpreview", "previews/windowdecoration.png", i18n("Preview for the Window Decorations"));
    package->addFileDefinition("windowswitcherpreview", "previews/windowswitcher.png", i18n("Preview for Window Switcher"));

    package->addDirectoryDefinition("loginmanager", "loginmanager", i18n("Login Manager"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

    package->addDirectoryDefinition("logout", "logout", i18n("Logout Dialog"));
    package->addFileDefinition("logoutmainscript", "logout/Logout.qml", i18n("Main Script for Logout Dialog"));

    package->addDirectoryDefinition("lockscreen", "lockscreen", i18n("Screenlocker"));
    package->addFileDefinition("lockscreenmainscript", "lockscreen/LockScreen.qml", i18n("Main Script for Lock Screen"));

    package->addDirectoryDefinition("userswitcher", "userswitcher", i18n("UI for fast user switching"));
    package->addFileDefinition("userswitchermainscript", "userswitcher/UserSwitcher.qml", i18n("Main Script for User Switcher"));

    package->addDirectoryDefinition("desktopswitcher", "desktopswitcher", i18n("Virtual Desktop Switcher"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

    package->addDirectoryDefinition("splash", "splash", i18n("Splash Screen"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

    package->addDirectoryDefinition("runcommand", "runcommand", i18n("KRunner UI"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

    package->addDirectoryDefinition("windowdecoration", "windowdecoration", i18n("Window Decoration"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

    package->addDirectoryDefinition("windowswitcher", "windowswitcher", i18n("Window Switcher"));
    package->addFileDefinition("loginmanagermainscript", "previews/LoginManager.qml", i18n("Main Script for Login Manager"));

}


