//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import "CADCalendarInterface.h"

__attribute__((visibility("hidden")))
@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADCalendar:(id)arg1 hasReminders:(CDUnknownBlockType)arg2;
- (void)CADCalendar:(id)arg1 hasEvents:(CDUnknownBlockType)arg2;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
