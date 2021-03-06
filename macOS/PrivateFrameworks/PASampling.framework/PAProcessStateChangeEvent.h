//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PASampleTaskData;

@interface PAProcessStateChangeEvent : NSObject
{
    PASampleTaskData *_taskData;
    double _machTimestamp;
    unsigned long long _stateChangeType;
}

@property(nonatomic) unsigned long long stateChangeType; // @synthesize stateChangeType=_stateChangeType;
@property(readonly, nonatomic) double machTimestamp; // @synthesize machTimestamp=_machTimestamp;
@property(readonly, nonatomic) PASampleTaskData *taskData; // @synthesize taskData=_taskData;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTaskData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;
- (id)initUnknownProcessStateChangeEventWithPid:(int)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3;

@end

