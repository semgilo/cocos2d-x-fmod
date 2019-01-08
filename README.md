## Environment
Cocos2d-x: 3.17

[fmod](https://fmod.com/resources/documentation-api?page=content/generated/common/introduction%5Fweb.html#/)

## Config


### Files


#### Copy dir to your project

```c++
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ external
```


#### Copy lua\_fmod\_auto.hpp和lua\_fmod\_auto.cpp to your project

```c++
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ cocos ▸ scripting ▸ lua-bindings ▸ auto
```


#### Modify CCLuaStack.cpp

path：frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ cocos ▸ scripting ▸ lua-bindings ▸ munual

```c++
// 1.include lua_fmod_auto.hpp file
#include "scripting/lua-bindings/auto/lua_fmod_auto.hpp"

// 2.register 
bool LuaStack::init(void)
{
    ...
    register_all_cocos2dx_fmod(_state);
    ...
    return true;
}
```


### win32


#### Add files
![](/images/fmod/win/add_engine.png)


#### Config libs

![](/images/fmod/win/add_lib_search_path.png)
![](/images/fmod/win/add_libs.png)


### ios

#### Config libs
![](/images/fmod/ios/add_lib.png)

#### Config search path

```c++
1.cocos2d_libs.xcodeproj ▸ ⁨build setting ▸ ⁨User Header Search Paths
"$(SRCROOT)/../external/fmod/include/ios"

2.cocos2d_libs.xcodeproj ▸ ⁨build setting ▸ ⁨Library Search Paths
"$(SRCROOT)/../external/fmod/prebuilt/ios"
```


#### Add source file to XcodeProject 

![](/images/fmod/ios/add_files.png)
![](/images/fmod/ios/add_lua_files.png)


### android 

#### Add .jar and .so files to Android Studio 
![](/images/fmod/android/add_libs.png)

#### Modify AppActivity.java

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


#### Modify lua-bindings android.mk

```java
⁨frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ ⁨cocos⁩ ▸ ⁨scripting⁩ ▸ ⁨lua-bindings⁩ ▸ android.mk

#fmod
LOCAL_SRC_FILES += ../auto/lua_fmod_auto.cpp \
```


#### Modify cocos android.mk

```java
frameworks⁩ ▸ ⁨cocos2d-x⁩ ▸ ⁨cocos⁩ ▸  android.mk
1.
LOCAL_STATIC_LIBRARIES += fmod_static

2.
$(call import-module,fmod/prebuilt/android)
```


#### fmod android.mk

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


## Using in lua

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


## Contact
semgilo@gmail.com
QQ:9737935

## Chinese doc
http://www.lanhuzi/blog/cocos2dx-fmod-integrating/
