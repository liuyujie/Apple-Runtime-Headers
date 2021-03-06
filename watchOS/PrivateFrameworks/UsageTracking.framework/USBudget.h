//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSSet, NSString;

@interface USBudget : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSSet *_items;
    NSString *_calendarIdentifier;
    NSDictionary *_schedule;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy) NSDictionary *schedule; // @synthesize schedule=_schedule;
@property(readonly, copy) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(readonly, copy) NSSet *items; // @synthesize items=_items;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;

@end

