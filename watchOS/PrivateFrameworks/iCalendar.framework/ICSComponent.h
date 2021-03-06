//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICSWriting.h"

@class ICSDate, ICSDuration, ICSStructuredLocation, ICSTrigger, ICSUserAddress, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICSComponent : NSObject <ICSWriting>
{
    NSMutableDictionary *_properties;
    NSMutableArray *_components;
    NSString *_unrecognizedComponentName;
}

+ (id)name;
+ (id)makeUID;
+ (int)statusFromString:(id)arg1;
+ (id)stringFromStatus:(int)arg1;
+ (id)stringFromRelationshipType:(unsigned int)arg1;
+ (unsigned int)relationshipTypeFromString:(id)arg1;
+ (id)inheritanceKeywords;
@property(retain) NSMutableArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)ICSStringWithOptions:(unsigned int)arg1;
- (_Bool)ignorePropertyWithName:(id)arg1;
- (void)ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)setProperty:(id)arg1 forName:(id)arg2;
- (void)setProperties:(id)arg1 forName:(id)arg2;
- (id)propertiesForName:(id)arg1;
- (void)removePropertiesForName:(id)arg1;
- (_Bool)validate:(id *)arg1;
- (id)debugDescription;
- (id)init;
@property(retain) NSString *unrecognizedComponentName;
- (id)properties;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3;
- (void)setPropertyValue:(id)arg1 forName:(id)arg2;
- (void)removeComponent:(id)arg1;
- (void)addComponent:(id)arg1;
@property(retain) NSString *x_apple_universalID;
@property(retain) NSString *x_apple_relatedExternalID;
@property(retain) NSString *x_apple_contactIdentifiers;
@property(retain) NSString *x_apple_suggestionInfoUniqueKey;
@property(retain) ICSDate *x_apple_suggestionInfoTimestamp;
@property(retain) NSString *x_apple_suggestionInfoOpaqueKey;
@property unsigned int x_apple_suggestionInfoChangedFields;
@property _Bool x_apple_suggestionInfoChangesAcknowledged;
- (void)setForcedAllDay:(_Bool)arg1;
- (_Bool)forcedAllDay;
- (id)x_apple_end_location;
- (void)setX_apple_end_location:(id)arg1;
- (id)x_apple_travel_start;
- (void)setX_apple_travel_start:(id)arg1;
- (void)setX_apple_travel_advisory_behavior:(id)arg1;
- (id)x_apple_travel_advisory_behavior;
- (void)setX_apple_travel_duration:(id)arg1;
- (id)x_apple_travel_duration;
@property(retain) NSArray *conferences;
@property(retain) NSString *x_apple_serverFilename;
@property(retain) NSString *x_apple_scheduletag;
@property(retain) NSString *x_apple_etag;
@property(retain) ICSStructuredLocation *x_apple_structured_location;
@property _Bool x_apple_ignore_on_restore;
@property _Bool x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_permission;
@property(retain) NSString *x_apple_ews_itemid;
@property(retain) NSString *x_apple_ews_changekey;
@property(retain) NSString *x_apple_dropbox;
@property int x_calendarserver_access;
@property unsigned int priority;
@property(retain) NSURL *url;
@property(retain) NSString *uid;
@property(retain) ICSTrigger *trigger;
@property(retain) NSString *summary;
@property(retain) NSArray *relatedTo;
@property(retain) NSString *statusString;
@property int status;
@property unsigned int sequence;
@property(retain) NSArray *rrule;
@property(retain) ICSDate *recurrence_id;
@property(retain) NSArray *rdate;
@property(retain) ICSUserAddress *organizer;
@property(retain) NSString *location;
@property(retain) ICSDate *last_modified;
@property(retain) NSArray *exrule;
@property(retain) NSArray *exdate;
@property(retain) ICSDuration *duration;
@property(retain) ICSDate *dtend;
@property(readonly) _Bool isAllDay;
@property(retain) ICSDate *dtstart;
@property(retain) ICSDate *dtstamp;
@property(retain) NSString *description;
@property(retain) ICSDate *created;
@property int classification;
@property(retain) NSArray *attendee;
@property(retain) NSArray *attach;
- (id)allProperties;
- (void)fixComponent;
- (void)fixSuggestionInfo;
- (void)fixExceptionDates;
- (void)fixExceptionRules;
- (void)fixRecurrenceDates;
- (void)fixRecurrenceRules;
- (void)fixAttachments;
- (void)fixAttendees;
- (void)fixRelatedTo;
- (void)fixAlarms;
- (void)fixPropertiesInheritance:(id)arg1;

@end

