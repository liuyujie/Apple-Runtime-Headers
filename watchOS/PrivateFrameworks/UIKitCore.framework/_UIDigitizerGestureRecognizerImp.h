//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UIDigitizerGestureRecognizerImp : NSObject
{
    id <_UIDigitizerGestureRecognizerImpDelegate> _delegate;
    float _minimumPressDuration;
    float _maximumPressDuration;
    int _numberOfActiveTouches;
    NSTimer *_shortTimer;
    struct CGPoint _digitizerLocation;
    double _pressEndToTouchBeginDuration;
    double _touchEndToPressEndDuration;
    double _touchEndTime;
    double _pressBeginTime;
    double _pressEndTime;
    double _lastRecognitionTime;
}

@property(nonatomic) __weak NSTimer *shortTimer; // @synthesize shortTimer=_shortTimer;
@property(nonatomic) double lastRecognitionTime; // @synthesize lastRecognitionTime=_lastRecognitionTime;
@property(nonatomic) double pressEndTime; // @synthesize pressEndTime=_pressEndTime;
@property(nonatomic) double pressBeginTime; // @synthesize pressBeginTime=_pressBeginTime;
@property(nonatomic) double touchEndTime; // @synthesize touchEndTime=_touchEndTime;
@property(nonatomic) double touchEndToPressEndDuration; // @synthesize touchEndToPressEndDuration=_touchEndToPressEndDuration;
@property(nonatomic) double pressEndToTouchBeginDuration; // @synthesize pressEndToTouchBeginDuration=_pressEndToTouchBeginDuration;
@property(nonatomic) int numberOfActiveTouches; // @synthesize numberOfActiveTouches=_numberOfActiveTouches;
@property(nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property(nonatomic) float maximumPressDuration; // @synthesize maximumPressDuration=_maximumPressDuration;
@property(nonatomic) float minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property(nonatomic) __weak id <_UIDigitizerGestureRecognizerImpDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)defaultDigitizerLocation;
- (void)_shortTimerFired:(id)arg1;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

