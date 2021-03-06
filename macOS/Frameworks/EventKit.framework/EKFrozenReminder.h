//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKFrozenCalendarItem.h>

#import "EKProtocolReminderOccurrence.h"

@class NSData, NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSTimeZone, NSURL;

@interface EKFrozenReminder : EKFrozenCalendarItem <EKProtocolReminderOccurrence>
{
    BOOL _cachedHasLocationAlarm;
    BOOL _canEditRecurrence;
    BOOL _statusCompleteNotByDate;
    NSURL *_action;
    NSData *_appLink;
    NSDate *_completionDate;
    NSDate *_dueDateUnadjustedFromUTC;
    NSNumber *_orderNumber;
    NSDate *_cachedAdjustedDueDate;
}

+ (Class)meltedClass;
@property(readonly) NSDate *cachedAdjustedDueDate; // @synthesize cachedAdjustedDueDate=_cachedAdjustedDueDate;
@property(readonly, nonatomic) BOOL statusCompleteNotByDate; // @synthesize statusCompleteNotByDate=_statusCompleteNotByDate;
@property(readonly, copy, nonatomic) NSNumber *orderNumber; // @synthesize orderNumber=_orderNumber;
@property(readonly, copy, nonatomic) NSDate *dueDateUnadjustedFromUTC; // @synthesize dueDateUnadjustedFromUTC=_dueDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(readonly, nonatomic) BOOL canEditRecurrence; // @synthesize canEditRecurrence=_canEditRecurrence;
@property(readonly, nonatomic) BOOL cachedHasLocationAlarm; // @synthesize cachedHasLocationAlarm=_cachedHasLocationAlarm;
@property(readonly, copy, nonatomic) NSData *appLink; // @synthesize appLink=_appLink;
@property(readonly, copy, nonatomic) NSURL *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (BOOL)isReminder;
@property(readonly, nonatomic) NSDate *dueDate;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL cachedHasAlarm;
@property(readonly, nonatomic) BOOL cachedHasAttachment;
@property(readonly, nonatomic) BOOL cachedHasAttendee;
@property(readonly, nonatomic) BOOL cachedIsCalendarOwnerInvitedAttendee;
@property(readonly, nonatomic) BOOL cachedIsCurrentUserInvitedAttendee;
@property(readonly, nonatomic) NSNumber *calendarItemPermissionNumber;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy, nonatomic) NSString *contactIdentifiersString;
@property(readonly, retain, nonatomic) id <CalendarModelProtocol> container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) BOOL defaultAlarmWasDeleted;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, copy, nonatomic) NSData *localStructuredData;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) BOOL organizedByMe;
@property(readonly, retain, nonatomic) id <EKProtocolParticipant> organizer;
@property(readonly, copy, nonatomic) NSString *organizerEmail;
@property(readonly, copy, nonatomic) NSString *organizerEncodedLikenessData;
@property(readonly, copy, nonatomic) NSString *organizerName;
@property(readonly, copy, nonatomic) NSString *organizerPhoneNumber;
@property(readonly, copy, nonatomic) NSURL *organizerURL;
@property(readonly, copy, nonatomic) id <EKProtocolParticipant> participantForMe;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly, retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSString *recurrenceRuleString;
@property(readonly, copy, nonatomic) NSString *recurrenceSetID;
@property(readonly, copy, nonatomic) NSString *relatedExternalID;
@property(readonly, copy, nonatomic) NSString *scheduleAgentString;
@property(readonly, copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(readonly, copy, nonatomic) NSData *structuredData;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSTimeZone *timeZoneObject;

@end

