//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _INPBDateTime, _INPBRecurrenceValue, _INPBValueMetadata;

@protocol _INPBDateTimeRangeValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasStartDateTime;
@property(retain, nonatomic) _INPBDateTime *startDateTime;
@property(nonatomic) BOOL hasStartCalendar;
@property(nonatomic) long long startCalendar;
@property(readonly, nonatomic) BOOL hasRecurrence;
@property(retain, nonatomic) _INPBRecurrenceValue *recurrence;
@property(readonly, nonatomic) BOOL hasEndDateTime;
@property(retain, nonatomic) _INPBDateTime *endDateTime;
@property(nonatomic) BOOL hasEndCalendar;
@property(nonatomic) long long endCalendar;
@end

