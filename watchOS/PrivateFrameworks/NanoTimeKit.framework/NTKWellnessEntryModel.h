//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

#import "CLKTimelineEntry.h"
#import "NSCopying.h"

@class HKQuantity, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry>
{
    _Bool _databaseLoading;
    _Bool _deviceLocked;
    HKQuantity *_activeEnergyTotal;
    HKQuantity *_activeEnergyGoal;
    int _standHoursTotal;
    int _standHoursGoal;
    double _briskMinutesTotal;
    double _briskMinutesGoal;
}

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)formattingManager;
+ (id)largeUtility:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)_activityTemplateWithFamily:(int)arg1 entryModel:(id)arg2;
+ (id)idealizedEntryModel;
+ (id)lockedEntryModel;
@property(readonly, nonatomic) _Bool deviceLocked; // @synthesize deviceLocked=_deviceLocked;
@property(nonatomic) _Bool databaseLoading; // @synthesize databaseLoading=_databaseLoading;
@property(nonatomic) int standHoursGoal; // @synthesize standHoursGoal=_standHoursGoal;
@property(nonatomic) int standHoursTotal; // @synthesize standHoursTotal=_standHoursTotal;
@property(nonatomic) double briskMinutesGoal; // @synthesize briskMinutesGoal=_briskMinutesGoal;
@property(nonatomic) double briskMinutesTotal; // @synthesize briskMinutesTotal=_briskMinutesTotal;
@property(retain, nonatomic) HKQuantity *activeEnergyGoal; // @synthesize activeEnergyGoal=_activeEnergyGoal;
@property(retain, nonatomic) HKQuantity *activeEnergyTotal; // @synthesize activeEnergyTotal=_activeEnergyTotal;
- (void).cxx_destruct;
- (id)date;
- (void)setDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)availabilityState;
- (double)standHourGoalCompletionPercentage;
- (double)briskMinuteGoalCompletionPercentage;
- (double)activeEnergyGoalCompletionPercentage;
@property(readonly, nonatomic) _Bool userHasDoneActivitySetup;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)templateForComplicationFamily:(int)arg1;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

