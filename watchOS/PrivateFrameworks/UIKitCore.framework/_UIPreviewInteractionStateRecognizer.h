//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionStateRecognizer : NSObject
{
    unsigned int _deepPressCount;
    float _smoothedForce;
    float _maximumForce;
    float _previousEffectiveTouchForce;
    double _timeMark;
    double _currentTime;
    double _previousTime;
    float _popOffsetInitial;
    float _popOffsetLongterm;
    float _popOffsetDecayAlpha;
    float _lowpassForceAlpha;
    float _popDecayingOffset;
    float _popReductionForce;
    float _progressToStrongThreshold;
    _Bool _allowsPopOffsetDecay;
    float _popForceReductionThreshold;
    float _popAlwaysThreshold;
    float _highPopThreshold;
    float _previousPopThreshold;
    float _saturationForce;
    float _revealThreshold;
    float _standardThreshold;
    float _strongThreshold;
    float _hintAndPeekInterval;
    float _hintReductionForce;
    float _actualHintForce;
    float _actualPeekForce;
    float _actualPopForce;
    double _actualHintTime;
    double _actualPeekTime;
    double _actualPopTime;
    _Bool _shouldDelayReveal;
    int _currentState;
    float _currentTouchForce;
    double _minimumPreviewDuration;
}

@property(nonatomic) float currentTouchForce; // @synthesize currentTouchForce=_currentTouchForce;
@property(nonatomic) _Bool shouldDelayReveal; // @synthesize shouldDelayReveal=_shouldDelayReveal;
@property(nonatomic) double minimumPreviewDuration; // @synthesize minimumPreviewDuration=_minimumPreviewDuration;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (float)_currentTouchForceMultiplier;
- (float)_normalizedTouchForceValue:(float)arg1;
- (float)_denormalizedTouchForceValue:(float)arg1;
- (float)_thresholdForForceLevel:(int)arg1;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)reset;
- (void)evaluateWithTouchForce:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
@property(readonly, nonatomic) float velocity; // @dynamic velocity;
- (float)currentProgressToState:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

