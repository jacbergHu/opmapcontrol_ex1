#pragma once

// Qt includes.
#include <QtCore/QtGlobal>

/*!
 * @author Kai Winter <kaiwinter@gmx.de>
 * @author Chris Stylianou <chris5287@gmail.com>
 */

// 跨平台动态库导出/导入宏
#ifdef Q_OS_WIN
// Defines that the specified function, variable or class should be exported.

// Windows 系统：使用 Q_DECL_EXPORT / Q_DECL_IMPORT
#ifdef OPMAPWIDGET_LIBRARY
#define QMAPCONTROL_EXPORT Q_DECL_EXPORT
#else
// Defines that the specified function, variable or class should be imported.
#define QMAPCONTROL_EXPORT Q_DECL_IMPORT
#endif
#else
// Linux / macOS 等类 Unix 系统：无需区分导出导入，统一用 Q_DECL_EXPORT
#define QMAPCONTROL_EXPORT Q_DECL_EXPORT
#endif
