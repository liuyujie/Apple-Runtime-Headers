//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface AirPlayReceiverPlatform : NSObject
{
    struct AirPlayReceiverUIPrivate *_ui;
    // Error parsing type: ^{AirPlayReceiverServerPrivate={__CFRuntimeBase=QAQ}^v@i^{OpaqueAPAdvertiser}CC^{HTTPServerPrivate}@^{HTTPServerPrivate}[16C]fCiCC^{OpaqueAPReceiverSystemInfo}CC^{__CFDictionary}^{__CFDictionary}^{MediaControlServerPrivate}^{__CFDictionary}IiI^{APReceiverSessionManagerOpaque}^{OpaqueFigValeria}^?CCCCCC}, name: _server
    int _uiErrorNotifyToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    unsigned char _isMuted;
    float _volumeSliderValueBeforeMute;
}

@end

