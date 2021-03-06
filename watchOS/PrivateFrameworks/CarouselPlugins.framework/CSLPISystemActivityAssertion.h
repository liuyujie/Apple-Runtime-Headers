//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLPIDispatchTimer, NSObject<OS_dispatch_queue>, NSString;

@interface CSLPISystemActivityAssertion : NSObject
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    CSLPIDispatchTimer *_timeoutTimer;
    unsigned int _assertionID;
}

- (void).cxx_destruct;
- (void)_timeoutAssertion;
- (void)relinquish;
- (void)take;
@property(readonly, nonatomic, getter=isAsserted) _Bool asserted;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end

