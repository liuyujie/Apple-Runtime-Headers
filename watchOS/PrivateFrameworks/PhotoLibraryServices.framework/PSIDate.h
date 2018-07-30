//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSIDate : NSObject
{
    long long _int64Representation;
    long long _int64RepresentationMask;
}

+ (id)descriptionWithInt64Representation:(long long)arg1;
+ (id)distantFuture;
+ (id)distantPast;
@property(readonly) long long int64RepresentationMask; // @synthesize int64RepresentationMask=_int64RepresentationMask;
@property(readonly) long long int64Representation; // @synthesize int64Representation=_int64Representation;
- (id)dateComponents;
- (id)description;
@property(readonly) int day;
@property(readonly) int month;
@property(readonly) int year;
- (id)initWithInt64Representation:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithUniversalDate:(id)arg1 calendar:(id)arg2;

@end
