//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolMutableObject.h"
#import "OccurrenceModelProtocol.h"

@class NSData, NSDate, NSNumber, NSString, NSTimeZone, NSURL;

@protocol MutableOccurrenceModelProtocol <OccurrenceModelProtocol, EKProtocolMutableObject>
@property(copy, nonatomic) NSData *localStructuredData;
@property(copy, nonatomic) NSData *structuredData;
@property(copy, nonatomic) NSString *relatedExternalID;
@property(copy, nonatomic) NSString *contactIdentifiersString;
@property(copy, nonatomic) NSString *recurrenceSetID;
@property(retain, nonatomic) NSDate *recurrenceDateUnadjustedFromUTC;
@property(copy, nonatomic) NSDate *startDateUnadjustedFromUTC;
@property(copy, nonatomic) NSTimeZone *timeZoneObject;
@property(copy, nonatomic) NSNumber *priorityNumber;
@property(copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) NSString *notes;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *scheduleAgentString;
@property(copy, nonatomic) NSString *recurrenceRuleString;
@property(copy, nonatomic) id <EKProtocolStructuredLocation> ekStructuredLocation;
@property(retain, nonatomic) id <CalendarModelProtocol> container;
- (void)setAllDay:(BOOL)arg1;
@end

