//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, NSString;

@interface FMSynchronizer : NSObject
{
    _Bool _timeoutOccurred;
    NSString *_info;
    NSObject<OS_dispatch_semaphore> *_sem;
    double _timeout;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
- (void).cxx_destruct;
- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end

