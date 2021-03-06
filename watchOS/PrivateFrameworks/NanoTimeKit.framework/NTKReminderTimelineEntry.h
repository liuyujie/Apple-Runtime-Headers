//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel
{
    _Bool _displayAsConflicting;
    NSDate *_dueDate;
    NSString *_primaryReminderTitle;
    NSString *_primaryReminderId;
    NSString *_secondaryReminderTitle;
    unsigned int _overlappingReminderCount;
}

+ (id)loadingEntryForFamily:(int)arg1;
+ (id)lockedEntryForFamily:(int)arg1;
+ (id)_analogReminderImageProvider;
+ (id)_reminderImageAnalog;
@property(nonatomic) unsigned int overlappingReminderCount; // @synthesize overlappingReminderCount=_overlappingReminderCount;
@property(nonatomic) _Bool displayAsConflicting; // @synthesize displayAsConflicting=_displayAsConflicting;
@property(retain, nonatomic) NSString *secondaryReminderTitle; // @synthesize secondaryReminderTitle=_secondaryReminderTitle;
@property(retain, nonatomic) NSString *primaryReminderId; // @synthesize primaryReminderId=_primaryReminderId;
@property(retain, nonatomic) NSString *primaryReminderTitle; // @synthesize primaryReminderTitle=_primaryReminderTitle;
@property(retain, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
- (void).cxx_destruct;
- (id)_createLargeUtilityTemplate;
- (id)_createLargeModularTemplate;
- (id)templateForComplicationFamily:(int)arg1;
- (id)description;

@end

