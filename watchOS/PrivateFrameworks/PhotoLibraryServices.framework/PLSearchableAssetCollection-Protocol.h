//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol PLSearchableAssetCollection <NSObject>
- (NSArray *)assetUUIDsForPreviewWithCount:(unsigned int)arg1;
- (unsigned int)searchIndexCategory;
- (NSString *)searchIndexContents;
- (NSString *)uuid;
@end
