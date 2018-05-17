//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VKAnimation : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSString *_name;
    int _priority;
    id <VKAnimationRunner> _runner;
    int _state;
    float _frequency;
    _Bool _runsForever;
}

@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool runsForever; // @synthesize runsForever=_runsForever;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)stopAnimation:(_Bool)arg1;
- (void)transferToRunner:(id)arg1;
- (void)startWithRunner:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPriority:(int)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic) _Bool timed;
@property(readonly, nonatomic) _Bool hasFrequency;
@property(nonatomic) double duration;
@property(readonly, nonatomic) _Bool running;

@end
