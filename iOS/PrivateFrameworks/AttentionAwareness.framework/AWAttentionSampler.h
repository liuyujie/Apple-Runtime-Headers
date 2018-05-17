//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AWSampleLogger, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
    int _currentState;
    AWSampleLogger *_sampleLogger;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _samplingSuppressedMask;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastPollTimeoutTime;
}

@property(nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
- (void).cxx_destruct;
- (id)initWithMask:(unsigned long long)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2;
- (void)finishDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (void)startDeadlineComputation;
- (void)setUnitTestMode;
- (id)init;

@end
