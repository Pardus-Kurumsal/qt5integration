#ifndef GLOBAL_H
#define GLOBAL_H

#define MOUSE_MARGINS 10

#define DPP_BEGIN_NAMESPACE namespace deepin_platform_plugin {
#define DPP_END_NAMESPACE }
#define DPP_USE_NAMESPACE using namespace deepin_platform_plugin;

#define PUBLIC_CLASS(Class, Target) \
    class D##Class : public Class\
    {friend class Target;}

#define DEFINE_CONST_CHAR(Name) const char Name[] = "_d_" #Name

DEFINE_CONST_CHAR(useDxcb);
DEFINE_CONST_CHAR(netWmStates);
DEFINE_CONST_CHAR(windowRadius);
DEFINE_CONST_CHAR(borderWidth);
DEFINE_CONST_CHAR(borderColor);
DEFINE_CONST_CHAR(shadowRadius);
DEFINE_CONST_CHAR(shadowOffset);
DEFINE_CONST_CHAR(shadowColor);
DEFINE_CONST_CHAR(clipPath);
DEFINE_CONST_CHAR(frameMask);
DEFINE_CONST_CHAR(frameMargins);
DEFINE_CONST_CHAR(translucentBackground);
DEFINE_CONST_CHAR(enableSystemResize);
DEFINE_CONST_CHAR(enableSystemMove);
DEFINE_CONST_CHAR(enableBlurWindow);
DEFINE_CONST_CHAR(userWindowMinimumSize);
DEFINE_CONST_CHAR(userWindowMaximumSize);
DEFINE_CONST_CHAR(windowBlurAreas);
DEFINE_CONST_CHAR(windowBlurPaths);
DEFINE_CONST_CHAR(autoInputMaskByClipPath);

// functions
DEFINE_CONST_CHAR(setWmBlurWindowBackgroundArea);
DEFINE_CONST_CHAR(setWmBlurWindowBackgroundPathList);
DEFINE_CONST_CHAR(setWmBlurWindowBackgroundMaskImage);
DEFINE_CONST_CHAR(hasBlurWindow);
DEFINE_CONST_CHAR(hasComposite);
DEFINE_CONST_CHAR(connectWindowManagerChangedSignal);
DEFINE_CONST_CHAR(connectHasBlurWindowChanged);
DEFINE_CONST_CHAR(connectHasCompositeChanged);
DEFINE_CONST_CHAR(getWindows);
DEFINE_CONST_CHAR(getCurrentWorkspaceWindows);
DEFINE_CONST_CHAR(connectWindowListChanged);

// others
DEFINE_CONST_CHAR(WmWindowTypes);
DEFINE_CONST_CHAR(WmNetDesktop);
DEFINE_CONST_CHAR(WmClass);
DEFINE_CONST_CHAR(ProcessId);

#endif // GLOBAL_H
