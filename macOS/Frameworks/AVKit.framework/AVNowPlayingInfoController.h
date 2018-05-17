//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerController;

@interface AVNowPlayingInfoController : NSObject
{
    AVPlayerController *_playerController;
    id _playerControllerCurrentTimeJumpedObserver;
    BOOL _nowPlayingInfoNeedsUpdate;
    BOOL _enabled;
    BOOL _shouldOwnNowPlayingInfo;
    void *_commandHandlerIdentifier;
}

- (void).cxx_destruct;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)arg1;
- (void)_updateNowPlayingInfoTestingOwnership:(BOOL)arg1;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_setNowPlayingInfoNeedsUpdate;
- (BOOL)_ownsNowPlayingInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)becomeNowPlayingApp;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(retain) AVPlayerController *playerController;
- (void)dealloc;
- (id)init;

@end
