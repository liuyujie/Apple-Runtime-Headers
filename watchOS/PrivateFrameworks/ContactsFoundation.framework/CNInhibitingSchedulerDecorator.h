//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNScheduler.h"

@class NSString;

@interface CNInhibitingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;
    CDUnknownBlockType _inhibitorFactory;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType inhibitorFactory; // @synthesize inhibitorFactory=_inhibitorFactory;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void).cxx_destruct;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned int)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned int)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned int)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithScheduler:(id)arg1 inhibitorFactory:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

