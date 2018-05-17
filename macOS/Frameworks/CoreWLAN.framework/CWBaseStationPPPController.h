//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CWBaseStationPPPController : NSObject
{
    NSDictionary *_pppStatus;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_queue> *_pollQueue;
    BOOL _dialin;
}

+ (id)PPPController;
@property BOOL dialin; // @synthesize dialin=_dialin;
@property(copy) NSDictionary *pppStatus; // @synthesize pppStatus=_pppStatus;
- (void)hangup;
- (void)connect;
- (void)stopPollingPPP;
- (void)startPollingPPP;
- (void)poll;
- (void)setPollInterval:(double)arg1;
- (id)pollPPPStatus;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
