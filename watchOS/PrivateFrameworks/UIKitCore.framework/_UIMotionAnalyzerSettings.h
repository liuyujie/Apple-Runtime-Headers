//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings
{
    _Bool _showIdleIndicator;
    _Bool _jumpEnabled;
    _Bool _playJumpSound;
    _Bool _directionalLockEnabled;
    _Bool _showDirectionalLockIndicators;
    _Bool _referenceShiftEnabled;
    float _inputSmoothingFactor;
    float _referenceShiftSpeed;
    float _idleLeeway;
    float _delayBeforeIdle;
    float _jumpThreshold;
    float _directionalLockThreshold;
    float _directionalLockStickiness;
    float _directionalLockSharpness;
    float _referenceShiftDistanceDependence;
}

@property float referenceShiftDistanceDependence; // @synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence;
@property _Bool referenceShiftEnabled; // @synthesize referenceShiftEnabled=_referenceShiftEnabled;
@property _Bool showDirectionalLockIndicators; // @synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators;
@property float directionalLockSharpness; // @synthesize directionalLockSharpness=_directionalLockSharpness;
@property float directionalLockStickiness; // @synthesize directionalLockStickiness=_directionalLockStickiness;
@property float directionalLockThreshold; // @synthesize directionalLockThreshold=_directionalLockThreshold;
@property _Bool directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property _Bool playJumpSound; // @synthesize playJumpSound=_playJumpSound;
@property float jumpThreshold; // @synthesize jumpThreshold=_jumpThreshold;
@property _Bool jumpEnabled; // @synthesize jumpEnabled=_jumpEnabled;
@property _Bool showIdleIndicator; // @synthesize showIdleIndicator=_showIdleIndicator;
@property float delayBeforeIdle; // @synthesize delayBeforeIdle=_delayBeforeIdle;
@property float idleLeeway; // @synthesize idleLeeway=_idleLeeway;
@property float referenceShiftSpeed; // @synthesize referenceShiftSpeed=_referenceShiftSpeed;
@property float inputSmoothingFactor; // @synthesize inputSmoothingFactor=_inputSmoothingFactor;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setDefaultValues;

@end

