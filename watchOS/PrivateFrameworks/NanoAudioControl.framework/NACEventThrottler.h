//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface NACEventThrottler : NSObject
{
    double _lastUpdateTime;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _eventBlock;
    id _value;
    double _minimumDelay;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) double minimumDelay; // @synthesize minimumDelay=_minimumDelay;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
- (void).cxx_destruct;
- (void)cancel;
- (void)_fire;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end
