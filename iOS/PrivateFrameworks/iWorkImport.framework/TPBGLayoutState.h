//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface TPBGLayoutState : NSObject
{
    _Bool _active;
    NSDate *_startDate;
    long long _suspendCount;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end

