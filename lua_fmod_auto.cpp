#include "scripting/lua-bindings/auto/lua_fmod_auto.hpp"
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_MAC || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN
#include "fmod/FMODAudioEngine.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"

int lua_cocos2dx_fmod_FMODAudioEngine_lazyInit(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_lazyInit'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_lazyInit'", nullptr);
            return 0;
        }
        bool ret = cobj->lazyInit();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:lazyInit",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_lazyInit'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_resumeAllSounds(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeAllSounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeAllSounds'", nullptr);
            return 0;
        }
        cobj->resumeAllSounds();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:resumeAllSounds",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeAllSounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_stopAllSounds(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopAllSounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopAllSounds'", nullptr);
            return 0;
        }
        cobj->stopAllSounds();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:stopAllSounds",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopAllSounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_genSoundID(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_genSoundID'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_genSoundID'", nullptr);
            return 0;
        }
        int ret = cobj->genSoundID();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:genSoundID",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_genSoundID'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_releaseSound(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FMODAudioEngine:releaseSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseSound'", nullptr);
            return 0;
        }
        cobj->releaseSound(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:releaseSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_update(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_update'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "FMODAudioEngine:update");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_update'", nullptr);
            return 0;
        }
        cobj->update(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:update",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_update'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_addEventListener(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_addEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        // ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "FMODAudioEngine:addEventListener");
		arg0 = (toluafix_ref_function(tolua_S, 2, 0));
		if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_addEventListener'", nullptr);
            return 0;
        }
        cobj->addEventListener(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:addEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_addEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_pauseAllSounds(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseAllSounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseAllSounds'", nullptr);
            return 0;
        }
        cobj->pauseAllSounds();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:pauseAllSounds",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseAllSounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_resumeSound(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "FMODAudioEngine:resumeSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeSound'", nullptr);
            return 0;
        }
        cobj->resumeSound(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:resumeSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_resumeSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_releaseAllSounds(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseAllSounds'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseAllSounds'", nullptr);
            return 0;
        }
        cobj->releaseAllSounds();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:releaseAllSounds",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_releaseAllSounds'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_stopSound(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "FMODAudioEngine:stopSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopSound'", nullptr);
            return 0;
        }
        cobj->stopSound(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:stopSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_stopSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_onEvent(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_onEvent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        FMODAudioEventType arg0;
        int arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "FMODAudioEngine:onEvent");

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "FMODAudioEngine:onEvent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_onEvent'", nullptr);
            return 0;
        }
        cobj->onEvent(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:onEvent",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_onEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_pauseSound(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "FMODAudioEngine:pauseSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseSound'", nullptr);
            return 0;
        }
        cobj->pauseSound(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:pauseSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_pauseSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_playSound(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_playSound'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FMODAudioEngine:playSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_playSound'", nullptr);
            return 0;
        }
        int ret = cobj->playSound(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    if (argc == 2) 
    {
        std::string arg0;
        bool arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FMODAudioEngine:playSound");

        ok &= luaval_to_boolean(tolua_S, 3,&arg1, "FMODAudioEngine:playSound");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_playSound'", nullptr);
            return 0;
        }
        int ret = cobj->playSound(arg0, arg1);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:playSound",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_playSound'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_preload(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_preload'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "FMODAudioEngine:preload");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_preload'", nullptr);
            return 0;
        }
        cobj->preload(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:preload",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_preload'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_setPitch(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (FMODAudioEngine*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_fmod_FMODAudioEngine_setPitch'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "FMODAudioEngine:setPitch");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_setPitch'", nullptr);
            return 0;
        }
        cobj->setPitch(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:setPitch",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_setPitch'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_destroyInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_destroyInstance'", nullptr);
            return 0;
        }
        FMODAudioEngine::destroyInstance();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "FMODAudioEngine:destroyInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_destroyInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"FMODAudioEngine",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_getInstance'", nullptr);
            return 0;
        }
        FMODAudioEngine* ret = FMODAudioEngine::getInstance();
        object_to_luaval<FMODAudioEngine>(tolua_S, "FMODAudioEngine",(FMODAudioEngine*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "FMODAudioEngine:getInstance",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_getInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_fmod_FMODAudioEngine_constructor(lua_State* tolua_S)
{
    int argc = 0;
    FMODAudioEngine* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_cocos2dx_fmod_FMODAudioEngine_constructor'", nullptr);
            return 0;
        }
        cobj = new FMODAudioEngine();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"FMODAudioEngine");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "FMODAudioEngine:FMODAudioEngine",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_fmod_FMODAudioEngine_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_fmod_FMODAudioEngine_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (FMODAudioEngine)");
    return 0;
}

int lua_register_cocos2dx_fmod_FMODAudioEngine(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FMODAudioEngine");
    tolua_cclass(tolua_S,"FMODAudioEngine","FMODAudioEngine","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"FMODAudioEngine");
        tolua_function(tolua_S,"new",lua_cocos2dx_fmod_FMODAudioEngine_constructor);
        tolua_function(tolua_S,"lazyInit",lua_cocos2dx_fmod_FMODAudioEngine_lazyInit);
        tolua_function(tolua_S,"resumeAllSounds",lua_cocos2dx_fmod_FMODAudioEngine_resumeAllSounds);
        tolua_function(tolua_S,"stopAllSounds",lua_cocos2dx_fmod_FMODAudioEngine_stopAllSounds);
        tolua_function(tolua_S,"genSoundID",lua_cocos2dx_fmod_FMODAudioEngine_genSoundID);
        tolua_function(tolua_S,"releaseSound",lua_cocos2dx_fmod_FMODAudioEngine_releaseSound);
        tolua_function(tolua_S,"update",lua_cocos2dx_fmod_FMODAudioEngine_update);
        tolua_function(tolua_S,"addEventListener",lua_cocos2dx_fmod_FMODAudioEngine_addEventListener);
        tolua_function(tolua_S,"pauseAllSounds",lua_cocos2dx_fmod_FMODAudioEngine_pauseAllSounds);
        tolua_function(tolua_S,"resumeSound",lua_cocos2dx_fmod_FMODAudioEngine_resumeSound);
        tolua_function(tolua_S,"releaseAllSounds",lua_cocos2dx_fmod_FMODAudioEngine_releaseAllSounds);
        tolua_function(tolua_S,"stopSound",lua_cocos2dx_fmod_FMODAudioEngine_stopSound);
        tolua_function(tolua_S,"onEvent",lua_cocos2dx_fmod_FMODAudioEngine_onEvent);
        tolua_function(tolua_S,"pauseSound",lua_cocos2dx_fmod_FMODAudioEngine_pauseSound);
        tolua_function(tolua_S,"playSound",lua_cocos2dx_fmod_FMODAudioEngine_playSound);
        tolua_function(tolua_S,"preload",lua_cocos2dx_fmod_FMODAudioEngine_preload);
        tolua_function(tolua_S,"setPitch",lua_cocos2dx_fmod_FMODAudioEngine_setPitch);
        tolua_function(tolua_S,"destroyInstance", lua_cocos2dx_fmod_FMODAudioEngine_destroyInstance);
        tolua_function(tolua_S,"getInstance", lua_cocos2dx_fmod_FMODAudioEngine_getInstance);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(FMODAudioEngine).name();
    g_luaType[typeName] = "FMODAudioEngine";
    g_typeCast["FMODAudioEngine"] = "FMODAudioEngine";
    return 1;
}
TOLUA_API int register_all_cocos2dx_fmod(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"fmod",0);
	tolua_beginmodule(tolua_S,"fmod");

	lua_register_cocos2dx_fmod_FMODAudioEngine(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

#endif
