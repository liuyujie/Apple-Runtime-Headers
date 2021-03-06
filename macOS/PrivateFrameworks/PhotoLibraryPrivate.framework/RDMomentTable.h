//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDMomentTable : RDTable
{
    LiKeyPath *_startDateKeyPath;
    LiKeyPath *_endDateKeyPath;
    LiKeyPath *_representativeDateKeyPath;
    LiKeyPath *_versionCountKeyPath;
    LiKeyPath *_yearUuidKeyPath;
    LiKeyPath *_collectionUuidKeyPath;
    LiKeyPath *_generationTypeKeyPath;
    LiKeyPath *_reverseLocationDataKeyPath;
    LiKeyPath *_reverseLocationDataIsValidKeyPath;
    LiKeyPath *_needsRebuildKeyPath;
    LiKeyPath *_primaryPlaceDataKeyPath;
    LiKeyPath *_secondaryPlaceDataKeyPath;
    LiKeyPath *_userTitlesDataKeyPath;
    LiKeyPath *_approximateLocationDataKeyPath;
    LiKeyPath *_lastModifiedDateKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *lastModifiedDateKeyPath; // @synthesize lastModifiedDateKeyPath=_lastModifiedDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *approximateLocationDataKeyPath; // @synthesize approximateLocationDataKeyPath=_approximateLocationDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *userTitlesDataKeyPath; // @synthesize userTitlesDataKeyPath=_userTitlesDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *secondaryPlaceDataKeyPath; // @synthesize secondaryPlaceDataKeyPath=_secondaryPlaceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *primaryPlaceDataKeyPath; // @synthesize primaryPlaceDataKeyPath=_primaryPlaceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *needsRebuildKeyPath; // @synthesize needsRebuildKeyPath=_needsRebuildKeyPath;
@property(readonly, nonatomic) LiKeyPath *reverseLocationDataIsValidKeyPath; // @synthesize reverseLocationDataIsValidKeyPath=_reverseLocationDataIsValidKeyPath;
@property(readonly, nonatomic) LiKeyPath *reverseLocationDataKeyPath; // @synthesize reverseLocationDataKeyPath=_reverseLocationDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *generationTypeKeyPath; // @synthesize generationTypeKeyPath=_generationTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *collectionUuidKeyPath; // @synthesize collectionUuidKeyPath=_collectionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *yearUuidKeyPath; // @synthesize yearUuidKeyPath=_yearUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionCountKeyPath; // @synthesize versionCountKeyPath=_versionCountKeyPath;
@property(readonly, nonatomic) LiKeyPath *representativeDateKeyPath; // @synthesize representativeDateKeyPath=_representativeDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *endDateKeyPath; // @synthesize endDateKeyPath=_endDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *startDateKeyPath; // @synthesize startDateKeyPath=_startDateKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)iLMBPropertyPaths;
- (id)gridPropertyPaths;

@end

