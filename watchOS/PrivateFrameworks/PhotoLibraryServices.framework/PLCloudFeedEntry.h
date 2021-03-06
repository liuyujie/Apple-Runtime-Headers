//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface PLCloudFeedEntry : PLManagedObject
{
}

+ (id)entityName;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)firstEntryWithType:(int)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2;
+ (id)_recentEntriesInLibrary:(id)arg1 forEntity:(id)arg2 usingPredicate:(id)arg3 earliestDate:(id)arg4 latestDate:(id)arg5 limit:(int)arg6 sortDescriptors:(id)arg7;
+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(int)arg4 filter:(int)arg5 sortDescriptors:(id)arg6;
+ (id)entityForFilter:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)additionalPrediateForFilter:(int)arg1;
+ (id)filterPredicateForFilter:(int)arg1;
+ (id)notificationPredicateForFilter:(int)arg1;
+ (id)allEntriesInLibrary:(id)arg1;
+ (id)entriesSortDescriptorsAscending:(_Bool)arg1;
- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;
@property(readonly, nonatomic) int entryPriority;
@property(readonly, nonatomic) int entryType;
@property(readonly, nonatomic) NSURL *URIRepresentation;

// Remaining properties
@property(retain, nonatomic) NSString *entryAlbumGUID; // @dynamic entryAlbumGUID;
@property(retain, nonatomic) NSDate *entryDate; // @dynamic entryDate;
@property(retain, nonatomic) NSString *entryInvitationRecordGUID; // @dynamic entryInvitationRecordGUID;
@property(retain, nonatomic) NSNumber *entryPriorityNumber; // @dynamic entryPriorityNumber;
@property(retain, nonatomic) NSNumber *entryTypeNumber; // @dynamic entryTypeNumber;

@end

