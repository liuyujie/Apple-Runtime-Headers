//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSString, PHAssetCollection, PHFetchResult, PHObject;

@protocol PXRelatedEntry <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *relatedTitleFontName;
@property(readonly, nonatomic) PHObject *relatedReferenceObject;
@property(readonly, nonatomic) PHAssetCollection *relatedAssetCollection;
@property(readonly, nonatomic) NSString *relatedLocalizedSubtitle;
@property(readonly, nonatomic) NSString *relatedLocalizedTitle;
@property(readonly, nonatomic) PHFetchResult *relatedKeyAssetFetchResult;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@end

