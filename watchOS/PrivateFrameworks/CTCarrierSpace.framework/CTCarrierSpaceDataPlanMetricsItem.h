//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>
{
    _Bool _capacityValid;
    NSNumber *_capacityBytes;
    int _units;
    unsigned int _capacity;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
@property(nonatomic) int units; // @synthesize units=_units;
@property(nonatomic) _Bool capacityValid; // @synthesize capacityValid=_capacityValid;
@property(retain, nonatomic) NSNumber *capacityBytes; // @synthesize capacityBytes=_capacityBytes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end
