#ifndef FMODAUDIOENGINE_H
#define FMODAUDIOENGINE_H
#include "fmod/include/win32/fmod.hpp"
#include <functional>
#include <list>
#include <string>
#include <unordered_map>
#include <vector> 
#include "base/CCRef.h"
enum FMODAudioEventType
{
    STOP
};
class CC_DLL FMODAudioEngine : public cocos2d::Ref
{
public:
    FMODAudioEngine();
    ~FMODAudioEngine();
    
    static FMODAudioEngine * getInstance();
    static void destroyInstance();
    
    bool lazyInit();
    
    FMOD::Sound* getOrCreateIfNotExists(const std::string &filename);
    
    FMOD::Sound* load(const std::string &filename);
    
    void preload(const std::string &filename);
    
    int playSound(const std::string &filename, bool loop = false);
    
    void pauseSound(int soundID);
    
    void pauseAllSounds();
    
    void resumeSound(int soundID);
    
    void resumeAllSounds();
    
    void stopSound(int soundID);
    
    void stopAllSounds();
    
    void setPitch(float pitch);
    
    void releaseSound(const std::string &filename);
    
    void releaseAllSounds();
    
    void addEventListener(int listener);
    
    void onEvent(FMODAudioEventType eventType, int soundID);
    
    int genSoundID();
    
    virtual void update(float delta);
public:
    FMOD::System* _system;
    FMOD::ChannelGroup* _channelGroup;
    FMOD::Channel* _channel;
    
private:
    int _index;
    int _eventListener;
    std::unordered_map<std::string, FMOD::Sound*> _sounds;
    std::unordered_map<int, FMOD::Channel*> _soundIDMap;
    std::vector<int> _availableIDs;
    
    float _pitch;
};

#endif
