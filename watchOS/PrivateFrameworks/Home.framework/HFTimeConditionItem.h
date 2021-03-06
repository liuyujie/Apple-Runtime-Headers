//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFItem.h>

#import "HFConditionItem.h"

@class HFTimeCondition, NSString;

@interface HFTimeConditionItem : HFItem <HFConditionItem>
{
    HFTimeCondition *_condition;
    unsigned int _type;
}

+ (id)_formattedStringForOffset:(id)arg1;
+ (id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned int)arg2;
+ (id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned int)arg2;
+ (id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned int)arg2;
+ (id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned int)arg2;
+ (id)_nameForConditionType:(unsigned int)arg1 formattingStyle:(int)arg2;
+ (id)defaultConditionForType:(unsigned int)arg1;
+ (unsigned int)conditionTypeForCondition:(id)arg1;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) HFTimeCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithConditionType:(unsigned int)arg1 condition:(id)arg2;
- (id)initWithConditionType:(unsigned int)arg1;
- (id)initWithCondition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

