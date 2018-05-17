//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIResponderForwardable.h"

@class NSArray, NSMutableArray, NSNumber, NSString, UIResponder, UIView, UIWindow;

@interface UITouch : NSObject <_UIResponderForwardable>
{
    float _movementMagnitudeSquared;
    int _phase;
    unsigned int _tapCount;
    int _edgeType;
    unsigned int _edgeAim;
    unsigned int _touchIdentifier;
    UIWindow *_window;
    UIView *_view;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint _locationInWindow;
    struct CGPoint _previousLocationInWindow;
    struct CGPoint _preciseLocationInWindow;
    struct CGPoint _precisePreviousLocationInWindow;
    float _previousPressure;
    unsigned char _pathIndex;
    unsigned char _pathIdentity;
    float _pathMajorRadius;
    float _majorRadiusTolerance;
    float _pressure;
    float _maxObservedPressure;
    float _zGradient;
    struct {
        unsigned int _firstTouchForView:1;
        unsigned int _isTap:1;
        unsigned int _isDelayed:1;
        unsigned int _sentTouchesEnded:1;
        unsigned int _abandonForwardingRecord:1;
        unsigned int _deliversUpdatesInTouchesMovedIsValid:1;
        unsigned int _deliversUpdatesInTouchesMoved:1;
        unsigned int _isPredictedTouch:1;
        unsigned int _didDispatchAsEnded:1;
    } _touchFlags;
    _Bool _eaten;
    _Bool _needsForceUpdate;
    _Bool _hasForceUpdate;
    long _forceCorrelationToken;
    float _maximumPossiblePressure;
    struct __IOHIDEvent *_hidEvent;
    float _altitudeAngle;
    int _type;
    id <_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    float _azimuthAngleInCADisplay;
    float _azimuthAngleInWindow;
    double _timestamp;
    struct CGSize _displacement;
    unsigned long long _senderID;
    double _initialTouchTimestamp;
}

