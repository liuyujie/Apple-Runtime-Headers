//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSProcessWatchdog.h"

@class FBProcessWatchdogEventContext;

@interface FBProcessWatchdog : FBSProcessWatchdog
{
    int _event;
    FBProcessWatchdogEventContext *_eventContext;
}

@property(readonly, retain, nonatomic) FBProcessWatchdogEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(readonly, nonatomic) int event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end

