//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface _HKActivityStatisticsStandHourInfo : NSObject <NSSecureCoding>
{
    int _state;
    double _timeStamp;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 state:(int)arg2;
- (void)encodeWithCoder:(id)arg1;

@end
