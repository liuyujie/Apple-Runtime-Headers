//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCCapabilities;

__attribute__((visibility("hidden")))
@interface AVConferenceCallState : NSObject
{
    _Bool _audioIsPaused;
    VCCapabilities *_capabilities;
    _Bool _isVideoPaused;
    _Bool _isAudioSending;
}

@property(retain, nonatomic) VCCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isAudioSending) _Bool isAudioSending; // @synthesize isAudioSending=_isAudioSending;
@property(nonatomic, getter=isVideoPaused) _Bool isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property(nonatomic, getter=isAudioPaused) _Bool audioIsPaused; // @synthesize audioIsPaused=_audioIsPaused;
- (void)dealloc;

@end

