//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CMMovementDisorderManagerInternal : NSObject
{
    struct CLConnectionClient *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (id)_getMonitorKinesiasExpirationDate;
- (id)_getLastProcessedDate;
- (void)_queryTremorFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_queryDyskineticSymptomFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_monitorKinesiasForDuration:(double)arg1;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
