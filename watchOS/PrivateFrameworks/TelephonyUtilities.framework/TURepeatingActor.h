//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TURepeatingAction;

@interface TURepeatingActor : NSObject
{
    _Bool _stopped;
    _Bool _currentlyPerformingAction;
    NSObject<OS_dispatch_queue> *_queue;
    TURepeatingAction *_currentRepeatingAction;
    TURepeatingAction *_pendingRepeatingAction;
    CDUnknownBlockType _attemptNextIterationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType attemptNextIterationBlock; // @synthesize attemptNextIterationBlock=_attemptNextIterationBlock;
@property(retain, nonatomic) TURepeatingAction *pendingRepeatingAction; // @synthesize pendingRepeatingAction=_pendingRepeatingAction;
@property(retain, nonatomic) TURepeatingAction *currentRepeatingAction; // @synthesize currentRepeatingAction=_currentRepeatingAction;
@property(nonatomic, getter=isCurrentlyPerformingAction) _Bool currentlyPerformingAction; // @synthesize currentlyPerformingAction=_currentlyPerformingAction;
@property(nonatomic, getter=isStopped) _Bool stopped; // @synthesize stopped=_stopped;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)_completeWithDidFinish:(_Bool)arg1;
- (void)_stopWithDidFinish:(_Bool)arg1;
- (_Bool)_hasIterationsRemaining;
- (void)_attemptNextIteration;
- (void)_beginRepeatingAction:(id)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)stop;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned int)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
