//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreRoutine/RTScenarioTrigger.h>

@interface RTScenarioTriggerArrivedEarly : RTScenarioTrigger
{
    double _secondsEarly;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double secondsEarly; // @synthesize secondsEarly=_secondsEarly;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithSecondsEarly:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