+ (id)_createTouchesWithGSEvent:(struct __GSEvent *)arg1 phase:(int)arg2 view:(id)arg3;
@property(nonatomic) double initialTouchTimestamp; // @synthesize initialTouchTimestamp=_initialTouchTimestamp;
@property(readonly, nonatomic) float azimuthAngleInWindow; // @synthesize azimuthAngleInWindow=_azimuthAngleInWindow;
@property(nonatomic, setter=_setAzimuthAngleInCADisplay:) float azimuthAngleInCADisplay; // @synthesize azimuthAngleInCADisplay=_azimuthAngleInCADisplay;
@property(retain, nonatomic, setter=_setWindowServerHitTestWindow:) UIWindow *_windowServerHitTestWindow; // @synthesize _windowServerHitTestWindow=__windowServerHitTestWindow;
@property(retain, nonatomic, setter=_setPhaseChangeDelegate:) id <_UITouchPhaseChangeDelegate> _phaseChangeDelegate; // @synthesize _phaseChangeDelegate=__phaseChangeDelegate;
@property(nonatomic, setter=_setType:) int type; // @synthesize type=_type;
@property(nonatomic, setter=_setHidEvent:) struct __IOHIDEvent *_hidEvent; // @synthesize _hidEvent;
@property(nonatomic, setter=_setSenderID:) unsigned long long _senderID; // @synthesize _senderID;
@property(nonatomic, setter=_setMaximumPossiblePressure:) float _maximumPossiblePressure; // @synthesize _maximumPossiblePressure;
@property(nonatomic, setter=_setHasForceUpdate:) _Bool _hasForceUpdate; // @synthesize _hasForceUpdate;
@property(nonatomic, setter=_setNeedsForceUpdate:) _Bool _needsForceUpdate; // @synthesize _needsForceUpdate;
@property(nonatomic, setter=_setForceCorrelationToken:) long _forceCorrelationToken; // @synthesize _forceCorrelationToken;
@property(nonatomic, setter=_setZGradient:) float _zGradient; // @synthesize _zGradient;
@property(nonatomic) float majorRadiusTolerance; // @synthesize majorRadiusTolerance=_majorRadiusTolerance;
@property(nonatomic) float majorRadius; // @synthesize majorRadius=_pathMajorRadius;
@property(nonatomic, getter=_isEaten, setter=_setEaten:) _Bool _eaten; // @synthesize _eaten;
@property(nonatomic, setter=_setEdgeAim:) unsigned int _edgeAim; // @synthesize _edgeAim;
@property(nonatomic, setter=_setEdgeType:) int _edgeType; // @synthesize _edgeType;
@property(nonatomic, setter=_setDisplacement:) struct CGSize _displacement; // @synthesize _displacement;
@property(readonly, nonatomic) float _pressure; // @synthesize _pressure;
@property(nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(nonatomic, setter=_setPathIndex:) unsigned char _pathIndex; // @synthesize _pathIndex;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)_rehitTest;
- (void)_willBeDispatchedAsEnded;
- (_Bool)_isStationaryRelativeToTouches:(id)arg1;
- (void)_updateMovementMagnitudeFromLocation:(struct CGPoint)arg1 toLocation:(struct CGPoint)arg2;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool _respectsCharge;
@property(retain, nonatomic) UIView *warpedIntoView;
@property(retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (id)_forwardingRecord;
- (void)_abandonForwardingRecord;
- (_Bool)_isAbandoningForwardingRecord;
- (id)_mutableForwardingRecord;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (int)_compareIndex:(id)arg1;
- (void)_updateWithChildEvent:(struct __IOHIDEvent *)arg1;
- (struct CGPoint)_previousLocationInSceneReferenceSpace;
- (struct CGPoint)_locationInSceneReferenceSpace;
- (struct CGPoint)_previousLocationInWindow:(id)arg1;
- (struct CGPoint)_locationInWindow:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_gestureRecognizers;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_addGestureRecognizer:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_phaseDescription;
- (_Bool)_shouldDeliverTouchForTouchesMoved;
- (void)_setPressure:(float)arg1 resetPrevious:(_Bool)arg2;
- (void)_setLocation:(struct CGPoint)arg1 preciseLocation:(struct CGPoint)arg2 inWindowResetPreviousLocation:(_Bool)arg3;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;
@property(retain, nonatomic) UIView *view;
@property(retain, nonatomic) UIWindow *window;
@property(nonatomic) _Bool isTap;
@property(nonatomic) unsigned int tapCount;
@property(nonatomic) int phase;
- (_Bool)_isFirstTouchForView;
- (void)_setIsFirstTouchForView:(_Bool)arg1;
- (void)_setTouchIdentifier:(unsigned int)arg1;
- (unsigned int)_touchIdentifier;
- (_Bool)_mightBeConsideredForForceSystemGesture;
- (_Bool)_edgeForceActive;
- (_Bool)_edgeForcePending;
@property(readonly, nonatomic) int estimatedPropertiesExpectingUpdates;
@property(readonly, nonatomic) int estimatedProperties;
@property(readonly, nonatomic) NSNumber *estimationUpdateIndex;
@property(readonly, nonatomic) float _unclampedForce;
@property(readonly, nonatomic) float maximumPossibleForce;
@property(readonly, nonatomic) float force;
- (float)_standardForceAmount;
- (_Bool)_supportsForce;
- (float)_pathMajorRadius;
@property(nonatomic, setter=_setForwardablePhase:) int _forwardablePhase;
- (void)_loadStateFromTouch:(id)arg1;
@property(nonatomic, setter=_setAltitudeAngle:) float altitudeAngle; // @synthesize altitudeAngle=_altitudeAngle;
- (struct CGVector)azimuthUnitVectorInView:(id)arg1;
- (float)azimuthAngleInView:(id)arg1;
@property(readonly, nonatomic) float azimuthAngle;
@property(nonatomic, setter=_setIsPredictedTouch:) _Bool _isPredictedTouch;
- (void)_computeAzimuthAngleInWindow;
- (struct CGPoint)precisePreviousLocationInView:(id)arg1;
- (struct CGPoint)preciseLocationInView:(id)arg1;
- (struct CGPoint)previousLocationInView:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic) _Bool sentTouchesEnded;
- (_Bool)isDelayed;
- (void)setIsDelayed:(_Bool)arg1;
- (int)info;
- (void)_setPreviousTouch:(id)arg1;
- (void)_clonePropertiesToTouch:(id)arg1;
- (id)_clone;
- (void)dealloc;
- (float)_distanceFrom:(id)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
