//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString;

@interface PHCollection : PHObject
{
    NSString *_transientIdentifier;
}

+ (id)photoLibraryFromCollection:(id)arg1 defaultToSharedLibrary:(BOOL)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *transientIdentifier;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (BOOL)canPerformEditOperation:(long long)arg1;
@property(readonly, nonatomic) BOOL canContainCollections;
@property(readonly, nonatomic) BOOL canContainAssets;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end

