//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SUICProgressStateMachine;

@protocol SUICProgressStateMachineObserving <NSObject>
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 ignoredEvent:(unsigned int)arg2;
- (void)progressStateMachine:(SUICProgressStateMachine *)arg1 didTransitionToState:(unsigned int)arg2 fromState:(unsigned int)arg3 forEvent:(unsigned int)arg4;
@end

