//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject
{
    NSMutableArray *_resetBlocks;
    _Bool _isDecaying;
    _Bool _isHolding;
    double _lastUpdate;
    double _timeoutDuration;
}

@property(readonly, nonatomic) _Bool isHolding; // @synthesize isHolding=_isHolding;
@property(readonly, nonatomic) _Bool isDecaying; // @synthesize isDecaying=_isDecaying;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void).cxx_destruct;
- (void)onResetDo:(CDUnknownBlockType)arg1;
- (void)resetActiveDecayTo:(double)arg1;
- (void)startOrUpdateDecay;
- (void)updateDecay;
- (void)reset;
- (void)resetDecayTo:(double)arg1;
@property(readonly, nonatomic) _Bool isActive;
- (void)startDecaying;
- (id)initWithTimeoutDuration:(double)arg1;

@end

