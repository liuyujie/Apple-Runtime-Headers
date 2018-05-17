//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskMetrics.h>

#import "NSSecureCoding.h"

@class NSArray, NSDateInterval;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding>
{
    NSArray *_transactionMetrics;
    NSDateInterval *_taskInterval;
    unsigned int _redirectCount;
}

+ (_Bool)supportsSecureCoding;
- (void)setRedirectCount:(unsigned int)arg1;
- (unsigned int)redirectCount;
- (void)setTaskInterval:(id)arg1;
- (id)taskInterval;
- (void)setTransactionMetrics:(id)arg1;
- (id)transactionMetrics;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithTask:(id)arg1;
- (id)init;

@end
