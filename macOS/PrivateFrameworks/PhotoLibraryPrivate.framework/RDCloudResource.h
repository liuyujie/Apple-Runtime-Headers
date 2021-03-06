//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDCloudResourceModel.h>

@class NSString;

@interface RDCloudResource : RDCloudResourceModel
{
}

+ (long long)baseScoreForModel:(id)arg1;
+ (long long)baseScoreForDate:(id)arg1;
+ (id)resourcesByResourceTypeForIdentifier:(id)arg1 inDatabase:(id)arg2;
+ (id)resourcesForIdentifier:(id)arg1 inDatabase:(id)arg2;
+ (id)identifierForModel:(id)arg1;
+ (void)deleteAllCloudResourcesWithIdentifiers:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)derivativeVideoResourceTypes;
+ (id)derivativeImageResourceTypes;
+ (id)findFirstCloudResource:(id)arg1 withTypes:(id)arg2;
+ (id)cloudResourcesForIdentifiers:(id)arg1 resourceTypes:(id)arg2 database:(id)arg3;
+ (id)cloudResourcesForIdentifiers:(id)arg1 resourceType:(unsigned long long)arg2 database:(id)arg3;
+ (id)cloudResourcesForIdentifiers:(id)arg1 database:(id)arg2;
+ (id)cloudResourcesForResourceTypes:(id)arg1 model:(id)arg2;
+ (id)cloudResourceForResourceType:(unsigned long long)arg1 model:(id)arg2;
+ (id)anyCloudResourceForModel:(id)arg1;
+ (id)filterForSyncableMasterWithFingerprint:(id)arg1 masterTable:(id)arg2;
+ (id)filterForSyncableMastersWithFingerprints:(id)arg1 masterTable:(id)arg2;
+ (void)deleteCloudResourceWithDatabase:(id)arg1 reason:(unsigned short)arg2 option:(unsigned char)arg3 completionHander:(CDUnknownBlockType)arg4;
- (long long)finalScore;
- (id)modelObject;
- (BOOL)isEqual:(id)arg1;
- (void)setTransientFilePathFromAbsoluteFileURL:(id)arg1 withLibraryRootURL:(id)arg2;
- (id)absoluteFileURLForTransientFilePathWithLibraryRootURL:(id)arg1;
- (void)touchPinnedUntilDate:(double)arg1;
- (BOOL)willSetPinnedUntilDate:(double)arg1;
- (void)touchLastAccessDate;
- (BOOL)willTouchLastAccessDate;
- (short)requestDownloadOfCloudResource:(id *)arg1;
@property(retain, nonatomic) NSString *uuid;

@end

