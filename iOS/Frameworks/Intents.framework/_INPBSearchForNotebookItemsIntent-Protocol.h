//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@protocol _INPBSearchForNotebookItemsIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasNotebookItemIdentifier;
@property(copy, nonatomic) NSString *notebookItemIdentifier;
@property(nonatomic) _Bool hasLocationSearchType;
@property(nonatomic) int locationSearchType;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) _INPBLocation *location;
@property(nonatomic) _Bool hasItemType;
@property(nonatomic) int itemType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasDateTime;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime;
@property(nonatomic) _Bool hasDateSearchType;
@property(nonatomic) int dateSearchType;
@property(readonly, nonatomic) _Bool hasContent;
@property(copy, nonatomic) NSString *content;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsLocationSearchType:(NSString *)arg1;
- (NSString *)locationSearchTypeAsString:(int)arg1;
- (int)StringAsItemType:(NSString *)arg1;
- (NSString *)itemTypeAsString:(int)arg1;
- (int)StringAsDateSearchType:(NSString *)arg1;
- (NSString *)dateSearchTypeAsString:(int)arg1;
@end

