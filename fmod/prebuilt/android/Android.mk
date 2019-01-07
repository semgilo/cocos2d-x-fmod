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
