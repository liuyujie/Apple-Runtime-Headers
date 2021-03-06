//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, PLEntryNotificationOperatorComposition;

@interface PLMonotonicTimer : NSObject
{
    NSDate *_monotonicFireDate;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSMutableSet *_canceledFireDates;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
}

+ (BOOL)debugInstance;
+ (id)debugScheduledTimerWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
+ (id)scheduledTimerWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
@property(retain) PLEntryNotificationOperatorComposition *wakeEntryNotification; // @synthesize wakeEntryNotification=_wakeEntryNotification;
@property(retain) NSMutableSet *canceledFireDates; // @synthesize canceledFireDates=_canceledFireDates;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *monotonicFireDate; // @synthesize monotonicFireDate=_monotonicFireDate;
- (void).cxx_destruct;
- (void)reschedule;
- (void)timerFiredForMonotonicFireDate:(id)arg1;
- (void)_cancel;
- (void)schedule;
- (void)_setMonotonicFireDate:(id)arg1;
- (id)description;
- (void)cancel;
- (void)fire;
- (void)dealloc;
- (id)initWithMonotonicFireDate:(id)arg1 withInterval:(double)arg2 withQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

@end

