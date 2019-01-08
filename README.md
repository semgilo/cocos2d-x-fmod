<div class="ox-hugo-toc toc">
<div></div>

<div class="heading">Table of Contents</div>

- [环境](#环境)
- [配置](#配置)
    - [文件](#文件)
    - [win32](#win32)
    - [ios](#ios)
    - [android](#android)
- [lua中使用](#lua中使用)
- [备注](#备注)
    - [在FMODAudioEngine类中记得添加CC\_DLL（动态库导出标记）](#在fmodaudioengine类中记得添加cc-dll-动态库导出标记)

</div>
<!--endtoc-->



## 环境 {#环境}

Cocos2d-x: 3.17

[fmod官方文档](https://fmod.com/resources/documentation-api?page=content/generated/common/introduction%5Fweb.html#/)

[教程文件](https://github.com/semgilo/cocos2d-x-fmod)


## 配置 {#配置}


### 文件 {#文件}


#### 拷贝fmod文件夹 {#拷贝fmod文件夹}

```c++
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ external
```


#### 拷贝lua导出文件lua\_fmod\_auto.hpp和lua\_fmod\_auto.cpp {#拷贝lua导出文件lua-fmod-auto-dot-hpp和lua-fmod-auto-dot-cpp}

```c++
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ cocos ▸ scripting ▸ lua-bindings ▸ auto
```


#### 修改CCLuaStack.cpp {#修改ccluastack-dot-cpp}

文件路径：frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ cocos ▸ scripting ▸ lua-bindings ▸ munual

```c++
// 1.添加引用
#include "scripting/lua-bindings/auto/lua_fmod_auto.hpp"

// 2.添加导入
bool LuaStack::init(void)
{
    ...
    register_all_cocos2dx_fmod(_state);
    ...
    return true;
}
```


### win32 {#win32}


#### 添加代码到工程 {#添加代码到工程}

{{< figure src="/images/fmod/win/add_engine.png" >}}


#### 配置libs {#配置libs}

![](/images/fmod/win/add_lib_search_path.png)
![](/images/fmod/win/add_libs.png)


### ios {#ios}


#### 配置静态库 {#配置静态库}

{{< figure src="/images/fmod/ios/add_lib.png" >}}


#### 配置搜索路径 {#配置搜索路径}

```c++
1.cocos2d_libs.xcodeproj ▸ ⁨build setting ▸ ⁨User Header Search Paths
"$(SRCROOT)/../external/fmod/include/ios"

2.cocos2d_libs.xcodeproj ▸ ⁨build setting ▸ ⁨Library Search Paths
"$(SRCROOT)/../external/fmod/prebuilt/ios"
```


#### 配置代码文件 {#配置代码文件}

![](/images/fmod/ios/add_files.png)
![](/images/fmod/ios/add_lua_files.png)


### android {#android}


#### 添加jar和so文件到工程 {#添加jar和so文件到工程}

</images/fmod/android/add_libs>


#### 添加代码到AppActivity.java {#添加代码到appactivity-dot-java}

```java
package org.cocos2dx.lua;

import android.os.Bundle;
import org.cocos2dx.lib.Cocos2dxActivity;

public class AppActivity extends Cocos2dxActivity{
    @Override
    protected void onCreate(Bundle savedInstanceState) {
	super.setEnableVirtualButton(false);
	super.onCreate(savedInstanceState);
	// Workaround in https://stackoverflow.com/questions/16283079/re-launch-of-activity-on-home-button-but-only-the-first-time/16447508
	if (!isTaskRoot()) {
	    // Android launched another instance of the root activity into an existing task
	    //  so just quietly finish and go away, dropping the user back into the activity
	    //  at the top of the stack (ie: the last state of this task)
	    // Don't need to finish it again since it's finished in super.onCreate .
	    return;
	}

	// DO OTHER INITIALIZATION BELOW
	org.fmod.FMOD.init(this);
    }


    @Override
    protected void onDestroy() {
	org.fmod.FMOD.close();
	super.onDestroy();
    }

    static
    {
	System.loadLibrary("fmod");
    }
}

```


#### 添加lua导出文件到android.mk文件 {#添加lua导出文件到android-dot-mk文件}

```java
⁨frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ ⁨cocos⁩ ▸ ⁨scripting⁩ ▸ ⁨lua-bindings⁩ ▸ android.mk

#fmod
LOCAL_SRC_FILES += ../auto/lua_fmod_auto.cpp \
```


#### 添加fmod模块到cocos的android.mk文件 {#添加fmod模块到cocos的android-dot-mk文件}

```java
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ ⁨cocos⁩ ▸  android.mk
1.
LOCAL_STATIC_LIBRARIES += fmod_static

2.
$(call import-module,fmod/prebuilt/android)
```


#### fmod模块的android.mk文件的内容 {#fmod模块的android-dot-mk文件的内容}

```java
LOCAL_PATH := $(call my-dir)

#
# FMOD Shared Library
#
include $(CLEAR_VARS)

LOCAL_MODULE            := fmod
LOCAL_SRC_FILES         := $(TARGET_ARCH_ABI)/libfmodL.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../include/android

include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)

LOCAL_MODULE            := fmod_static
LOCAL_SRC_FILES         := ../../FMODAudioEngine.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
		    $(LOCAL_PATH)/../../.. \
		    $(LOCAL_PATH)/../../../../cocos

LOCAL_SHARED_LIBRARIES  := fmod

include $(BUILD_STATIC_LIBRARY)

```


## lua中使用 {#lua中使用}

```lua
engine = fmod.FMODAudioengine:getInstance()

-- preload
engine:reload(path)
-- play
nSoundID = engine:playSound(path)

-- pause
engine:pauseSound(nSoundID)

-- stop
engine:stopSound(nSoundID)

-- resume
engine:resumeSound(nSoundID)

-- release
engine:releaseSound(path)
```


## 备注 {#备注}


### 在FMODAudioEngine类中记得添加CC\_DLL（动态库导出标记） {#在fmodaudioengine类中记得添加cc-dll-动态库导出标记}

## 联系
semgilo@gmail.com
QQ:9737935
